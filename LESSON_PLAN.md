# 📋 LESSON PLAN — এক এক করে

> প্রথম unchecked `[ ]` থেকে শুরু করো। ✍️ = তুমি নিজে লিখবে (tutor শুধু review)।
> প্রতিটা lesson-এর file: `mental_model · experiments · observation✍️ · mistakes✍️ · summary✍️ · questions · homework · notes`

---

## 🔄 Step 0 — Lesson 02 Compiler cleanup (১৫ মিনিট)
- [ ] ✍️ `Lesson-02_Compiler/04_observation.md` লেখো: `-O0` vs `-O2` assembly-তে কী পার্থক্য দেখেছিলে
- [ ] ✍️ `05_mistakes.md`-এ আরেকটা mistake: `printf → puts` optimization

## 📍 Step 1 — Lesson 03 Assembler  ← **NOW**
`Module-01_Compiler-Pipeline/Lesson-03_Assembler/`
- [ ] Predict: `.s` আর `.o`-এর মধ্যে পার্থক্য কী? (লিখে রাখো, পরে মিলাবে)
- [ ] Exp 1: `gcc -c test1.s -o test1.o` → `file test1.o` (ELF relocatable?)
- [ ] Exp 2: `objdump -d test1.o` → assembly instruction ↔ machine code byte মিলাও
- [ ] Exp 3: `readelf -S test1.o` → `.text .data .bss .rodata` section খোঁজো
- [ ] Exp 4: `nm test1.o` → `printf` কেন `U` (undefined), কিন্তু `add` আর `main` কেন `T`?
- [ ] Exp 4b: `objdump -dr test1.o` → `call`-এর পাশে relocation entry (`R_X86_64_PLT32 printf`) — address কেন এখনো `00 00 00 00`?
  (Object file-এ থাকে: machine code, data, symbols, relocation info, debug info)
- [ ] Exp 5: `./test1.o` চালানোর চেষ্টা → কেন চলে না?
- [ ] ✍️ observation · mistakes · summary
- [ ] Homework: global variable আর `static` variable add করে `nm`-এ symbol type দেখো (`D`, `B`, `d`)
- [ ] Quiz pass (৩/৩)

## Step 2 — Lesson 04 Linker
`Lesson-04_Linker/` (`main.c` + `hello.c` already আছে)
- [ ] Predict: `gcc -c main.c` একা কি executable বানাবে?
- [ ] Exp 1: দুটো `.o` বানাও → `nm` দিয়ে defined vs undefined symbol
- [ ] Exp 2: শুধু `main.o` link → `undefined reference` error পড়ো
- [ ] Exp 3: `gcc main.o hello.o -o app` → `nm app`
- [ ] Exp 4: Static vs dynamic: `gcc -static` vs normal → size তুলনা, `ldd app`
- [ ] Exp 5: একই function দুই file-এ define → `multiple definition` error
- [ ] ✍️ observation · mistakes · summary (`notes.md`, `mistakes.md` এখন খালি!)
- [ ] Homework: নিজের `mathlib.c` বানিয়ে `ar` দিয়ে `libmath.a` → link

## Step 3 — Lesson 05 Loader
`Lesson-05_Loader/`
- [ ] Predict: `./app` টাইপ করলে কে কী করে?
- [ ] Exp 1: `readelf -h app` → entry point; `readelf -l app` → segments
- [ ] Exp 2: `Module-02_C_Syntax/02_DataType/Code/experiment/test.c` চালাও (sleep 60 আছে) → অন্য terminal-এ `cat /proc/<pid>/maps`
- [ ] Exp 3: code / global / heap / stack address কোন region-এ পড়ে মিলাও
- [ ] Exp 4: দুইবার চালাও → ASLR; `setarch -R ./test` দিয়ে ASLR বন্ধ করে তুলনা
- [ ] ✍️ observation · mistakes · summary
- [ ] **Phase 0 Project:** ২-file program হাতে হাতে `.c→.i→.s→.o→exe`, প্রতিটা ধাপ `nm/readelf` দিয়ে explain করে `Module-01/README.md`-এ লেখো

## Step 4 — Back to Data Types: `sizeof` + `_Alignof`
`Module-02_C_Syntax/02_DataType/`
- [ ] Exp 1: প্রতিটা type-এর size **আর** alignment print:
  ```c
  #include <stdio.h>
  #include <stdalign.h>

  int main(void)
  {
      printf("char      : size=%zu align=%zu\n", sizeof(char),      _Alignof(char));
      printf("int       : size=%zu align=%zu\n", sizeof(int),       _Alignof(int));
      printf("float     : size=%zu align=%zu\n", sizeof(float),     _Alignof(float));
      printf("double    : size=%zu align=%zu\n", sizeof(double),    _Alignof(double));
      printf("long long : size=%zu align=%zu\n", sizeof(long long), _Alignof(long long));
      return 0;
  }
  ```
- [ ] পুরোনো address experiment (01–05.c) এর সাথে মিলাও। `02.c`-এর আগের observed output (তুলনার জন্য):
  ```text
  c   = 0x7ffe1ab9221f  (size 1)
  age = 0x7ffe1ab92218  (size 4)  → 0x...221c–0x...221e: ৩ byte gap
  pi  = 0x7ffe1ab92210  (size 8)
  ```
- [ ] Exp 2: order উল্টাও — `double pi; int age; char c;` → layout কি বদলায়?
- [ ] Exp 3: একই type — `int a; int b; int c;` → address difference কি সবসময় 4?
- [ ] Parking lot প্রশ্ন সমাধান: `age`–`c`-এর ৩ byte আসলে padding? (`objdump -d` দিয়ে stack offset দেখো)
- [ ] ✍️ `Experiment.md`-এ "padding" শব্দকে "observed gap" বলে ঠিক করো যেখানে প্রমাণ নেই

## Step 5 — Struct layout + `offsetof`
- [ ] `05.c` বাড়াও: `offsetof` দিয়ে প্রতিটা member-এর offset
- [ ] Member order বদলে `sizeof(struct)` কমাও (local var-এর মতো না — struct-এ order **guaranteed**!)
- [ ] ✍️ mistakes: local variable layout vs struct layout পার্থক্য

## Step 6 — Phase 1 বাকি
- [ ] signed/unsigned, two's complement, overflow
- [ ] float/IEEE 754 (`0.1 + 0.2`)
- [ ] Endianness (byte-dumper project)
- [ ] Casting, implicit conversion

➡️ তারপর [ROADMAP.md](ROADMAP.md) Phase 2।

---
**Session log** (শেষে এক লাইন যোগ করো)
- 2026-10-03 — Master/Roadmap/Lesson plan তৈরি। শুরু: Step 0।
