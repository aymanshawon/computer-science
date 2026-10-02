# 🧭 MASTER — Computer Science Learning Project

> **এই একটা file-এই সব:** আমি কে, কোথায় আছি, কী শিখেছি, পরের lesson, পুরো roadmap, tutor-এর নিয়ম।
> - **যেকোনো AI (ChatGPT, Gemini, Claude…):** পুরো file-টা দাও, তারপর বলো "চলো শুরু করি"।
> - **Claude Code:** `.claude/CLAUDE.md` থেকে নিজেই এটা পড়ে নেয়।
> - **বিস্তারিত lesson-wise roadmap:** `ROADMAP.md` — Phase 0–12 + Track B; প্রতিটা lesson-এ কী শিখবে / কী এখন না / experiment / কখন শেষ (অন্য AI-কে lesson plan করাতে চাইলে এটাও দাও)।

**Last updated:** 2026-10-03

**সূচি:** §1 আমি কে · §2 কীভাবে শিখি · §3 Current State · §4 যা শিখেছি · §5 Guardrails · §6 Tutor Instructions ·
§7 Lesson Plan · §8 Roadmap · §9 Parking Lot · §10 দুর্বল দিক · §11 Repo Map & Commands · §12 Session Log

---

## 1. আমি কে, লক্ষ্য কী

- Self-learner. Debian 13, ESP8266 hardware lab।
- লক্ষ্য: **C Programmer → System Programmer → Computer Architecture → OS Developer** (Production-grade)।
- Bangla-তে ভাবি, Technical term English-এ। English technical vocabulary-র জন্য নিজের dictionary: `01_C_Programming/Module-02_C_Syntax/Vocabulary+Dict.md`।
- আগে জানি: variable, function, loop, if/else, basic syntax।
- Syntax জানি কিন্তু **কেন/কখন** জানি না: `struct`, `typedef`, `enum`, `const`, `#define`।
- প্রায় নতুন: pointer, memory, dynamic memory, header file, multi-file project, build system।

## 2. আমি কীভাবে শিখি

> **Understand first. Memorize never.** Syntax শেখা যথেষ্ট নয় — code লিখতে পারা + বোঝা সেটা কীভাবে compile হয়,
> memory-তে কী হয়, CPU-র কাছে কী যায়, OS কীভাবে চালায়।

```text
Question → Hypothesis (predict) → ছোট C experiment → controlled flags-এ compile
→ output observe → কেন হলো explain → একটা জিনিস বদলাও → compare → conclusion
```

- আগে **mental model / ASCII diagram / গল্প**, তারপর definition।
- **Experiment ছাড়া conclusion না।** Experiment-এ লিখি: compiler, arch, OS, `-O` level, ABI — আর কোনটা C guarantee, কোনটা শুধু এই machine-এর behavior।
- ভুলগুলো লিখি: `❌ আমি ভাবতাম / ✅ আসল সত্য` — এটাই আমার সবচেয়ে দামী note।
- গভীর "why" প্রশ্ন করি → উত্তর ছোট রেখে **Parking Lot (§9)**-এ রাখো, current lesson-এ ফেরো।

## 3. Current State (এখন কোথায়)

```text
📍 NOW:  Module 01 → Lesson 03 Assembler = ROADMAP P0.3 (আবার পড়ছি, এবার note সহ শেষ করব)
⏭️ NEXT: Lesson 04 Linker → Lesson 05 Loader → তারপর Module 02 Data Types-এ ফিরব (sizeof + _Alignof)
▶️ পরের কাজ: §7 Step 0 (L02 cleanup, ১৫ মিনিট) → Step 1
```

| Area | Status | মন্তব্য |
|---|---|---|
| L01 Preprocessor | ✅ Done | সব file পূর্ণ |
| L02 Compiler | 🟡 প্রায় শেষ | `04_observation.md` খালি |
| L03 Assembler | 🔄 **NOW** | চ্যাটে শিখেছিলাম, notes নেই → আবার |
| L04 Linker | ⏳ | `main.c`+`hello.c` আছে, notes খালি |
| L05 Loader | ⏳ | scaffold only |
| M02 Variables | ✅ Basic | declaration/init/assignment/uninitialized/address/ASLR |
| M02 Data Types | ⏸️ Paused | sizeof ✅, alignment/padding experiments করা, **_Alignof বাকি** |

> কেন pipeline আগে? Linker + Loader বুঝলে address experiment-এর `0x7ffe...` কোথা থেকে আসে (stack, ASLR, virtual memory) সেটা পরিষ্কার হবে।

## 4. যা শিখেছি (Verified Knowledge)

**Compiler Pipeline**
- `.c → (Preprocessor) .i → (Compiler) .s → (Assembler) .o → (Linker) executable → (Loader) process`
- Preprocessor C বোঝে না, শুধু text replace। `#include` = content expand। `#define` variable না, memory নেয় না।
- `#define AGE 26;` → `;` সহ replace হয়। Macro-তে `((x) * (x))` লাগে precedence-এর জন্য। Unused macro-র কোনো effect নেই।
- `SQUARE(i++)` → `((i++) * (i++))` — একই expression-এ `i` দুইবার modify = **Undefined Behavior**।
- Compiler optimize-ও করে; `printf("..\n")` → `puts()` হতে পারে (গ্যারান্টি না)। `puts()` library function, system call না।

**Variables & Data Types**
- Variable = object-এর নাম → Type + Storage + Value। Declaration ≠ Initialization ≠ Assignment।
- "Variable = Box" শুধু beginner model। Variable সবসময় RAM-এর fixed address-এ থাকে না — optimization-এ register-এও থাকতে পারে।
- Data Type ঠিক করে: representation, size, range, valid operations — শুধু "কত byte" না।
- Uninitialized local পড়া = **Undefined Behavior** (শুধু "garbage" না)। Unused ≠ Uninitialized।
- প্রতিবার run-এ address বদলায় → **ASLR**।
- `sizeof`: এই machine-এ char 1, int 4, float 4, double 8, long long 8।
- **Alignment** = object কোথায় শুরু হতে পারে তার নিয়ম। **Padding** = alignment-এর জন্য ফাঁকা byte। Alignment ≠ Padding।
- **Declaration order ≠ memory order** (local variable-এর layout C guarantee করে না)।
- `-O0/-O2/-O3/-Os` সব একই layout দিয়েছে এই program-এ — optimization মানেই layout বদলাবে না।
- `-O10` → GCC চুপচাপ `-O3` হিসেবে নেয়।
- `-fno-omit-frame-pointer` frame pointer রাখে; layout define করে না।

**এখনো unproven (যাচাই বাকি)**
- `age` আর `c`-এর মাঝের 3 byte আসলে padding নাকি stack frame-এর অন্য কিছু? → `_Alignof` + `objdump` দিয়ে দেখব (data: §7 Step 4)।

**Core Mental Models**

```text
Object      : type → size → alignment → representation → lifetime → address
Compilation : C → compiler → IR/optimization → assembly → machine code
Execution   : process → virtual address → memory → cache → CPU → instructions
Function    : call → ABI → registers + stack → machine instructions → return
```

## 5. Tutor Guardrails (এগুলো কখনো বলবে না)

- "Stack variable সবসময় declaration order-এ থাকে।"
- "Large → small সবসময় padding কমায়।"
- "Padding সবসময় variable size-এর কারণে হয়।"
- "প্রতিটা printed address একটা permanent stack slot।"
- "একটা GCC/x86-64 result = universal C rule।"
- "Optimization মানেই layout বদলাবে।"
- "Pointer শুধু একটা integer।"

বলবে: *"তোমার এই compiler/build এটা করছে; C standard এটা guarantee করে না।"*

## 6. Tutor Instructions (যেকোনো AI tutor-এর জন্য)

**Role:** experienced C programmer · systems programmer · compiler/ABI-aware engineer · Linux/OS-aware engineer · low-level debugging/performance mentor।
এটা একটা **learning journal**, software product না — tutor আর reviewer হও, আমার হয়ে code লিখে দিও না।

**Style**
- আগে ঠিক প্রশ্নটার উত্তর দাও। ছোট প্রশ্ন → ছোট উত্তর; গভীরে যাও শুধু দরকার হলে।
- Bangla/Banglish-এ উত্তর, technical term English-এ।
- একবার দেখানো concept আবার repeat করো না।
- ভুল ধারণা সরাসরি ঠিক করো — flattery না।
- Socratic: explain করার আগে ১–২টা প্রশ্ন করে জানো আমি কী ভাবি; ভুল ধারণা `mistakes.md`-এ যাবে।
- এক step-এ একটা concept, ছোট message।
- Assembly আনো শুধু যখন সেটা কোনো observed behavior explain করে।
- দরকার হলে connect করো: `C → compiler → assembly → machine code → CPU → memory/cache → OS`।
- আমার notes-এর ভুল statement, file নামের typo, খালি lesson file আর roadmap-এর অমিল ধরিয়ে দাও।
- আমি আগে লাফ দিলে: ছোট উত্তর → §9 Parking Lot-এ রাখো → current lesson-এ ফেরাও।

**প্রতিটা Topic-এর Structure**

Why exists → What problem it solves → Theory → Internal working → Memory model → Syntax → Examples →
Real-world use → Common mistakes → Terminal experiments → Homework (অন্তত একটা code লেখার কাজ) →
Interview questions → Summary → Mental model

**Lesson folder template**

প্রতিটা lesson folder-এ: `mental_model · summary · experiments · observation · mistakes · homework · notes · questions`
(`.md`, কখনো `01_`…`08_` numbered) + `code/` + `output/`। Mistakes format: `## ❌ আমি ভাবতাম` / `## ✅ আসল সত্য`।

**Rules**
1. এক lesson শেষ (সব file পূর্ণ) না হলে পরেরটা না। Topic skip না; ভুল উত্তর দিলে আগে ভুলের কারণ বোঝাও।
2. **আমার study folder গুলো AI-এর জন্য READ-ONLY** — পড়তে পারবে, কিন্তু কোনো file লিখবে, বদলাবে, delete, move বা rename করবে না। ওগুলো আমার অনেক কষ্টের লেখা।
3. Lesson file সব **আমি** লিখি (বিশেষ করে `observation`, `mistakes`, `summary`, `Thought.md`); tutor chat-এ explain করে আর আমার লেখা review করে।
4. AI শুধু **MASTER.md** আর **ROADMAP.md** update করে।
5. Session শুরু: MASTER.md পড়ো → §7-এর প্রথম unchecked step → জিজ্ঞেস করো গতবার থেকে কী confuse করছে।
6. Session শেষ: ৩টা quiz → §7-এ tick → §3 update → lesson শেষ হলে ROADMAP.md-এ ✅ → §12-এ এক লাইন → commit message suggest।
7. Git: commit শুধু আমি বললে। Message স্পষ্ট (যেমন `datatype: padding experiment with 5 types`)। Build output (`*.o`, binary) commit না।

---

## 7. Lesson Plan — এক এক করে

> প্রথম unchecked `[ ]` থেকে শুরু করো। ✍️ = অবশ্যই নিজের ভাষায় লিখবে (tutor শুধু review)।

### 🔄 Step 0 — Lesson 02 Compiler cleanup (১৫ মিনিট) · ROADMAP P0.2
- [ ] ✍️ `Lesson-02_Compiler/04_observation.md` লেখো: `-O0` vs `-O2` assembly-তে কী পার্থক্য দেখেছিলে
- [ ] ✍️ `05_mistakes.md`-এ আরেকটা mistake: `printf → puts` optimization

### 📍 Step 1 — Lesson 03 Assembler · ROADMAP P0.3  ← **NOW**
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

### Step 2 — Lesson 04 Linker · ROADMAP P0.4
`Lesson-04_Linker/` (`main.c` + `hello.c` already আছে)
- [ ] Predict: `gcc -c main.c` একা কি executable বানাবে?
- [ ] Exp 1: দুটো `.o` বানাও → `nm` দিয়ে defined vs undefined symbol
- [ ] Exp 2: শুধু `main.o` link → `undefined reference` error পড়ো
- [ ] Exp 3: `gcc main.o hello.o -o app` → `nm app`
- [ ] Exp 4: Static vs dynamic: `gcc -static` vs normal → size তুলনা, `ldd app`
- [ ] Exp 5: একই function দুই file-এ define → `multiple definition` error
- [ ] ✍️ observation · mistakes · summary (`notes.md`, `mistakes.md` এখন খালি!)
- [ ] Homework: নিজের `mathlib.c` বানিয়ে `ar` দিয়ে `libmath.a` → link

### Step 3 — Lesson 05 Loader · ROADMAP P0.5
`Lesson-05_Loader/`
- [ ] Predict: `./app` টাইপ করলে কে কী করে?
- [ ] Exp 1: `readelf -h app` → entry point; `readelf -l app` → segments
- [ ] Exp 2: `Module-02_C_Syntax/02_DataType/Code/experiment/test.c` চালাও (sleep 60 আছে) → অন্য terminal-এ `cat /proc/<pid>/maps`
- [ ] Exp 3: code / global / heap / stack address কোন region-এ পড়ে মিলাও
- [ ] Exp 4: দুইবার চালাও → ASLR; `setarch -R ./test` দিয়ে ASLR বন্ধ করে তুলনা
- [ ] ✍️ observation · mistakes · summary
- [ ] **Phase 0 Project:** ২-file program হাতে হাতে `.c→.i→.s→.o→exe`, প্রতিটা ধাপ `nm/readelf` দিয়ে explain করে `Module-01/README.md`-এ লেখো

### Step 4 — Back to Data Types: `sizeof` + `_Alignof` · ROADMAP P1.1–P1.3
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

### Step 5 — Phase 1 বাকি (তোমার roadmap-এর ক্রমে) · ROADMAP P1.4–P1.9
- [ ] P1.4 Object representation — `memcpy` দিয়ে যেকোনো variable-এর byte দেখা
- [ ] P1.5 Binary/hex + bitwise operators (`& | ^ ~ << >>`, mask দিয়ে bit set/clear/toggle)
- [ ] P1.6 Endianness (byte-dumper-এ byte order)
- [ ] P1.7 signed/unsigned, two's complement, overflow
- [ ] P1.8 Integer promotions, conversions, casting, expressions in depth
- [ ] P1.9 float/IEEE 754 (`0.1 + 0.2`)

### Step 6 — Struct layout + `offsetof` · ROADMAP P1.10
- [ ] `05.c` বাড়াও: `offsetof` দিয়ে প্রতিটা member-এর offset
- [ ] Member order বদলে `sizeof(struct)` কমাও (local var-এর মতো না — struct-এ order **guaranteed**!)
- [ ] ✍️ mistakes: local variable layout vs struct layout পার্থক্য
- [ ] 🏁 Phase 1 Checkpoint: byte-dumper (ROADMAP.md দেখো)

➡️ তারপর ROADMAP.md-এর Phase 2 (P2.1)।

---

## 8. Roadmap — বড় ছবি

> ✅ এটা তোমার দেওয়া C Programming file-এর **আসল roadmap — হুবহু** (শুধু heading size ছোট করা হয়েছে)।
> ⚠️ Phase 1-এর আগে: Module 01 Assembler → Linker → Loader আবার শেষ করছি (তোমার সিদ্ধান্ত) — §7 Step 0–3।
> 📘 প্রতিটা Phase lesson-by-lesson (কী শিখবে / কী এখন না / experiment / কখন শেষ): **ROADMAP.md**

### Long-Term Learning Goal

লক্ষ্য শুধু C Syntax শেখা নয়।

লক্ষ্য:

> Production-grade System Programmer হওয়া।

ভবিষ্যতে শিখতে হবে:

```text
C Programming
    ↓
Memory
    ↓
Pointers
    ↓
Data Structures
    ↓
System Programming
    ↓
Linux Internals
    ↓
Operating Systems
    ↓
Computer Architecture
    ↓
Assembly
    ↓
Networking Internals
    ↓
Embedded Systems
```

---

### Recommended Roadmap (Phase 1–12)

#### Phase 1 — Finish C Data Representation

Immediate sequence:

1. `sizeof` and object size
2. `_Alignof` and alignment
3. alignment vs padding
4. object representation
5. binary/hex representation
6. endianness
7. signed integer representation
8. integer promotions/conversions
9. floating-point representation
10. `struct` layout and padding

##### Key experiment

Compare:

```c
sizeof(char)
sizeof(int)
sizeof(float)
sizeof(double)
sizeof(long long)

_Alignof(char)
_Alignof(int)
_Alignof(float)
_Alignof(double)
_Alignof(long long)
```

Then compare those results with actual addresses.

Next:

```text
sizeof / _Alignof
      -> struct layout
      -> padding
      -> offsetof
      -> arrays
      -> pointers
```

---

#### Phase 2 — Arrays

Learn:

```text
array
 -> contiguous objects
 -> address arithmetic
 -> element size
 -> pointer relationship
```

Experiments:
- print every element address
- compare `&arr[i]`
- observe address differences
- connect element size to pointer arithmetic

---

#### Phase 3 — Pointers

Build:

```text
address
  -> pointer
  -> dereference
  -> pointer arithmetic
```

Do not teach pointers only as "a pointer stores an address".

Also cover:
- pointer type
- dereference semantics
- pointer arithmetic
- NULL
- pointer-to-pointer
- alignment
- lifetime
- invalid pointers

---

#### Phase 4 — Functions and Stack Frames

Connect:

```text
function call
  -> arguments
  -> calling convention
  -> registers / stack
  -> stack frame
  -> return value
```

This should build directly on the learner's current address/alignment experiments.

---

#### Phase 5 — Dynamic Memory

Then:

```text
stack vs heap
```

Study:
- `malloc`
- `calloc`
- `realloc`
- `free`
- ownership
- lifetime

Use controlled experiments for:
- leak
- dangling pointer
- use-after-free
- double-free
- buffer overflow

Use sanitizers where appropriate.

---

#### Phase 6 — Structs / Unions / Memory Layout

Deep dive into:

```c
struct
union
enum
```

Especially:
- member order
- alignment
- padding
- `sizeof(struct)`
- `offsetof`

Compare:

```text
struct layout
vs
ordinary local-variable layout
```

This comparison is important because struct layout has stronger C-language guarantees than arbitrary stack-frame layout.

---

#### Phase 7 — Compiler Internals

Then:

```text
.c
 -> .i
 -> .s
 -> .o
 -> executable
```

Study:
- preprocessing
- compilation
- assembly
- object files
- symbol table
- relocation
- linker
- loader

Introduce assembly only when it explains an observed behavior.

---

#### Phase 8 — ABI / Calling Convention

Prefer one concrete platform first:

```text
x86-64 Linux
System V AMD64 ABI
```

Study:
- argument registers
- return registers
- stack alignment
- caller-saved registers
- callee-saved registers
- stack frame
- prologue/epilogue
- frame pointer
- red zone

---

#### Phase 9 — Virtual Memory / OS

Then:

```text
virtual address
  -> page
  -> page table
  -> physical memory
```

Study:
- process address space
- text/code
- read-only data
- data
- BSS
- heap
- stack
- shared libraries
- mmap
- system calls

---

#### Phase 10 — CPU / Performance

Study:
- registers
- cache
- cache lines
- locality
- branch prediction
- pipeline
- memory latency
- profiling
- performance measurement

Then connect C data structures to cache behavior.

---

#### Phase 11 — Concurrency

```text
process
  -> thread
  -> shared memory
  -> race condition
  -> synchronization
```

Study:
- pthreads
- mutex
- condition variables
- semaphores
- atomics
- memory ordering
- deadlocks

---

#### Phase 12 — Systems Projects

Suggested progression:

1. dynamic array
2. string library subset
3. hash table
4. linked list/tree implementations
5. custom allocator
6. mini shell
7. file utility
8. process supervisor
9. thread pool
10. TCP server
11. event-driven server
12. embedded/ESP8266 project

---

### 📚 Full Topic Checklist

যেগুলো এখনো পুরোপুরি শেখা হয়নি, area অনুযায়ী (শেখা হলে ✅ দাও):

- **C Core:** operators in depth, integer promotions, usual arithmetic conversions, signed/unsigned, overflow, floating-point, arrays, strings, pointers, pointer arithmetic, pointer-to-pointer, `const`, `static`, `extern`, storage duration, object lifetime, scope vs lifetime, structs, unions, enums, bit-fields, function pointers, callbacks, variadic functions, preprocessor/macros in depth
- **Memory Management:** stack vs heap, `malloc`, `calloc`, `realloc`, `free`, ownership, lifetime, dangling pointers, use-after-free, double-free, memory leaks, buffer overflow, invalid memory access
- **Data Representation:** binary/hex, two's complement, endianness, IEEE-754, object representation, `sizeof`, `_Alignof`, `_Alignas`, `offsetof`, strict aliasing, effective type
- **Compiler / Build:** preprocessing in depth, compilation stages, assembly generation, object files, symbols, relocation, static/dynamic linking, shared libraries, loader, GCC vs Clang, optimization, debug information, Make, CMake, Ninja, incremental builds
- **Machine / CPU:** registers, stack pointer, frame pointer, calling conventions, function call mechanics, return values, cache, cache lines, locality, branch prediction, pipeline basics
- **OS:** process, virtual memory, address space, pages, page tables, `mmap`, system calls, file descriptors, signals, process creation, threads, scheduling, context switching, IPC
- **Concurrency:** race conditions, mutex, semaphore, condition variable, atomics, memory ordering, deadlock, lock-free concepts
- **Systems Tools:** `gdb`, `strace`, `ltrace`, `objdump`, `readelf`, `nm`, `ldd`, valgrind, sanitizers (ASan/UBSan)
- **Embedded:** MCU architecture, memory-mapped I/O, registers, interrupts, GPIO, timers, UART, SPI, I2C, linker scripts, bare-metal C, RTOS concepts, ESP8266

---

## 9. Parking Lot (পরে উত্তর পাবে)

| প্রশ্ন | কোথায় |
|---|---|
| Virtual vs Physical address, MMU, page table | L05 Loader → §8 Phase 9 (Virtual Memory / OS) |
| কেন declaration order ≠ stack order; ABI কীভাবে stack layout ঠিক করে | §8 Phase 8 (ABI / Calling Convention) |
| `test.c`-এর code/data/heap/stack address | §7 Step 3 (Loader) |
| `age`–`c`-এর ৩ byte gap padding কিনা | §7 Step 4 (`_Alignof`) |

## 10. আমার দুর্বল দিক

> Tutor সময়মতো আলতো করে মনে করিয়ে দেবে — একসাথে lecture না।

1. Structure বানাই বেশি, content লিখি কম — অনেক lesson file খালি। নতুন কিছু শুরুর আগে মনে করিয়ে দাও।
2. আগে লাফ দেই — Module 01 শেষ না করে Module 02-এর memory/MMU-তে চলে গিয়েছিলাম।
3. AI chat-এর লেখা notes-এ paste করি — ওগুলো মনে থাকে না। নিজের ভাষায় লিখতে push করো।
4. Git: অস্পষ্ট commit message ("just meh"), build output commit।
5. Roadmap-এ অমিল, file নামে typo।
6. শুধু observe করি, build কম — প্রতি lesson-এ অন্তত একটা ছোট code লেখার কাজ।

## 11. Repo Map & Commands

```text
computer-science/
├── MASTER.md              ← এই file (master)
├── ROADMAP.md             বিস্তারিত lesson-wise roadmap (P0.1 … P11.8, Phase 12, Track B)
├── .claude/CLAUDE.md      Claude Code-কে বলে MASTER.md পড়তে
├── 00_Resources/          books, cheatsheets, papers
├── 01_C_Programming/      ← এখন এখানে
│   ├── Module-01_Compiler-Pipeline/  Lesson-01 … Lesson-05
│   ├── Module-02_C_Syntax/           01_Variable, 02_DataType
│   └── Module-03 … 06, Projects/     (ভবিষ্যৎ)
├── 02_Linux … 11_Projects/            (ভবিষ্যৎ subjects)
└── scripts/
```

**Experiment commands**

```bash
gcc -E main.c -o main.i       # preprocess
gcc -S -O0 main.c -o main.s   # compile → assembly (-O2-এর সাথে তুলনা করো)
gcc -c main.c -o main.o       # assemble
gcc main.o -o main            # link
objdump -d main.o; nm main.o; readelf -a main   # inspect
```

**Known clean-up (নিজে করবে যখন চাও — AI folder ছোঁবে না):** typo নাম `Ruff Sctach.md`, `expriment/`, `04_obserbation.md`;
`.gitignore` খালি বলে `.o`/binary commit হয়েছে; `Module-02_C_Syntax/README.md`-এর topic list roadmap-এর সাথে মেলে না;
`03_Operating_System/Roadmap2.md` অনেকটা §8-এর মতো।

**পুরোনো root file** (`README.md`, `CLAUDE.md`, `TUTOR.md`, পুরোনো `ROADMAP.md`, `LESSON_PLAN.md`,
`C_Programming_Learning_State_README.md`, `test.md`, `.claude/memory/`) — দেখতে: `git show a9b2f10:<file-name>` ·
ফেরত আনতে: `git checkout a9b2f10 -- <file-name>` (⚠️ একই নামের নতুন file থাকলে overwrite হবে — যেমন `ROADMAP.md`)

## 12. Session Log

> প্রতি session শেষে এক লাইন।

- 2026-10-03 — সব root `.md` এক MASTER.md-এ merge, বাকি delete (backup: git `a9b2f10`)। শুরু: §7 Step 0।
- 2026-10-03 — §8-এ তোমার আসল roadmap (Long-Term Goal + Phase 1–12) হুবহু ফেরত আনা হলো; আমার বানানো ভিন্ন-order version বাদ (backup: `a9b2f10:ROADMAP.md`)।
- 2026-10-03 — ROADMAP.md তৈরি: Phase 0–12 + Track B — ৯০টা lesson, ১২টা project (+৪ bonus), Track B-র ১৩টা ধাপ (কী শিখবে / কী এখন না / experiment / 🎯)।
- 2026-10-03 — Setup শেষ: MASTER.md + ROADMAP.md ready, git-এ commit। পরের session: §7 Step 0 (L02 `04_observation.md`) → Step 1 Assembler (P0.3)।
