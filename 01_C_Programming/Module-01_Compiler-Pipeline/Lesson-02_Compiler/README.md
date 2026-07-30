# Lesson 02 — Compiler Stage (`main.i` → `main.s`)

> **Course:** C Programming from Scratch to System Programming
> **Module:** Compiler Internals
> **Lesson:** 02 — Compiler Stage (Part 01)

---

## 📚 Lesson Overview

এই Lesson-এ আমরা C Compiler Pipeline-এর দ্বিতীয় Stage শিখেছি।

Preprocessor শেষ হওয়ার পর Compiler কীভাবে Expanded Source Code (`main.i`) বিশ্লেষণ করে Assembly Language (`main.s`) তৈরি করে, সেটিই এই Lesson-এর মূল বিষয়।

এই Lesson-এর উদ্দেশ্য শুধু `gcc -S` Command শেখা নয়; বরং Compiler কীভাবে চিন্তা করে (Analyze), সিদ্ধান্ত নেয় (Optimize) এবং Assembly তৈরি করে, সেই Mental Model তৈরি করা।

---

## 🎯 Learning Objectives

এই Lesson শেষে আমি পারব—

* Compiler-এর কাজ ব্যাখ্যা করতে।
* Compiler Pipeline বুঝতে।
* `main.i` থেকে `main.s` তৈরি করতে।
* `gcc -S` ব্যবহার করতে।
* Assembly File-এর মৌলিক Structure চিনতে।
* Compiler Optimization-এর একটি বাস্তব উদাহরণ ব্যাখ্যা করতে।

---

## 🧠 Compiler Pipeline

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

---

## 📁 Folder Structure

```text
Lesson-02_Compiler/
│
├── README.md
├── notes.md
├── summary.md
├── homework.md
├── examples/
│   ├── hello_newline.c
│   ├── hello_nonewline.c
│   └── puts_example.c
├── outputs/
│   ├── main.i
│   ├── main.s
│   ├── hello_newline.s
│   ├── hello_nonewline.s
│   └── diff_O0_O2.txt
└── screenshots/
```

---

## 📖 Files Description

| File           | Description                 |
| -------------- | --------------------------- |
| `README.md`    | Lesson Overview             |
| `notes.md`     | বিস্তারিত Concept Notes     |
| `summary.md`   | দ্রুত Revision              |
| `homework.md`  | Practice & Experiments      |
| `examples/`    | Source Code Examples        |
| `outputs/`     | Generated Files             |
| `screenshots/` | Terminal Output Screenshots |

---

## 🧪 Experiments Performed

* Generated `main.i`
* Generated `main.s`
* Read Assembly File
* Located `.rodata`
* Observed `printf()` → `puts()` Optimization
* Compared `-O0` vs `-O2`

---

## 🔍 Important Observation

Compiler শুধুমাত্র Code Translate করে না।

Compiler—

* Analyze করে
* Optimize করে
* Program-এর Observable Behavior অপরিবর্তিত রাখে

---

## 💡 Key Concept

Compiler কখনও এমন Optimization করবে না যা Program-এর Output বা Observable Behavior পরিবর্তন করে।

---

## 🛠 Commands Used

```bash
gcc -E main.c -o main.i
gcc -S main.i -o main.s

gcc -S -O0 main.c -o main_O0.s
gcc -S -O2 main.c -o main_O2.s

diff -u main_O0.s main_O2.s
```

---

## 📌 Important Files

| File     | Purpose              |
| -------- | -------------------- |
| `main.c` | Original Source Code |
| `main.i` | Preprocessor Output  |
| `main.s` | Compiler Output      |

---

## 🚀 Next Lesson

পরবর্তী Lesson-এ আমরা শিখব—

* Assembly Syntax
* Register (`RAX`, `RDI`, `RSP`, `RBP`)
* `call`
* `ret`
* Function Prologue
* Function Epilogue
* Stack-এর প্রাথমিক ধারণা

---

## 📚 Recommended Review

Lesson চালিয়ে যাওয়ার আগে একবার দেখে নিও—

* `notes.md`
* `summary.md`
* `homework.md`

তারপর `outputs/main.s` আবার খুলে Assembly File-টি একবার পর্যবেক্ষণ করো।

---

> **Remember:** A compiler is not just a translator. It is an analyzer, an optimizer, and a code generator.