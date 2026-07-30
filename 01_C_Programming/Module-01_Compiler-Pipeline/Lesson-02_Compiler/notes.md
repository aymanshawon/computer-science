# Notes — Lesson 02: Compiler Stage (Part 01)

> **Topic:** Compiler (`main.i` → `main.s`)

---

# Introduction

গত Lesson-এ আমরা Preprocessor শিখেছি।

আজ আমরা Compiler Stage শুরু করেছি।

Compiler হলো Compiler Pipeline-এর দ্বিতীয় বড় Stage।

এর কাজ হলো Preprocessor-এর Output (`main.i`) বিশ্লেষণ করে Assembly Language (`main.s`) তৈরি করা।

---

# Compiler Pipeline

```text
main.c
   │
   ▼
Preprocessor
(Text Processing)
   │
   ▼
main.i
(Expanded C Source)
   │
   ▼
Compiler
(Code Analysis)
   │
   ▼
main.s
(Assembly Language)
```

---

# Compiler কী?

Compiler এমন একটি Program যা C Language বুঝতে পারে।

Preprocessor যেখানে শুধুমাত্র Text Process করে, Compiler সেখানে আসল C Program Analyze করে।

Compiler-এর কাজ:

* C Syntax Check করা
* Type Check করা
* Function Analyze করা
* Variable Analyze করা
* Optimization করা (যদি সম্ভব হয়)
* Assembly Code তৈরি করা

---

# Compiler-এর Input

Compiler-এর Direct Input:

```text
main.i
```

এটি Preprocessor-এর Output।

এখন আর `#include` বা `#define` থাকে না।

সব Expand হয়ে গেছে।

---

# Compiler-এর Output

Compiler-এর Output:

```text
main.s
```

এটি Assembly Source Code।

এটি এখনও Binary নয়।

---

# Preprocessor vs Compiler

## Preprocessor

* C Language বোঝে না
* শুধু Text Replace করে
* `#include` Expand করে
* `#define` Replace করে
* Output → `main.i`

## Compiler

* C Language বোঝে
* Syntax Check করে
* Type Check করে
* Optimization করতে পারে
* Output → `main.s`

---

# gcc Commands

Generate Preprocessed File:

```bash
gcc -E main.c -o main.i
```

Generate Assembly File:

```bash
gcc -S main.i -o main.s
```

---

# Assembly File-এর প্রথম অংশ

Example:

```asm
.file "main.c"
.text
.section .rodata
.LC0:
.string "Hello, Compiler!"
```

---

## .file

বর্তমান Assembly File কোন Source File থেকে এসেছে তা নির্দেশ করে।

Example:

```asm
.file "main.c"
```

---

## .text

Executable Instruction Section শুরু হয়েছে।

Program-এর Machine Instruction পরবর্তীতে এই Section থেকেই তৈরি হবে।

---

## .section .rodata

Read Only Data Section।

String Literal সাধারণত এখানে রাখা হয়।

Example:

```c
printf("Hello");
```

Assembly:

```asm
.section .rodata
.LC0:
.string "Hello"
```

---

## .LC0

Compiler String Literal-কে একটি Label দেয়।

Example:

```asm
.LC0:
```

এটি একটি Local Constant Label।

---

# main Function

C Code:

```c
int main(void)
{
    printf("Hello\n");
    return 0;
}
```

Assembly:

```asm
main:
```

Assembly-তে Function Label আকারে প্রকাশিত হয়।

---

# Function End

Function শেষ হয়:

```asm
ret
```

এর অর্থ:

বর্তমান Function শেষ হয়েছে।

Caller Function-এ ফিরে যাও।

---

# Compiler Optimization

আজকের Lesson-এর সবচেয়ে গুরুত্বপূর্ণ বিষয়।

Compiler শুধুমাত্র Translation করে না।

Compiler Program Analyze করে।

যদি Program-এর Behavior অপরিবর্তিত থাকে, তাহলে Compiler Code Optimize করতে পারে।

---

# Example 01

```c
printf("Hello, Compiler!\n");
```

Compiler Generate করেছে:

```asm
call puts@PLT
```

কারণ:

* কোনো Format Specifier নেই।
* Output একই থাকবে।
* `puts()` ব্যবহার করা নিরাপদ।

---

# Example 02

```c
printf("Hello");
```

Compiler Generate করেছে:

```asm
call printf@PLT
```

কারণ:

`puts()` ব্যবহার করলে অতিরিক্ত Newline যোগ হবে।

Output পরিবর্তিত হবে।

Compiler Program-এর Behavior পরিবর্তন করতে পারে না।

---

# Compiler-এর Golden Rule

> **Compiler এমন Optimization করবে না যা Program-এর Observable Behavior পরিবর্তন করে।**

Observable Behavior-এর উদাহরণ:

* Output
* File Write
* System Call-এর দৃশ্যমান ফলাফল
* Program-এর দৃশ্যমান আচরণ

---

# Assembly Instruction (আজ পরিচিত)

আজ আমরা শুধু পরিচিত হয়েছি:

```asm
leaq
movq
call
ret
xorl
```

এগুলোর বিস্তারিত পরবর্তী Lesson-এ শিখব।

---

# গুরুত্বপূর্ণ Observation

আমরা দেখেছি:

```c
printf("Hello\n");
```

↓

```asm
call puts@PLT
```

কিন্তু

```c
printf("Hello");
```

↓

```asm
call printf@PLT
```

এই Experiment প্রমাণ করে যে Compiler Context বুঝে সিদ্ধান্ত নেয়।

---

# Mental Model

```text
main.i
   │
   ▼
Compiler

✓ C Language বোঝে
✓ Syntax Check করে
✓ Type Check করে
✓ Analyze করে
✓ Optimize করে
✓ Assembly তৈরি করে

   │
   ▼
main.s
```

---

# Key Takeaways

* Compiler-এর Direct Input হলো `main.i`।
* Compiler-এর Output হলো `main.s`।
* Compiler Binary তৈরি করে না (এই Stage-এ)।
* Compiler C Language বোঝে।
* Compiler শুধুমাত্র Text Replace করে না।
* Compiler Optimization করতে পারে।
* Compiler Program-এর Observable Behavior পরিবর্তন করে না।
* String Literal `.rodata` Section-এ থাকে।
* Assembly File পড়া শুরু করেছি।

---

# Reminder

> **আজ থেকে Assembly দেখে ভয় পাওয়ার দরকার নেই।**

এটি Compiler-এর Output।

এখনও সব Instruction বোঝা জরুরি নয়।

প্রথম লক্ষ্য হলো Assembly File-এর Structure চিনতে শেখা।

পরবর্তী Lesson-এ আমরা `main.s` Line-by-Line বিশ্লেষণ করব।
