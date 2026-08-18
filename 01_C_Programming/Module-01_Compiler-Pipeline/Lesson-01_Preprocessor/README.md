# Lesson 01 - Preprocessor

> **Module:** 01 - Compiler Pipeline  
> **Lesson:** 01 - Preprocessor (`gcc -E`)  
> **Difficulty:** ⭐ Beginner  
> **Status:** ✅ Completed

---

# 🎯 Learning Objective

এই Lesson শেষে আমি জানতে পারব:

- Compiler Pipeline কী?
- Preprocessor কী?
- `#include` কীভাবে কাজ করে?
- `#define` কীভাবে কাজ করে?
- `main.i` File কী?
- Macro এবং Function-এর পার্থক্য কী?
- কেন `((x) * (x))` ব্যবহার করা হয়?

---

# 📚 Topics Covered

- Compiler Pipeline
- Preprocessor
- `#include`
- `#define`
- Macro Expansion
- `main.i`
- Text Replacement
- Operator Precedence (Introduction)
- Undefined Behavior (Introduction)

---

# 🛠 Commands Used

```bash
gcc -E main.c -o main.i
```

```bash
head -50 main.i
```

```bash
grep -n "printf" main.i
```

```bash
grep -n "3.1416" main.i
```

```bash
wc -l main.c main.i
```

---

# 📁 Files Used

```
code
├── Experiments
│   ├── 01_Test.c
│   ├── 01_Test.i
│   ├── 02_Test.c
│   └── 02_Test.i
├── main.c
└── main.i
```

---

# 📖 Lesson Summary

আজ আমি শিখেছি যে Compiler সরাসরি Source Code-কে Machine Code-এ রূপান্তর করে না।

তার আগে **Preprocessor** নামে একটি Stage চলে।

Preprocessor:

- Header File Expand করে।
- Macro Expand করে।
- `#include` Process করে।
- `#define` Replace করে।
- নতুন একটি File (`main.i`) তৈরি করে।

সবচেয়ে গুরুত্বপূর্ণ বিষয় হলো:

> **Preprocessor C Language বোঝে না।**

এটি শুধুমাত্র Source Code-এর Text নিয়ে কাজ করে।

---

# 🎯 Key Takeaways

- Preprocessor হলো Text Processor।
- `#include` Header File Expand করে।
- `#define` শুধু Text Replace করে।
- Macro Function নয়।
- `main.i` এখনও C Source Code।
- Preprocessor Variable-এর Value জানে না।

---

# 📌 Next Lesson

Lesson 02 - Compiler (`gcc -S`)

আমরা শিখব:

- Compiler কী করে
- Assembly কীভাবে তৈরি হয়
- `main.s`
- Compiler-এর ভিতরের কাজ (Introduction)

---

# ✅ Lesson Status

- [x] Theory
- [x] Discussion
- [x] Hands-on Lab
- [x] Questions
- [x] Homework
- [ ] Revision (7 Days Later)
- [ ] Mastered