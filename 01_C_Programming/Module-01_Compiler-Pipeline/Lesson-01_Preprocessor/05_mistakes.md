# Mistakes — Lesson 01: Preprocessor

> **"Every mistake is a mental model that has been corrected."**

এই ফাইলে আমি আজকের Lesson-এ আমার ভুল ধারণা এবং সঠিক ধারণা লিখে রাখছি।

---

# Mistake 01

## ❌ আমি ভাবতাম

Compiler সরাসরি `main.c` থেকে Binary তৈরি করে।

## ✅ আসল সত্য

Compiler Pipeline-এর একাধিক Stage আছে।

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

# Mistake 02

## ❌ আমি ভাবতাম

Preprocessor এবং Compiler একই জিনিস।

## ✅ আসল সত্য

Preprocessor Compiler-এর আগে চলে।

Preprocessor শুধু Source Code-এর Text পরিবর্তন করে।

Compiler পরে সেই নতুন Source Code Compile করে।

---

# Mistake 03

## ❌ আমি ভাবতাম

`#include` মানে শুধু Header File-এর সাথে Connection তৈরি করা।

## ✅ আসল সত্য

Conceptually, `#include` Header File-এর Content-কে Source Code-এর মধ্যে Expand করে।

---

# Mistake 04

## ❌ আমি ভাবতাম

`#define` একটি Variable।

## ✅ আসল সত্য

`#define` কোনো Variable নয়।

এটি শুধু একটি Text Replacement Rule।

---

# Mistake 05
```c
#define AGE 26;
int AGE = 25;
```
## ❌ আমি ভেবেছিলাম যে 

এই খানে `#define AGE 26;`  এইটা রিমুভ হয়ে যাবে 

## ✅ আসল সত্য

পরে বুঝলাম যে না এইখানে কম্পাইলার কাজ করছে না এইটা হচ্ছে প্রি-প্রসেসর যার কাজ শুধুমাত্র টেক্সট রিপ্লেস করা ।

মানে এই খানে `AGE = 26` মানে এই খানে `int 26 = 25;` হয়ে যাবে ।

---

# Mistake 06

```c
#define PI 3.1416
#define RADIUS 10

float area = PI * RADIUS * RADIUS;
```

## ❌ আমি ভাবতাম

`PI` হচ্ছে একটা veriable । 

## ✅ আসল সত্য

`#define` এইটা হচ্ছে `Text` রিপ্লেসমেন্ট Rule যেটা ব্যাবহার করে `PI` কে রিপ্লেসমেন্ট করে দিছে `3.1416`

Preprocessor `PI`-কে `3.1416` দিয়ে Replace করে দেয়।

Preprocessor RADIUS -কে `10` দিয়ে Replace করে দেয়।

---

# Mistake 07

## ❌ আমি ভাবতাম

Macro একটি Function।

## ✅ আসল সত্য

Macro কোনো Function নয়।

এটি শুধুমাত্র Text Expansion।

---

# Mistake 07

## ❌ আমি ভাবতাম

নিচের Macro সব সময় ঠিক কাজ করবে।

```c
#define SQUARE(x) x * x
```

## ✅ আসল সত্য

Expression Pass করলে Operator Precedence-এর সমস্যা হয়।

সঠিক Macro:

```c
#define SQUARE(x) ((x) * (x))
```

---

# Mistake 08

## ❌ আমি ভাবতাম

`SQUARE(i++)` নিরাপদ।

## ✅ আসল সত্য

Expansion হয়—

```c
((i++) * (i++))
```

একই Expression-এ একই Variable দুইবার Modify হওয়ায় এটি **Undefined Behavior**।

---

# Mistake 09

## ❌ আমি ভাবতাম

Preprocessor Variable-এর Value জানে।

## ✅ আসল সত্য

Preprocessor জানে না—

* Variable-এর Value
* Memory
* Runtime
* CPU

সে শুধু Source Code-এর Text দেখে।

---

# Mistake 10

## ❌ আমি ভাবতাম

`main.i` Machine Code।

## ✅ আসল সত্য

`main.i` এখনও C Source Code।

এটি শুধু Preprocessor-এর Output।

---

# Today's Biggest Lesson

আজ আমি বুঝেছি —

> **Compiler একটি Black Box নয়।**

আমি এখন জানি যে Source Code ধাপে ধাপে পরিবর্তিত হয়।

```text
main.c
    │
    ▼
Preprocessor
    │
    ▼
main.i
```

---

# Personal Reminder

যখনই কোনো নতুন Concept শিখব, আমি নিজেকে তিনটি প্রশ্ন করব:

1. এটা কি Preprocessor-এর কাজ?
2. এটা কি Compiler-এর কাজ?
3. এটা কি Runtime-এর কাজ?

যদি এই তিনটি আলাদা করতে পারি, তাহলে আমার Mental Model পরিষ্কার থাকবে।

---

# Rule for Future Lessons

প্রতিটি Lesson শেষে আমি এই ফাইল Update করব।

কারণ,

> **যে Programmer নিজের ভুলগুলো লিখে রাখে, সে একই ভুল দ্বিতীয়বার করার সম্ভাবনা অনেক কমিয়ে দেয়।**