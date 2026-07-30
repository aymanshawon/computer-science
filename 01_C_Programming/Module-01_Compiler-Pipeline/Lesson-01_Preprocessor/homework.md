# Homework — Lesson 01: Preprocessor (`gcc -E`)

> **Goal:** Preprocessor কীভাবে কাজ করে তা নিজের চোখে দেখা এবং বোঝা।

---

# Objective

আজকের Homework শেষ করার পর আমি পারব—

* Compiler Pipeline-এর প্রথম Stage ব্যাখ্যা করতে।
* `#include` কীভাবে কাজ করে বুঝতে।
* `#define` কীভাবে কাজ করে বুঝতে।
* `main.i` File পড়তে।
* Macro Expansion বুঝতে।

---

# Lab 01 — Generate the Preprocessed File

Create a simple C program named `main.c`.

Example:

```c
#include <stdio.h>

#define PI 3.1416

int main(void)
{
    printf("%f\n", PI);
    return 0;
}
```

Run:

```bash
gcc -E main.c -o main.i
```

### Your Observation

* [ ] `main.i` তৈরি হয়েছে।
* [ ] File Size বেড়েছে।
* [ ] এটি এখনও C Source Code।

---

# Lab 02 — Read main.i

Run:

```bash
head -50 main.i
```

### Observe

* [ ] Header File-এর Content দেখা যাচ্ছে।
* [ ] আমার নিজের Code শুরুতেই নেই।

---

# Lab 03 — Search for printf()

Run:

```bash
grep -n "printf" main.i
```

### Question

`printf()` কোথা থেকে এসেছে?

নিজের ভাষায় উত্তর লিখো:

```
Answer:
____________________________________

____________________________________
```

---

# Lab 04 — Verify #define Expansion

Run:

```bash
grep -n "3.1416" main.i
```

### Question

`PI` কোথায় গেল?

নিজের ভাষায় উত্তর লিখো:

```
Answer:
____________________________________

____________________________________
```

---

# Lab 05 — Compare File Size

Run:

```bash
wc -l main.c main.i
```

### Question

কেন `main.i`-এর Line Number বেশি?

```
Answer:
____________________________________

____________________________________
```

---

# Lab 06 — Macro Experiment

Create:

```c
#define SQUARE(x) ((x) * (x))

int result = SQUARE(2 + 3);
```

### Question

Preprocessor-এর পরে Code কেমন হবে?

নিজে লিখো।

```
Answer:

____________________________________

____________________________________
```

---

# Self Assessment

নিচের প্রশ্নগুলোর উত্তর **বই না দেখে** দেওয়ার চেষ্টা করো।

### 1.

Preprocessor কী?

```
Answer:

____________________________________
```

---

### 2.

`#include` কী করে?

```
Answer:

____________________________________
```

---

### 3.

`#define` কী?

```
Answer:

____________________________________
```

---

### 4.

`main.i` কী?

```
Answer:

____________________________________
```

---

### 5.

Macro এবং Function-এর পার্থক্য কী?

```
Answer:

____________________________________
```

---

# Checklist

আজকের Lesson শেষ করার আগে নিশ্চিত করো—

* [ ] `gcc -E` চালিয়েছি।
* [ ] `main.i` তৈরি করেছি।
* [ ] `main.i` খুলে দেখেছি।
* [ ] `printf()` খুঁজে দেখেছি।
* [ ] `PI` Replace হয়েছে কিনা দেখেছি।
* [ ] Macro Expansion বুঝেছি।
* [ ] `summary.md` একবার পড়েছি।

---

# Bonus Challenge ⭐

নিচের Macro-এর সমস্যা কী?

```c
#define DOUBLE(x) x + x

int value = DOUBLE(2 + 3);
```

### তোমার কাজ

1. Preprocessor-এর পরে Code কী হবে?
2. Program-এর Result কত হবে?
3. কেন এমন হলো?

---

# Preview of Lesson 02

আগামী Lesson-এ আমরা শিখব—

* `gcc -S`
* Compiler Stage
* `main.s`
* Assembly Language-এর প্রথম পরিচয়
* Compiler কীভাবে C Code বিশ্লেষণ করে
* Parsing এবং Abstract Syntax Tree (Introduction)

---

# Final Goal

আজকের Lesson শেষ হলে আমার Mental Model হবে—

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
```

আমি জানি—

* Preprocessor Compiler নয়।
* `#include` Header Expand করে।
* `#define` Text Replace করে।
* `main.i` এখনও C Source Code।
* Compiler Journey শুরু হয় **Preprocessor** থেকে।

---

# Final Quote

> **"Don't just run `gcc`. Learn what `gcc` is doing for you."**