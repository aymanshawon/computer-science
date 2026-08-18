# Questions — Lesson 01: Preprocessor

> **Frequently Asked Questions (FAQ)**

---

# Q1. Compiler Pipeline কী?

**Answer:**

Compiler Pipeline হলো Source Code থেকে Executable Program তৈরি হওয়ার ধাপগুলো।

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

---

# Q2. Preprocessor কী?

**Answer:**

Preprocessor হলো Compiler-এর আগে চলা একটি Program।

এটি Source Code Compile করে না।

এটি শুধু Source Code-এর **Text Process** করে।

---

# Q3. Preprocessor কি C Language বোঝে?

**Answer:**

না।

Preprocessor C Language বোঝে না।

সে শুধু Source Code-এর Text দেখে।

---

# Q4. `#include` কী করে?

**Answer:**

`#include` Header File-এর Content-কে সেই জায়গায় Expand করে।

Conceptually:

```
#include <stdio.h>

↓

/* stdio.h content */
```

---

# Q5. `#define` কী?

**Answer:**

`#define` একটি Text Replacement Rule।

এটি Variable নয়।

এটি Memory Allocate করে না।

Example:

```c
#define PI 3.1416
```

---

# Q6. `PI` কোথায় থাকে?

**Answer:**

কোথাও থাকে না।

Preprocessor `PI`-কে `3.1416` দিয়ে Replace করে দেয়।

Memory-তে `PI` নামে কিছু তৈরি হয় না।

---

# Q7. `main.i` কী?

**Answer:**

`main.i` হলো Preprocessor-এর Output।

এটি এখনও C Source Code।

এটি Assembly বা Binary নয়।

---

# Q8. Macro কি Function?

**Answer:**

না।

Macro শুধুমাত্র Text Replace করে।

Function Call হয় না।

---

# Q9. কেন `((x) * (x))` লিখি?

**Answer:**

Operator Precedence-এর সমস্যা এড়ানোর জন্য।

Wrong:

```c
#define SQUARE(x) x * x
```

Correct:

```c
#define SQUARE(x) ((x) * (x))
```

---

# Q10. `SQUARE(2 + 3)` কেন সমস্যা করে?

**Answer:**

কারণ Parentheses না থাকলে Expansion হয়—

```c
2 + 3 * 2 + 3
```

যার Result হয় 11।

Parentheses ব্যবহার করলে—

```c
((2 + 3) * (2 + 3))
```

Result হয় 25।

---

# Q11. `SQUARE(i++)` কেন Dangerous?

**Answer:**

Expansion হয়—

```c
((i++) * (i++))
```

একই Expression-এ একই Variable দুইবার Modify হচ্ছে।

এটি **Undefined Behavior**।

---

# Q12. Preprocessor কি Variable-এর Value জানে?

**Answer:**

না।

সে জানে না—

* Variable Value
* Memory
* CPU
* Runtime

সে শুধু Source Code-এর Text দেখে।

---

# Q13. আজকের Lesson-এর সবচেয়ে গুরুত্বপূর্ণ শিক্ষা কী?

**Answer:**

> **Preprocessor কোনো Magic নয়।**

এটি শুধু Source Code Rewrite করে এবং `main.i` তৈরি করে।

---

# Quick Quiz

### 1.

Preprocessor কি Compiler?

**Answer:** ❌ না।

---

### 2.

`#define` কি Variable?

**Answer:** ❌ না।

---

### 3.

`#include` কি Header-এর Content Expand করে?

**Answer:** ✅ হ্যাঁ।

---

### 4.

`main.i` কি এখনও C Source Code?

**Answer:** ✅ হ্যাঁ।

---

### 5.

Macro কি Function?

**Answer:** ❌ না।

---

# Self Check

যদি নিচের প্রশ্নগুলোর উত্তর দিতে পারো, তাহলে Lesson 01 ভালোভাবে বুঝেছ।

* [ ] Compiler Pipeline বলতে পারি।
* [ ] Preprocessor কী ব্যাখ্যা করতে পারি।
* [ ] `#include` কী করে বলতে পারি।
* [ ] `#define` কী করে বলতে পারি।
* [ ] `main.i` কী বলতে পারি।
* [ ] Macro এবং Function-এর পার্থক্য বলতে পারি।
* [ ] কেন `((x) * (x))` ব্যবহার করি তা ব্যাখ্যা করতে পারি।

---

# Final Thought

> **যদি আমি `main.i` বুঝতে পারি, তাহলে আমি Preprocessor-এর কাজ বুঝতে পেরেছি।**
