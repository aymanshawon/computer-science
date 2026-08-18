# Summary — Lesson 01: Preprocessor (`gcc -E`)

> **Quick Revision Sheet**

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

আজ আমরা শুধু **Preprocessor** পর্যন্ত শিখেছি।

---

# What is Preprocessor?

* Compiler-এর আগে চলে।
* এটি **Compiler নয়**।
* এটি **Text Processor**।
* Source Code-এর Text পরিবর্তন করে।

> **Remember:**
> **Preprocessor is a Text Processor, NOT a C Compiler.**

---

# `#include`

Example:

```c
#include <stdio.h>
```

কাজ:

* Header File-এর Content Expand করে।
* `#include`-এর জায়গায় বসিয়ে দেয়।

Concept:

```
#include <stdio.h>

↓

/* stdio.h content */
```

---

# `#define`

Example:

```c
#define PI 3.1416
```

কাজ:

* Text Replacement।
* Variable নয়।
* Memory Allocate করে না।

Example:

Before:

```c
printf("%f\n", PI);
```

After:

```c
printf("%f\n", 3.1416);
```

---

# `main.i`

Command:

```bash
gcc -E main.c -o main.i
```

`main.i` হলো—

* Expanded C Source Code
* Binary নয়
* Assembly নয়
* Object File নয়

---

# Macro

Wrong:

```c
#define SQUARE(x) x * x
```

Correct:

```c
#define SQUARE(x) ((x) * (x))
```

কারণ:

* Operator Precedence-এর সমস্যা এড়াতে Parentheses ব্যবহার করা হয়।

---

# Side Effect

```c
SQUARE(i++)
```

Expand:

```c
((i++) * (i++))
```

⚠️ এটি **Undefined Behavior**।

একই Expression-এ একই Variable একাধিকবার Modify করা বিপজ্জনক।

---

# Preprocessor কী জানে না?

Preprocessor জানে না—

* Variable-এর Value
* Memory
* Runtime
* CPU
* Function Call

সে শুধু Source Code-এর Text দেখে।

---

# Today's Golden Rules

✅ Preprocessor ≠ Compiler

✅ `#include` = Header Expansion

✅ `#define` = Text Replacement

✅ Macro ≠ Function

✅ `main.i` এখনও C Source Code

✅ Parentheses ব্যবহার করো Function-like Macro-তে

✅ Preprocessor Variable-এর Value জানে না

---

# Commands

Generate Preprocessed File

```bash
gcc -E main.c -o main.i
```

View First Lines

```bash
head -50 main.i
```

Search

```bash
grep -n "printf" main.i
grep -n "3.1416" main.i
```

Compare Line Count

```bash
wc -l main.c main.i
```

---

# One-Line Mental Model

```
Source Code
      │
      ▼
Preprocessor
(Text Processing)
      │
      ▼
Expanded C Source (main.i)
```

---

# Remember

> **Preprocessor prepares the source code. It does not compile it.**