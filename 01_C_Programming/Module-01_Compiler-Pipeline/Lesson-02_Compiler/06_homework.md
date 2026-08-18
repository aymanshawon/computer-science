# Homework — Lesson 02: Compiler Stage (Part 01)

> **Goal:** Compiler কীভাবে `main.i` থেকে `main.s` তৈরি করে এবং কীভাবে Optimization করে তা নিজের চোখে দেখা।

---

# Objective

আজকের Homework শেষ করার পর আমি পারব—

* Compiler-এর Input ও Output ব্যাখ্যা করতে।
* `gcc -S` ব্যবহার করতে।
* `main.s` File Generate করতে।
* Assembly File-এর Structure চিনতে।
* Compiler Optimization-এর একটি বাস্তব উদাহরণ ব্যাখ্যা করতে।

---

# Lab 01 — Generate Assembly

Create `main.c`

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Compiler!\n");
    return 0;
}
```

Run:

```bash
gcc -E main.c -o main.i
gcc -S main.i -o main.s
```

### Observation

* [ ] `main.s` তৈরি হয়েছে।
* [ ] এটি Text File।
* [ ] এটি Binary নয়।

---

# Lab 02 — Read Assembly

Run:

```bash
less main.s
```

অথবা

```bash
cat main.s
```

নিচের Directive-গুলো খুঁজে বের করো।

* [ ] `.file`
* [ ] `.text`
* [ ] `.section`
* [ ] `.globl`
* [ ] `.type`
* [ ] `main:`
* [ ] `ret`

---

# Lab 03 — Find String Literal

Assembly-তে খুঁজে বের করো—

```text
Hello, Compiler!
```

### Question

এটি কোন Section-এ রাখা হয়েছে?

```text
Answer:

___________________________________
```

---

# Lab 04 — printf() Optimization

Program:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, Compiler!\n");
    return 0;
}
```

Generate Assembly:

```bash
gcc -S -O2 main.c -o hello_newline.s
```

### Question

Compiler কি `printf()`-কে `puts()`-এ পরিবর্তন করেছে?

```text
Answer:

___________________________________
```

---

# Lab 05 — No Newline

Program:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello");
    return 0;
}
```

Generate Assembly:

```bash
gcc -S -O2 main.c -o hello_nonewline.s
```

### Question

Compiler কি এখনও `printf()` ব্যবহার করেছে?

কেন?

```text
Answer:

___________________________________
```

---

# Lab 06 — Compare Optimization

Run:

```bash
gcc -S -O0 main.c -o main_O0.s
gcc -S -O2 main.c -o main_O2.s
```

তারপর:

```bash
diff -u main_O0.s main_O2.s
```

### Observation

* [ ] `-O2` Version ছোট হয়েছে।
* [ ] কিছু Instruction পরিবর্তন হয়েছে।
* [ ] Compiler Optimization করেছে।

---

# Self Assessment

বই না দেখে উত্তর দাও।

### 1.

Compiler-এর Direct Input কী?

```text
Answer:

______________________________
```

---

### 2.

Compiler-এর Output কী?

```text
Answer:

______________________________
```

---

### 3.

Compiler কি `#include` Process করে?

```text
Answer:

______________________________
```

---

### 4.

Compiler কি `#define` Replace করে?

```text
Answer:

______________________________
```

---

### 5.

Compiler কেন `printf("Hello\n")`-কে `puts()`-এ পরিবর্তন করতে পারে?

```text
Answer:

______________________________
```

---

### 6.

Compiler কেন `printf("Hello")`-কে `puts()`-এ পরিবর্তন করে না?

```text
Answer:

______________________________
```

---

# Checklist

Lesson শেষ করার আগে নিশ্চিত করো—

* [ ] `gcc -S` চালিয়েছি।
* [ ] `main.s` খুলে দেখেছি।
* [ ] `.rodata` চিনতে পেরেছি।
* [ ] `main:` Label খুঁজে পেয়েছি।
* [ ] `ret` চিনেছি।
* [ ] `printf()` → `puts()` Optimization দেখেছি।
* [ ] `-O0` এবং `-O2` Compare করেছি।

---

# Bonus Challenge ⭐

নিচের Program-এর Assembly Generate করো।

```c
#include <stdio.h>

int main(void)
{
    puts("Compiler");
    return 0;
}
```

### তোমার কাজ

1. Assembly-তে `call puts@PLT` আছে কি?
2. `printf()` কোথাও এসেছে কি?
3. আগের দুইটি Experiment-এর সাথে পার্থক্য লিখো।

---

# Research Question

Google বা Documentation না দেখে নিজের ভাষায় উত্তর দেওয়ার চেষ্টা করো।

> **Compiler আর GCC কি একই জিনিস?**

ইঙ্গিত:

* `gcc`
* Preprocessor
* Compiler
* Assembler
* Linker

---

# Preview — Lesson 02 (Part 02)

পরবর্তী Lesson-এ আমরা শিখব—

* Assembly Syntax
* Register (`RAX`, `RDI`, `RSP`, `RBP`)
* `call`
* `ret`
* Function Prologue
* Function Epilogue
* Stack-এর প্রথম পরিচয়

---

# Final Goal

আজকের Lesson শেষে আমার Mental Model হবে—

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

   │
   ▼
main.s
```

> **"Compiler শুধু অনুবাদ করে না, সে সিদ্ধান্তও নেয়—কিন্তু শুধুমাত্র তখনই, যখন Program-এর Behavior অপরিবর্তিত থাকে।"**
