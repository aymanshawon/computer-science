# Summary — Lesson 02: Compiler Stage (Part 01)

> Date: 2026-07-29

---

# Today's Goal

আজকের লক্ষ্য ছিল Preprocessor-এর পরে Compiler কী করে তা বোঝা।

---

# Compiler Pipeline

```text
main.c
   │
   ▼
Preprocessor
   │
   ▼
main.i
   │
   ▼
Compiler
   │
   ▼
main.s
```

আজ আমরা `main.i` → `main.s` পর্যন্ত শিখেছি।

---

# Compiler কী?

Compiler এমন একটি Program যা C Source Code (Preprocessor-এর Output) বিশ্লেষণ করে Assembly Language তৈরি করে।

Input:

```text
main.i
```

Output:

```text
main.s
```

---

# Preprocessor vs Compiler

| Preprocessor          | Compiler          |
| --------------------- | ----------------- |
| Text Process করে      | C Language বুঝে   |
| `#include` Expand করে | Syntax Check করে  |
| `#define` Replace করে | Type Check করে    |
| `main.i` তৈরি করে     | `main.s` তৈরি করে |

---

# গুরুত্বপূর্ণ বিষয়

Compiler সরাসরি Binary তৈরি করে না।

Compiler-এর Output হলো Assembly Source Code (`main.s`)।

Binary তৈরি করার কাজ পরে Assembler করবে।

---

# gcc Command

Preprocessor চালানোর জন্য:

```bash
gcc -E main.c -o main.i
```

Compiler Stage চালানোর জন্য:

```bash
gcc -S main.i -o main.s
```

---

# Assembly File

আজ প্রথমবার `main.s` File দেখেছি।

কিছু গুরুত্বপূর্ণ Directive:

```asm
.file
.text
.section
.globl
.type
```

এগুলো Program-এর বিভিন্ন তথ্য এবং Code Section নির্দেশ করে।

---

# Function Structure

Assembly-তে Function শুরু হয়:

```asm
main:
```

Function শেষ হয়:

```asm
ret
```

---

# String কোথায় থাকে?

C Code:

```c
printf("Hello, Compiler!\n");
```

Assembly-তে:

```asm
.section .rodata
```

String Literal Read-Only Data Section-এ রাখা হয়।

---

# Compiler Optimization

আজ সবচেয়ে গুরুত্বপূর্ণ নতুন Concept।

Compiler শুধু Code Translate করে না।

Compiler Program Analyze করে এবং নিরাপদ হলে Optimization করে।

---

# Example 01

C Code:

```c
printf("Hello, Compiler!\n");
```

Assembly:

```asm
call puts@PLT
```

কারণ:

* কোনো Format Specifier নেই।
* Output একই থাকে।
* `puts()` ব্যবহার করা নিরাপদ।

---

# Example 02

C Code:

```c
printf("Hello");
```

Assembly:

```asm
call printf@PLT
```

কারণ:

`puts()` ব্যবহার করলে অতিরিক্ত Newline (`\n`) যোগ হবে।

Program-এর Output বদলে যাবে।

তাই Compiler Optimization করেনি।

---

# সবচেয়ে গুরুত্বপূর্ণ Rule

> **Compiler কখনও এমন Optimization করবে না যা Program-এর Observable Behavior পরিবর্তন করে।**

এই Rule ভবিষ্যতের সব Optimization-এর ভিত্তি।

---

# নতুন Assembly Instruction

আজ দেখেছি:

```asm
leaq
movq
call
ret
xorl
```

এগুলোর বিস্তারিত পরে শিখব।

আজ শুধু জানলাম এগুলো Compiler Generate করেছে।

---

# আমি যা শিখেছি

* Compiler-এর Direct Input হলো `main.i`।
* Compiler-এর Output হলো `main.s`।
* Compiler `#include` Process করে না।
* Compiler `#define` Replace করে না।
* Compiler Assembly তৈরি করে।
* Compiler Optimization করতে পারে।
* Compiler Program-এর Behavior পরিবর্তন করে না।
* String Literal `.rodata` Section-এ থাকে।
* Assembly File পড়া শুরু করেছি।

---

# Mental Model

```text
main.c
   │
   ▼
Preprocessor
(Text Processing)
   │
   ▼
main.i
   │
   ▼
Compiler
(Analyze + Translate + Optimize)
   │
   ▼
main.s
(Assembly Language)
```

---

# Personal Achievement

আজ আমি শুধু Compiler-এর সংজ্ঞা শিখিনি।

আমি নিজের হাতে Assembly Generate করেছি, `main.s` পড়েছি, এবং Experiment করে দেখেছি কখন Compiler `printf()`-কে `puts()`-এ পরিবর্তন করে এবং কখন করে না।

এর মাধ্যমে আমি বুঝতে শুরু করেছি যে Compiler একটি "Black Box" নয়; এটি নির্দিষ্ট নিয়ম মেনে Code বিশ্লেষণ করে এবং নিরাপদ হলে Optimization করে।

---

# Next Lesson Preview

পরবর্তী Lesson-এ আমরা শিখব:

* `main.s` Line-by-Line পড়া
* Register কী
* `leaq`, `mov`, `call`, `ret`
* Stack-এর প্রাথমিক ধারণা
* Function Call-এর ভিতরের কাজ