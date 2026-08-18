# Story 

### 🏙️ গল্প: একটা Program-এর Memory City

ধরো একটা শহর আছে—নাম Memory City।

এই শহরে দুই ধরনের address আছে:

Virtual Address → কাগজে লেখা ঠিকানা
Physical Address → আসল বাড়ির ঠিকানা

### আর এই শহরের গুরুত্বপূর্ণ চরিত্র:
```
👨‍💻 Compiler
👮 OS
🧠 CPU
🔄 MMU
🏠 RAM
💾 Disk
```
এবার তোমার program-কে গল্পের একজন মানুষ ভাবো।

## 📖 Chapter 1 — Compiler-এর কাছে Program গেল

তুমি লিখলে:

```c
int x = 10;
int y = 20;
printf("%d", x + y);
```

তুমি এই code-টা Compiler-এর কাছে দিলে।

### Compiler বলল:

> ঠিক আছে, আমি তোমার code-কে machine code-এ convert করে executable বানিয়ে দিচ্ছি।

### Compiler দেখে:
```c
x → int → 4 bytes (ধরো)
y → int → 4 bytes
```

Compiler জানে কত memory দরকার, কী instruction চালাতে হবে ইত্যাদি।

### কিন্তু একটা জিনিস মনে রাখবে:

> ❌ Compiler সাধারণত বলে না: x RAM-এর 0x8A40 address-এ থাকবে।

কারণ program এখনো কোন particular RAM location-এ চলছে সেটা OS/runtime-এর ব্যাপার।

## 📖 Chapter 2 — OS বলল, "Program, তুমি আমার শহরে ঢুকতে পারো"

এখন তুমি executable file-টা Run করলে।

### OS এসে বলল:

> ঠিক আছে, আমি তোমার program-কে একটা Virtual Address Space দিচ্ছি।

#### ধরো OS program-কে এমন একটা imaginary map দিল:
```
Virtual Address Space

0x0000 ──────────────
       Code
       Data
       Heap
       ...
0xFFFF ──────────────
```

এটা একটা logical/virtual address space।

#### এখন program মনে করে:

> এই address space-টাই আমার memory!

#### কিন্তু আসল ঘটনা হলো—

এই addressগুলো RAM-এর actual address নয়।

## 📖 Chapter 3 — Program বলল, "আমার x কোথায়?"

#### ধরো x-এর জন্য program একটা virtual address ব্যবহার করছে:
```
x → Virtual Address = 0x1234
```

### এখন program বলছে:

> আমার x দরকার। Address 0x1234 থেকে data দাও।

### এখানে একটা বিশাল প্রশ্ন:

0x1234 কি RAM-এর address?

### ❌ না।

এটা Virtual Address।

## 📖 Chapter 4 — CPU-এর entry

Program-এর instruction CPU execute করছে।

### CPU বলল:

> ঠিক আছে, program 0x1234 address-এর data চাচ্ছে।

CPU সরাসরি RAM-কে 0x1234 দেয় না।

CPU-এর ভিতরের MMU (Memory Management Unit)-এর কাছে address যায়।
```
Program
   ↓
Virtual Address
   ↓
CPU
   ↓
MMU
```

## 📖 Chapter 5 — MMU-এর কাজ

MMU বলল:

> "এক মিনিট! 0x1234 তো Virtual Address। আমাকে দেখতে হবে এর আসল Physical Address কোনটা।"

MMU Page Table দেখে।

Page Table হলো অনেকটা একটা mapping list:
```
Virtual Page       Physical Frame

0x1000     →       RAM 0x8000
0x2000     →       RAM 0xA000
0x3000     →       RAM 0x5000
```

ধরো:

```
Virtual Address
0x1234
   ↓
Page Table
   ↓
Physical Address
0x8234
```

অর্থাৎ:
```
0x1234  ─────→  0x8234
Virtual          Physical
```

## 📖 Chapter 6 — এবার সত্যিকারের RAM

এখন CPU/MMU বলল:

> "আচ্ছা, x আসলে RAM-এর 0x8234 location-এ আছে।"

তারপর RAM থেকে data আনা হলো:

```
Virtual Address
      0x1234
         ↓
        MMU
         ↓
Physical Address
      0x8234
         ↓
        RAM
         ↓
       Data: 10
```

**🎉 এই হলো পুরো magic!**

## 🤔 কিন্তু 10 RAM-এ গেল কখন?

এটাই তোমার আগের প্রশ্নের মূল উত্তর।

Program যখন run হচ্ছে এবং x-এর memory ব্যবহার করার দরকার হচ্ছে, তখন OS memory page RAM-এ map/load করে।

যদি প্রয়োজনীয় page RAM-এ আগে থেকেই থাকে:

```
Virtual → MMU → RAM
```

আর যদি RAM-এ না থাকে, তাহলে page fault হতে পারে।

তখন OS ব্যবস্থা নেয়—প্রয়োজনীয় page disk/SSD থেকে RAM-এ আনতে পারে, তারপর mapping করে।

```
Disk/SSD
   ↓
 RAM
   ↓
Page Table update
   ↓
MMU
   ↓
Program আবার data access করে
```

## 💾 তাহলে Disk-এর ভূমিকা কী?

Disk-কে তুমি বড় storage room ভাবো।

RAM হলো:

> "এখন যেসব জিনিস নিয়ে কাজ করছি, সেগুলো রাখো।"

Disk হলো:

> "বাকি জিনিস এখানে রাখা যাবে।"

তাই Virtual Address Space Disk-এ পড়ে থাকে না।

Virtual Address হলো program-এর logical address।

তারপর সেই address-এর data বর্তমানে RAM-এ থাকতে পারে, অথবা কিছু memory page disk-এ backed হতে পারে।

### 🧠 এবার পুরো গল্প এক লাইনে

```তুমি Code লিখলে
      ↓
Compiler executable বানাল
      ↓
OS program চালাল
      ↓
OS Virtual Address Space দিল
      ↓
Program Virtual Address ব্যবহার করল
      ↓
CPU সেই address পেল
      ↓
MMU Page Table দেখে
      ↓
Virtual Address → Physical Address
      ↓
RAM থেকে Data access
```

### 🔥 সবচেয়ে important ৫টা কথা

Compiler:

> "কী code এবং কত memory লাগবে সেটা তৈরি করি।"

OS:

> "Program-কে একটা Virtual Address Space দিই এবং memory manage করি।"

Virtual Address:

> "Program যে logical address ব্যবহার করে।"

MMU:

> "Virtual Address-কে Physical Address-এ translate করি।"

RAM:

> "শেষ পর্যন্ত actual data এখানে physical memory-তে থাকে।"

🎯 একটা analogy মনে রাখো

ধরো তুমি একটা হোটেলে গেলে।

Virtual Address = তোমার room number
Physical Address = হোটেলের actual building-এর নির্দিষ্ট room/location
Page Table = reception-এর register, যেখানে room number → actual location mapping আছে
MMU = receptionist, যে mapping দেখে তোমাকে সঠিক জায়গায় পাঠায়
RAM = হোটেলের actual rooms
OS = hotel manager
Program = guest

Guest কখনো পুরো hotel-এর physical structure জানে না। সে শুধু room number জানে।

একইভাবে program সাধারণত virtual address নিয়েই কাজ করে; RAM-এর physical location নিয়ে তাকে চিন্তা করতে হয় না।

এটাই Virtual Memory-এর মূল idea।














## Memory Alignment
### 1. Why does Memory Alignment exist?

তোমার প্রশ্ন ছিল:

> char এর address আর int এর address এর মধ্যে 7 byte gap কেন?

> int আর double এর মধ্যে 8 byte gap কেন?

এটা বুঝতে হলে CPU কীভাবে Memory Access করে সেটা বুঝতে হবে।
CPU এক এক করে byte পড়তে পছন্দ করে না।
#### CPU চায়—
"আমাকে এমন Address দাও যেটা আমার Hardware-এর জন্য Convenient।"
এটাই Alignment।

