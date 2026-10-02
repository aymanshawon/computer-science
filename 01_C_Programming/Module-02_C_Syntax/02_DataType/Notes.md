# 📚 Module 02 — Lesson 02

# Data Types

---

## Chapter 1 — Why Data Types Exist?

আমি তোমাকে একটা প্রশ্ন করি।

ধরো আমি তোমাকে শুধু বললাম—

> **"আমাকে একটা Box দাও।"**

তুমি কী জিজ্ঞেস করবে?

* কত বড় Box?
* কী রাখবে?
* বই?
* মোবাইল?
* একটা গাড়ির ইঞ্জিন?

কারণ **সবকিছুর জন্য একই Box ব্যবহার করা যায় না।**

---

## Computer-ও একই প্রশ্ন করে।

তুমি লিখলে:

```c
age = 25;
```

Computer বলে:

> "ঠিক আছে, কিন্তু..."

* 25 কি Integer?
* Float?
* Character?
* Double?
* Long?
* Short?

Computer আন্দাজ করতে পারে না।

তাই তুমি বলে দাও—

```c
int age = 25;
```

মানে,

> **"age Variable-এ Integer রাখব।"**

---

# তাহলে Data Type-এর কাজ কী?

## Definition

> **Data Type বলে দেয় একটি Variable কী ধরনের Data রাখবে এবং সেই Data রাখার জন্য কত Byte Memory লাগবে।**

এখানে দুইটা গুরুত্বপূর্ণ তথ্য আছে:

1. **কী ধরনের Data?**
2. **কত Memory লাগবে?**

---

# একটা Real Example

ধরো তোমার কাছে ৪টা Container আছে।

```
┌─────────────┐
│  char Box   │
└─────────────┘

┌────────────────────┐
│      int Box       │
└────────────────────┘

┌────────────────────────────┐
│        double Box          │
└────────────────────────────┘
```

সব Box-এর Size এক না।

---

# Memory Visualization

ধরো (একটি সাধারণ 64-bit Linux System-এ):

```c
char grade = 'A';
```

Memory:

```
Address      Data

0x1000       'A'
```

Size:

```
1 Byte
```

---

```c
int age = 25;
```

Memory:

```
Address

0x2000
0x2001
0x2002
0x2003
```

Size:

```
4 Byte
```

---

```c
double pi = 3.14159;
```

Memory:

```
Address

0x3000
0x3001
0x3002
0x3003
0x3004
0x3005
0x3006
0x3007
```

Size:

```
8 Byte
```

---

# এখন প্রশ্ন

কেন `int` 4 Byte?

কেন 400 Byte না?

কারণ CPU-এর Architecture, ABI এবং Compiler-এর Rules অনুযায়ী `int`-এর একটি নির্দিষ্ট Size থাকে (অনেক আধুনিক সিস্টেমে 4 Byte)। পরে Computer Architecture Module-এ এটা গভীরভাবে শিখব।

---

# প্রথম Experiment

নিচের Code লিখো।

```c
#include <stdio.h>

int main(void)
{
    printf("char   : %zu\n", sizeof(char));
    printf("int    : %zu\n", sizeof(int));
    printf("float  : %zu\n", sizeof(float));
    printf("double : %zu\n", sizeof(double));

    return 0;
}
```

Compile:

```bash
gcc main.c -o main
```

Run:

```bash
./main
```

---

## তুমি কী Output পেতে পারো?

অনেক Linux System-এ:

```
char   : 1
int    : 4
float  : 4
double : 8
```

⚠️ **খেয়াল করো:** এগুলো অনেক System-এ এমন হয়, কিন্তু C Standard সব Platform-এ একই Size বাধ্যতামূলক করে না। তাই আমরা `sizeof()` দিয়ে যাচাই করি।

---

# এবার একটা Mental Model

অনেকেই ভাবে—

```
int
```

মানে শুধু Integer।

না।

আরও একটা কাজ করে।

```
int

↓

Compiler

↓

"এই Variable-এর জন্য 4 Byte (সাধারণত) Memory লাগবে।"
```

---

# Why `sizeof()`?

ধরো আমি জিজ্ঞেস করলাম—

```
int age;
```

Compiler কিভাবে জানবে কত Memory লাগবে?

উত্তর:

কারণ Data Type জানে।

তাই

```c
sizeof(int)
```

Compiler-কে জিজ্ঞেস করছে—

> "একটা `int` Store করতে কত Byte লাগবে?"

---

# 🧠 Mini Quiz (এখনই উত্তর দিও না, আগে ভাবো)

ধরো:

```c
char c = 'A';
int age = 25;
double pi = 3.14;
```

**প্রশ্ন:**

কোন Variable সবচেয়ে কম Memory ব্যবহার করবে?

A)

```c
char
```

B)

```c
int
```

C)

```c
double
```

---

## 🎯 আজকের Question

> **Compiler কি `sizeof(int)` Program Run হওয়ার পরে বের করে, নাকি Compile করার সময়ই জানে?**

`sizeof(int) → Compile time` - এই জানা যায় ✅
Program run হওয়ার পরে নয়।

---

# প্রথম প্রশ্ন

তুমি কি জানো **Byte** কী?

অনেকেই বলে—

> "1 Byte"

কিন্তু প্রশ্ন করলে—

> "Byte আসলে কী?"

উত্তর দিতে পারে না।

---

## Bit → Byte

Computer-এর সবচেয়ে ছোট তথ্যের একক হলো **Bit**।

একটা Bit-এর মাত্র দুইটা অবস্থা হতে পারে।

```text
0

বা

1
```

এখন ৮টা Bit একসাথে হলে হয়—

```text
10101100
```

এটাকে বলে—

```text
1 Byte
```

অর্থাৎ,

```text
1 Byte = 8 Bits
```

---

# তাহলে `char` কেন 1 Byte?

কারণ একটি Character সংরক্ষণ করার জন্য সাধারণত **1 Byte** যথেষ্ট।

উদাহরণ:

```c
char grade = 'A';
```

ASCII Encoding-এ:

```text
'A'

↓

65

↓

Binary

01000001
```

গুনে দেখো।

```text
01000001
```

এখানে **8টা Bit** আছে।

অর্থাৎ

```text
1 Byte
```

---

# তাহলে `int` কেন 4 Byte?

এখন একটা প্রশ্ন।

যদি `int`-ও 1 Byte হতো,

তাহলে সর্বোচ্চ কত পর্যন্ত সংখ্যা রাখা যেত?

1 Byte = 8 Bit

মানে মোট 256টা Combination।

```text
00000000

↓

11111111
```

অর্থাৎ খুব ছোট Range।

কিন্তু আমরা চাই—

```c
int age = 100000;
```

এটাও যেন রাখা যায়।

তাই `int`-এর জন্য **বেশি Bit** দরকার।

অনেক আধুনিক System-এ:

```text
int

↓

4 Byte

↓

32 Bit
```

32 Bit মানে:

```text
00000000000000000000000000000000
```

অর্থাৎ 32টা Bit।

এতে অনেক বড় সংখ্যাও রাখা যায়।

---

# একটা সুন্দর Mental Model

ধরো Byte হলো Drawer।

```text
char

┌───────┐
│       │
└───────┘

১টা Drawer
```

---

```text
int

┌───────┐
│       │
├───────┤
│       │
├───────┤
│       │
├───────┤
│       │
└───────┘

৪টা Drawer
```

---

```text
double

┌───────┐
│       │
├───────┤
│       │
├───────┤
│       │
├───────┤
│       │
├───────┤
│       │
├───────┤
│       │
├───────┤
│       │
├───────┤
│       │
└───────┘

৮টা Drawer
```

বড় Data রাখার জন্য বড় Drawer লাগে।

---

# এবার একটা গুরুত্বপূর্ণ প্রশ্ন

তুমি আগে বলেছিলে:

> Variable হলো RAM-এর একটা Memory Location-এর Name।

এখন প্রশ্ন—

```c
char c = 'A';
```

যদি `char` 1 Byte হয়,

আর

```c
int age = 25;
```

যদি `int` 4 Byte হয়,

তাহলে...

RAM-এ কি `char` এবং `int` **সমান পরিমাণ Memory** দখল করবে?

নাকি **`int` চার গুণ বেশি Memory** নেবে?

---

## 🎯 আজকের ছোট Quiz

শুধু এইটার উত্তর দাও।

**RAM-এ `char` আর `int`-এর Memory Usage কি একই, নাকি `int` বেশি জায়গা নেয়?**

> **`Awnser:`**  **char** 1-byte **int** 4 bytes তাই `int` বেশি জায়গা নিবে । 

### **Note:**
> তারপর আমরা একটা অসাধারণ Experiment করব যেখানে তুমি নিজের চোখে দেখবে **Memory Address কীভাবে বাড়ে** এবং কেন `char` আর `int`-এর Address-এর মধ্যে পার্থক্য দেখা যায়। এটা Pointer শেখার ভিত্তি তৈরি করবে।
