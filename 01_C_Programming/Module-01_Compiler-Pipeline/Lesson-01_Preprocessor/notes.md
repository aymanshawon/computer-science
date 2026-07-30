# Notes — Lesson 01: Preprocessor (`gcc -E`)

> **Module:** Compiler Pipeline
> **Lesson:** 01 - Preprocessor

---

# Introduction

যখন আমরা একটি C Program লিখি, তখন CPU সরাসরি সেই Code বুঝতে পারে না।

উদাহরণ:

```c
#include <stdio.h>

#define PI 3.1416

int main(void)
{
    printf("%f\n", PI);
    return 0;
}
```

CPU এই Code পড়তে পারে না।

CPU শুধুমাত্র **Machine Code (Binary)** বুঝতে পারে।

তাই Source Code-কে কয়েকটি ধাপ অতিক্রম করে Machine Code-এ রূপান্তর করা হয়।

---

# Compiler Pipeline

```
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
   │
   ▼
Assembler
   │
   ▼
main.o
   │
   ▼
Linker
   │
   ▼
Executable
```

আজ আমরা শুধু **Preprocessor** Stage শিখেছি।

---

# What is a Preprocessor?

Preprocessor হলো Compiler-এর আগে চলা একটি Program।

এর কাজ হলো Source Code-কে প্রস্তুত করা।

এটি C Language Compile করে না।

এটি শুধুমাত্র Source Code-এর Text নিয়ে কাজ করে।

### Golden Rule

> **Preprocessor is a Text Processor, not a C Compiler.**

---

# Responsibilities of the Preprocessor

Preprocessor-এর প্রধান কাজগুলো হলো:

* Process `#include`
* Process `#define`
* Expand Macros
* Remove Comments
* Handle Conditional Compilation (`#ifdef`, `#ifndef`, `#if`, `#endif`)

আজ আমরা `#include` এবং `#define` শিখেছি।

---

# Understanding `#include`

Example:

```c
#include <stdio.h>
```

অনেকেই ভাবেন যে এটি শুধু Header File-এর সাথে Connection তৈরি করে।

আসলে Conceptually যা ঘটে তা হলো—

```
#include <stdio.h>

↓

/* stdio.h এর Content */
```

অর্থাৎ Preprocessor `stdio.h`-এর Content নিয়ে `#include`-এর জায়গায় বসিয়ে দেয়।

এ কারণেই Preprocessing-এর পরে File অনেক বড় হয়ে যায়।

---

# Understanding `#define`

Example:

```c
#define PI 3.1416
```

এটি Variable নয়।

এটি Constant নয়।

এটি Memory Allocate করে না।

এটি শুধুমাত্র একটি **Text Replacement Rule**।

যখন Preprocessor `PI` দেখবে, তখন সেটিকে `3.1416` দিয়ে Replace করবে।

Example:

Before:

```c
printf("%f\n", PI);
```

After Preprocessing:

```c
printf("%f\n", 3.1416);
```

---

# The `main.i` File

Command:

```bash
gcc -E main.c -o main.i
```

এই Command-এর Output হলো `main.i`।

`main.i` এখনও C Source Code।

এটি—

* Binary নয়
* Assembly নয়
* Object File নয়

এখানে শুধু Preprocessor-এর পরিবর্তনগুলো দেখা যায়।

---

# Macro

Example:

```c
#define SQUARE(x) x * x
```

এটি Function নয়।

এটি শুধুমাত্র একটি Text Replacement Rule।

যখন লিখি—

```c
SQUARE(5)
```

Preprocessor এটিকে Replace করে—

```c
5 * 5
```

---

# Why Parentheses Matter

ভুল Macro:

```c
#define SQUARE(x) x * x
```

Call:

```c
SQUARE(2 + 3)
```

Expansion:

```c
2 + 3 * 2 + 3
```

Result:

```
11
```

কারণ Multiplication আগে হয়।

সঠিক Macro:

```c
#define SQUARE(x) ((x) * (x))
```

Expansion:

```c
((2 + 3) * (2 + 3))
```

Result:

```
25
```

### Rule

Function-like Macro লিখলে Argument এবং পুরো Expression—দুটোকেই Parentheses-এর মধ্যে রাখবে।

---

# Macro Side Effects

Example:

```c
int i = 5;

SQUARE(i++);
```

Expansion:

```c
((i++) * (i++))
```

এখানে `i++` দুইবার ব্যবহার হচ্ছে।

এর Behavior **Undefined**।

আজ শুধু পরিচয় নিলাম।

এটি বিস্তারিতভাবে Runtime এবং Evaluation Order শেখার সময় বুঝব।

---

# What the Preprocessor Does NOT Know

Preprocessor জানে না—

* Variable-এর Value
* Memory
* CPU
* Runtime
* Function Call
* Pointer

সে শুধু Source Code-এর Text দেখে।

---

# Today's Mental Model

```
Source Code

↓

Preprocessor
(Text Processing)

↓

main.i

↓

Compiler

↓

Assembly

↓

Object File

↓

Executable
```

---

# Golden Rules

1. Preprocessor Compiler নয়।
2. Preprocessor শুধুমাত্র Text Process করে।
3. `#include` Header File Expand করে।
4. `#define` Text Replace করে।
5. Macro Function নয়।
6. Function-like Macro-তে Parentheses ব্যবহার করতে হবে।
7. `main.i` এখনও C Source Code।
8. Preprocessor Variable-এর Value জানে না।

---

# Commands Learned Today

Generate Preprocessed File:

```bash
gcc -E main.c -o main.i
```

View First Lines:

```bash
head -50 main.i
```

Search for `printf`:

```bash
grep -n "printf" main.i
```

Search for `PI` Replacement:

```bash
grep -n "3.1416" main.i
```

Compare Line Count:

```bash
wc -l main.c main.i
```

---

# Conclusion

আজ আমরা Compiler Pipeline-এর প্রথম ধাপ শিখেছি।

সবচেয়ে গুরুত্বপূর্ণ বিষয় হলো—

Preprocessor কোনো Magic নয়।

এটি Source Code-এর Text পরিবর্তন করে এবং একটি নতুন File (`main.i`) তৈরি করে।

আজ থেকে Compiler আর একটি Black Box নয়।

আমরা জানি—

```
main.c
    ↓
Preprocessor
    ↓
main.i
```

এটাই আমাদের Compiler Journey-এর প্রথম ধাপ।