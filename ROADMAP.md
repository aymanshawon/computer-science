# 🗺️ ROADMAP — Topic & Lesson-wise (বিস্তারিত)

> **ভিত্তি:** তোমার আসল roadmap — `MASTER.md` §8 (Phase 1–12)। **Phase-এর order একটুও বদলানো হয়নি।**
> এর সাথে মেলানো হয়েছে তোমার নিজের আরও দুটো plan: `01_C_Programming/README.md` আর `03_Operating_System/README.md`
> (ওগুলোর কোন topic কোন lesson-এ গেছে — একদম শেষে টেবিল আছে)।
>
> - **Phase 0** = Module 01 Compiler Pipeline — তোমার সিদ্ধান্ত: Phase 1-এর আগে আবার note সহ শেষ করবে।
> - **Phase 1–12** = তোমার roadmap, প্রতিটা phase lesson-এ ভাগ করা।
> - **Track B** = Phase 12-এর পরে তোমার OS plan: ESP8266 → Bare-metal → MyOS।

**Last updated:** 2026-10-03 · **📍 এখন:** P0.2-এর ছোট কাজ (MASTER §7 Step 0) → তারপর **P0.3 Assembler**

---

## 📖 কীভাবে পড়বে

প্রতিটা lesson-এর ID: **P‹phase›.‹lesson›** — যেমন **P1.3** = Phase 1-এর ৩ নম্বর lesson।

| চিহ্ন | মানে |
|---|---|
| ✅ **শিখবে** | এই lesson-এ অবশ্যই শিখতে হবে |
| ❌ **এখন শিখবে না** | এই lesson-এ ঢুকবে না — কোথায় শিখবে (→ lesson ID) বলা আছে |
| 🧪 **Experiment** | নিজে চালিয়ে দেখবে — আগে predict, তারপর run |
| ⚠️ **সাধারণ ভুল** | এই topic-এ প্রায় সবাই যে ভুল করে |
| ❓ **নিজেকে জিজ্ঞেস করো** | এগুলোর উত্তর দিতে পারলে বুঝেছ |
| 🎯 **শেষ হবে যখন** | এটা পারলে তবেই পরের lesson |
| 🏁 **Checkpoint** | Phase শেষের ছোট কাজ |
| ➕ | তোমার roadmap-এর Phase text-এ সরাসরি ছিল না — তোমার topic checklist বা তোমার অন্য README থেকে এখানে বসানো |
| 🔌 | ESP8266/embedded-এ বিশেষ কাজে লাগবে |
| ✅ 🟡 📍 ⏳ (lesson নামের পাশে) | শেষ · প্রায় শেষ · এখন · পরে |

---

## 🧭 এক নজরে

| Phase | বিষয় | Lessons | 📁 Folder (suggestion) | 🏁 Checkpoint |
|---|---|---|---|---|
| **0** 📍 | Compiler Pipeline | P0.1–P0.5 (৫) | `01_C_Programming/Module-01_Compiler-Pipeline/` | ২-file program হাতে হাতে build |
| **1** | Finish C Data Representation | P1.1–P1.10 (১০) | `01_C_Programming/Module-02_C_Syntax/` | Byte-dumper |
| **2** | Arrays | P2.1–P2.6 (৬) | `Module-02_C_Syntax/` বা `Module-04_Pointers/` | Matrix + string function |
| **3** | Pointers | P3.1–P3.8 (৮) | `Module-04_Pointers/` | Generic swap + pointer string function |
| **4** | Functions and Stack Frames | P4.1–P4.8 (৮) | `Module-02_C_Syntax/` + `Module-03_Memory/` | Multi-file calculator + stack diagram |
| **5** | Dynamic Memory | P5.1–P5.7 (৭) | `Module-03_Memory/` | Dynamic array |
| **6** | Structs / Unions / Memory Layout | P6.1–P6.7 (৭) | `Module-05_DataStructures/` | List / stack / queue module |
| **7** | Compiler Internals | P7.1–P7.9 (৯) | `Module-01_Compiler-Pipeline/` (গভীরে) + `05_Assembly/` | Static + shared library |
| **8** | ABI / Calling Convention | P8.1–P8.7 (৭) | `05_Assembly/` | Assembly function C থেকে call |
| **9** | Virtual Memory / OS | P9.1–P9.9 (৯) | `03_Operating_System/` + `02_Linux/` + `Module-06_SystemProgramming/` | Mini shell |
| **10** | CPU / Performance | P10.1–P10.6 (৬) | `04_Computer_Architecture/` | Benchmark report |
| **11** | Concurrency | P11.1–P11.8 (৮) | `Module-06_SystemProgramming/` | Thread pool |
| **12** | Systems Projects | ১২টা project (+৪টা bonus) | `01_C_Programming/Projects/` + `11_Projects/` | — |
| **B** | ESP8266 → Bare-metal → MyOS | B.1–B.13 (১৩) | `10_Embedded/` + `03_Operating_System/` | MyOS shell চলছে |

মোট: **৯০টা lesson** (Phase 0–11) + **১২টা project** (+৪ bonus) + **Track B-তে ১৩টা ধাপ**।

> 📁 Folder শুধু suggestion — lesson folder তুমি নিজে বানাবে (AI তোমার folder-এ লেখে না)।

---

## 📏 সব lesson-এর common নিয়ম

1. **এক lesson শেষ (🎯 পূরণ) না হলে পরেরটা না।** একদিনে একটা concept।
2. **প্রতিটা lesson-এর file** (তুমি নিজে লিখবে): `mental_model · experiments · observation · mistakes · summary · questions · homework · notes`
3. **শেখার ধাপ** (তোমার OS README থেকে):
   `Why? → Problem → Small Theory → Mental Model → Tiny C Program → Compile → Run → Experiment → Observe Memory/Assembly → নিজের ভাষায় explain → Next Concept`
4. **Experiment-এ সবসময় লিখবে:** compiler + version (`gcc --version`), flags, OS, arch — আর কোনটা C guarantee, কোনটা শুধু তোমার machine-এর behavior।
5. **Default compile command:**
   ```bash
   gcc -std=c17 -Wall -Wextra -g -O0 file.c -o file
   # bug খোঁজার সময়:
   gcc -std=c17 -Wall -Wextra -g -O0 -fsanitize=address,undefined file.c -o file
   ```
   (Debian 13-এর GCC 14-এর default standard হলো `gnu17`।)
6. **Lesson শেষে (tutor করবে):** MASTER §7-এ tick, এই file-এ lesson-এর পাশে ✅, MASTER §12-এ এক লাইন।

---

# Phase 0 — Compiler Pipeline 📍

> **লক্ষ্য:** `.c` থেকে চলমান process পর্যন্ত প্রতিটা ধাপ নিজের চোখে দেখা।
> **কেন আগে:** Phase 1-এর address experiment-এর `0x7ffe...` কোথা থেকে আসে — Linker আর Loader না বুঝলে পরিষ্কার হবে না। (তোমার সিদ্ধান্ত)
> **📁** `01_C_Programming/Module-01_Compiler-Pipeline/` · **ধাপে ধাপে checklist:** MASTER §7 Step 0–3

```text
main.c ─(Preprocessor)→ main.i ─(Compiler)→ main.s ─(Assembler)→ main.o ─(Linker)→ app ─(Loader)→ process
  P0.1                     P0.2                P0.3                  P0.4             P0.5
```

### P0.1 — Preprocessor ✅

- ✅ **শিখেছ:** preprocessor শুধু text replace করে, C বোঝে না · `#include` = content expand · `#define` = text replacement (variable না, memory নেয় না) · macro function আর `((x) * (x))` parentheses · `SQUARE(i++)` = UB · `#define AGE 26;`-এর `;` সমস্যা · conditional compilation basics · `gcc -E`
- ❌ **গভীরে পরে (→ P7.1):** `#` ও `##` operator · `do { } while (0)` macro · variadic macro · include guard-এর বিস্তারিত · X-macro · predefined macro
- 🎯 **শেষ:** ✅ সব file পূর্ণ

### P0.2 — Compiler 🟡

- ✅ **শিখেছ:** `.i → .s` · compiler optimize-ও করে · `-O0` vs `-O2` · `printf("...\n")` → `puts()` হতে পারে (guarantee না) · generated assembly পড়ার শুরু
- 🟡 **বাকি:** `04_observation.md` লেখা, `05_mistakes.md`-এ `printf → puts` mistake (MASTER §7 Step 0)
- ❌ **গভীরে পরে:** compiler-এর ভেতরের ধাপ (lexer, parser, AST, IR) → P7.2–P7.3 · assembly বিস্তারিত → Phase 8
- 🎯 **শেষ হবে যখন:** observation আর mistake file লেখা হয়ে যাবে

### P0.3 — Assembler 📍

> **কেন:** CPU assembly text পড়ে না — machine code bytes পড়ে। Assembler এই অনুবাদ করে, আর linker-এর জন্য "বাকি কাজের তালিকা" (relocation) রেখে দেয়।

- ✅ **শিখবে:**
  - Assembler-এর কাজ: assembly text (`.s`) → machine code bytes (`.o`)
  - `.o` = **ELF relocatable object** — এখনো চালানো যায় না
  - `.o`-এর ভেতরে কী থাকে: sections (`.text` = code, `.data` = initialized data, `.bss` = শূন্য data, `.rodata` = read-only data), symbol table, relocation entries, debug info (`-g` দিলে)
  - Symbol: defined (`T`) vs undefined (`U`) — `printf` কেন `U`
  - Relocation: `call printf`-এর address কেন `00 00 00 00` — linker পরে বসাবে
  - `gcc -c` আসলে `as`-কে ডাকে (`gcc -v` দিয়ে দেখো)
  - Tools: `file`, `objdump -d`, `objdump -dr`, `readelf -S`, `readelf -s`, `nm`, `xxd` / `hexdump -C`
- ❌ **এখন শিখবে না:**
  - Instruction encoding-এর পুরো নিয়ম (opcode, ModRM) → দরকার নেই; Phase 8-এ শুধু পড়তে শিখবে
  - Relocation type-গুলোর বিস্তারিত (`R_X86_64_PC32` vs `PLT32`) → P7.5
  - ELF header-এর প্রতিটা field → P7.5, P7.7
  - নিজে assembly লেখা → P8.7
- 🧪 **Experiment:** MASTER §7 Step 1 (Exp 1–5 + 4b), আর অতিরিক্ত:
  - `gcc -v -c test1.s` → output-এ `as` command খুঁজে বের করো
  - `objdump -d test1.o`-এ `main`-এর address `0` কেন? (relocatable — এখনো final address নেই)
- ⚠️ **সাধারণ ভুল:**
  - "`.o` = executable" — না; entry point নেই, symbol unresolved
  - "Assembly = machine code" — assembly হলো text, machine code হলো bytes
  - "`objdump`-এর output = আমার `.s` file" — না, এটা bytes থেকে আবার বানানো (disassembly)
- ❓ **নিজেকে জিজ্ঞেস করো:**
  - `.s` আর `.o`-এর মধ্যে ৩টা পার্থক্য কী?
  - Relocation না থাকলে আলাদা আলাদা file compile করা কি সম্ভব হতো?
  - `.bss` কেন file-এ জায়গা নেয় না, কিন্তু memory-তে নেয়?
- 🎯 **শেষ হবে যখন:** `objdump -dr` output দেখিয়ে নিজের ভাষায় বলতে পারবে — কোন byte কোন instruction, কোথায় relocation, কেন `printf` এখনো অজানা।

### P0.4 — Linker ⏳

> **কেন:** বড় program অনেক file-এ ভাগ থাকে। Linker সব `.o` আর library জোড়া লাগিয়ে একটা executable বানায় — "কে কোথায়" মিলিয়ে দেয়।

- ✅ **শিখবে:**
  - Symbol definition vs reference (`main.o` চায় `hello`, `hello.o` দেয়)
  - Symbol resolution → relocation বসানো → section জোড়া লাগানো
  - `undefined reference` আর `multiple definition` error — কেন হয়
  - Header file (`.h`)-এ শুধু declaration — `#include` করলেই link হয় না
  - Library: `.a` (static — `.o`-এর archive) আর `.so` (shared) — `libc.so`
  - Static vs dynamic linking: size পার্থক্য, `ldd`
  - `_start` কোথা থেকে আসে — crt file (`crt1.o`) — `gcc -v` দিয়ে linker command দেখো
  - Link order: `-l` কেন শেষে দিতে হয় (basic)
- ❌ **এখন শিখবে না:**
  - PLT/GOT, lazy binding → P7.6
  - Weak symbol, visibility → P7.5
  - Linker script → P7.7, B.2
  - Link-time optimization (LTO) → শুধু নাম জানলেই হবে
- 🧪 **Experiment:** MASTER §7 Step 2 (Exp 1–5 + homework `libmath.a`), আর অতিরিক্ত:
  - `gcc -v main.o hello.o -o app` → `collect2`/`ld` লাইনে `crt1.o`, `crti.o`, `-lc` খোঁজো
  - Prototype ছাড়া `hello()` call করো → নতুন GCC (14) কী বলে?
- ⚠️ **সাধারণ ভুল:**
  - "`#include <stdio.h>` করলেই `printf`-এর code চলে আসে" — না, শুধু declaration; code আসে link-এর সময় `libc` থেকে
  - "Linker C বোঝে" — না, শুধু symbol আর bytes বোঝে
  - Header-এ variable define করা (`int g = 0;`) → multiple definition
- ❓ **নিজেকে জিজ্ঞেস করো:**
  - Static binary এত বড় কেন?
  - `main` না থাকলে কোন stage-এ error আসে — compiler না linker?
- 🎯 **শেষ হবে যখন:** `undefined reference`/`multiple definition` দেখে কারণ বলতে পারবে, আর নিজের `libmath.a` link করতে পারবে।

### P0.5 — Loader ⏳

> **কেন:** `./app` টাইপ করার পর file থেকে চলমান process — মাঝখানে OS কী করে, এটাই তোমার address experiment-এর রহস্যের চাবি।

- ✅ **শিখবে:**
  - `execve` → kernel ELF পড়ে → segment গুলো memory-তে map করে
  - Dynamic loader (`ld-linux-x86-64.so.2`) shared library load করে (`readelf -l`-এ `INTERP`)
  - Entry point = `_start` (main না!) → তারপর `main`
  - Process memory layout: text, rodata, data, bss, heap, shared libs, stack
  - `/proc/<pid>/maps` পড়া
  - ASLR + PIE: কেন প্রতিবার address বদলায় · `setarch -R` দিয়ে বন্ধ করে দেখা
  - Stack-এ `argc`, `argv`, `envp` কে রাখে
- ❌ **এখন শিখবে না:**
  - Page table, MMU, virtual → physical → P9.2
  - `_start` থেকে `main` পর্যন্ত বিস্তারিত → P7.7
  - Dynamic linker-এর ভেতরের কাজ → P7.6–P7.7
- 🧪 **Experiment:** MASTER §7 Step 3, আর অতিরিক্ত:
  - `cat /proc/self/maps` দুইবার চালাও → এটা `cat`-এর নিজের map; address বদলায়?
  - `readelf -h app` → `Type: DYN` (PIE) — কেন `EXEC` না?
- ⚠️ **সাধারণ ভুল:**
  - "Loader = Linker" — না; linker build-এর সময়, loader run-এর সময়
  - "Program RAM-এর physical address-এ বসে" — না, virtual address (→ P9.2)
  - "Program শুরু হয় `main` থেকে" — না, `_start` থেকে
- ❓ **নিজেকে জিজ্ঞেস করো:**
  - `test.c`-এর global আর static variable কোন region-এ? heap আর stack কোন দিকে বাড়ে?
  - ASLR না থাকলে attacker-এর কী সুবিধা হতো?
- 🎯 **শেষ হবে যখন:** `/proc/<pid>/maps`-এর প্রতিটা লাইন দেখে বলতে পারবে ওটা কী, আর `test.c`-এর প্রতিটা printed address কোন region-এর।

### 🏁 Phase 0 Checkpoint

২-file program হাতে হাতে: `.c → .i → .s → .o → executable` — প্রতিটা ধাপ `nm` / `readelf` / `objdump` দিয়ে explain করে `Module-01/README.md`-এ লেখো (MASTER §7 Step 3-এর শেষ item)।

---

# Phase 1 — Finish C Data Representation

> **লক্ষ্য (তোমার roadmap):** প্রতিটা object memory-তে আসলে কীভাবে থাকে — size, alignment, bytes, bits।
> **ক্রম (তোমার roadmap-এর "Immediate sequence" হুবহু):** sizeof → `_Alignof` → alignment vs padding → object representation → binary/hex → endianness → signed integer → promotions/conversions → floating-point → struct layout
> **📁** `01_C_Programming/Module-02_C_Syntax/02_DataType/` (+ দরকার হলে নতুন lesson folder তুমি বানাবে) · **🔙 আগে লাগবে:** Phase 0
> **ধাপে ধাপে checklist:** MASTER §7 Step 4–6

### P1.1 — `sizeof` ও Object Size (✅ basic হয়েছে — এবার পাকা করো)

> **কেন:** কোন object কত byte নেয় না জানলে memory-র কোনো হিসাবই মিলবে না।

- ✅ **শিখবে:**
  - `sizeof` একটা **operator**, function না — compile-time-এ হিসাব হয়
  - `sizeof x` (expression) vs `sizeof(type)` (type-এর জন্য parentheses লাগবেই)
  - Result-এর type `size_t` → print করবে `%zu` দিয়ে
  - C কী guarantee করে: `sizeof(char) == 1` সবসময় · `char` কমপক্ষে 8 bit (`CHAR_BIT`) · `short`/`int` ≥ 16 bit · `long` ≥ 32 · `long long` ≥ 64
  - তোমার machine (x86-64 Linux, data model **LP64**): `int` 4, `long` 8, pointer 8 · Windows (**LLP64**): `long` 4!
  - `<stdint.h>`-এর fixed-width type: `int8_t`, `uint16_t`, `int32_t`, `uint64_t` — কখন দরকার (🔌 hardware register, file format)
  - `<limits.h>`: `INT_MAX`, `INT_MIN`, `UINT_MAX`, `CHAR_BIT`
- ❌ **এখন শিখবে না:**
  - `sizeof(struct)` → P1.10 · `sizeof(pointer)` → P3.1 · `sizeof(array)` → P2.1
  - VLA-র runtime `sizeof` → শিখবে না (VLA এড়িয়ে চলবে)
- 🧪 **Experiment:**
  - `char, short, int, long, long long, float, double, long double, size_t` — সবগুলোর size print
  - `INT_MAX`, `INT_MIN`, `CHAR_BIT` print
  - `int x = 5; size_t s = sizeof x++; printf("%d\n", x);` → x কি 6 হলো? (`sizeof` expression evaluate করে না!)
- ⚠️ **সাধারণ ভুল:**
  - `size_t`-কে `%d` দিয়ে print — ভুল, `%zu`
  - "int সব জায়গায় 4 byte" — C guarantee করে না
- ❓ **নিজেকে জিজ্ঞেস করো:** `sizeof(char)` কেন সবসময় 1? `long` Linux-এ 8 কিন্তু Windows-এ 4 কেন?
- 🎯 **শেষ হবে যখন:** যেকোনো type-এর size আগে predict করে মিলাতে পারবে, আর বলতে পারবে কোনটা C guarantee, কোনটা platform-এর।

### P1.2 — `_Alignof` ও Alignment 🔌

> **কেন:** CPU সব address থেকে সমান সহজে data পড়তে পারে না। Alignment হলো "এই type কোন address-এ শুরু হতে পারবে" — এর নিয়ম।

- ✅ **শিখবে:**
  - Alignment requirement = object-এর address যে সংখ্যার multiple হতে হবে
  - `_Alignof(type)` (C11 keyword) · `alignof` (`<stdalign.h>`-এর macro; C23-এ keyword)
  - Alignment সবসময় 2-এর power (1, 2, 4, 8, 16 …)
  - Size ≠ alignment — যেমন x86-64-এ `long double`: size 16, alignment 16; কিন্তু অন্য platform-এ অন্যরকম হতে পারে
  - Address aligned কিনা check: `(uintptr_t)&x % _Alignof(int) == 0` (`uintptr_t` আছে `<stdint.h>`-এ — এখন শুধু recipe হিসেবে)
  - CPU কেন aligned পছন্দ করে: এক access-এ পড়া যায় · x86 misaligned সহ্য করে (ধীর হতে পারে) · কিছু CPU সরাসরি crash করে — 🔌 **ESP8266-এ misaligned 32-bit access → `Exception (9) LoadStoreAlignmentCause`**
- ❌ **এখন শিখবে না:**
  - `_Alignas` দিয়ে alignment বাড়ানো → P6.3
  - Struct-এর alignment → P1.10
  - Pointer cast করে misaligned access → P3.5
- 🧪 **Experiment:**
  - MASTER §7 Step 4 Exp 1 — size + alignment টেবিল print
  - তোমার পুরোনো experiment-এর প্রতিটা variable-এর address `% alignment` করে দেখো — সব 0?
- ⚠️ **সাধারণ ভুল:** "alignment = size" — primitive type-এ প্রায়ই সমান, কিন্তু সবসময় না
- ❓ **নিজেকে জিজ্ঞেস করো:** alignment কেন 3 বা 6 হতে পারে না?
- 🎯 **শেষ হবে যখন:** নিজের machine-এর size vs alignment টেবিল বানিয়ে প্রতিটা সংখ্যা explain করতে পারবে।

### P1.3 — Alignment vs Padding (Local Variable Layout)

> **কেন:** তোমার `02.c`-এর ৩ byte gap-এর উত্তর এখানে — আর শিখবে "observation" আর "proof"-এর পার্থক্য।

- ✅ **শিখবে:**
  - Padding = alignment ঠিক রাখতে ফাঁকা রাখা byte · Alignment ≠ Padding
  - Local variable-এর layout **compiler-এর সিদ্ধান্ত** — C কোনো order guarantee করে না
  - Observed gap ≠ প্রমাণিত padding — প্রমাণ লাগবে (`objdump -d`-এ প্রতিটা variable-এর `rbp` offset)
  - তোমার আগের পর্যবেক্ষণ: `-O0/-O2/-O3/-Os`-এ একই layout · declaration order ≠ memory order · stack নিচের দিকে বাড়ে (x86-64-এ সাধারণত)
  - Experiment note-এ লেখার ভাষা: "এই compiler/flags-এ এটা দেখেছি" — "C-তে এটাই নিয়ম" না
- ❌ **এখন শিখবে না:**
  - কেন ঠিক এই layout (ABI, stack alignment, red zone) → P8.5 (তখন পুরো রহস্য খুলবে)
  - Struct padding → P1.10
- 🧪 **Experiment:** MASTER §7 Step 4 (Exp 2–3 + gap investigation)
  - `gcc -O0 -c 02.c && objdump -d 02.o` → `movb $0x41,-0x..(%rbp)`-এর মতো লাইনে প্রতিটা variable-এর offset খুঁজে টেবিল বানাও
- ⚠️ **সাধারণ ভুল:** "gap দেখলেই padding" · "declaration order = memory order"
- ❓ **নিজেকে জিজ্ঞেস করো:** ৩ byte gap padding না অন্য কিছু — কোন evidence দিয়ে বলবে?
- 🎯 **শেষ হবে যখন:** `objdump` offset দিয়ে gap-এর ব্যাখ্যা লিখবে, আর `Experiment.md`-এ যেখানে প্রমাণ নেই সেখানে "padding" → "observed gap" ঠিক করবে।

### P1.4 — Object Representation

> **কেন:** Variable-এর "value" আর memory-তে থাকা "bytes" এক জিনিস না। Bytes দেখতে পারলে endianness, two's complement, float — সব নিজের চোখে দেখা যায়।

- ✅ **শিখবে:**
  - প্রতিটা object = `sizeof(object)` সংখ্যক byte-এর sequence
  - Value vs representation: `25` memory-তে "25" লেখা থাকে না — bits থাকে
  - `unsigned char` দিয়ে byte দেখা নিরাপদ (C এটা allow করে)
  - **এখনো pointer শেখোনি**, তাই recipe: `unsigned char b[sizeof x]; memcpy(b, &x, sizeof x);` → তারপর loop করে `%02x` দিয়ে print
  - `char`-এর signedness implementation-defined (x86-64 Linux-এ signed)
- ❌ **এখন শিখবে না:**
  - Pointer দিয়ে byte-এর উপর দিয়ে হাঁটা → P3.2–P3.3
  - Type punning, strict aliasing → P7.4
  - Byte order-এর ব্যাখ্যা → P1.6 (এখানে শুধু দেখবে, অবাক হবে)
- 🧪 **Experiment:**
  - `int x = 0x12345678;` → bytes print → `78 56 34 12` কেন উল্টো? (উত্তর P1.6-এ)
  - `float f = 1.0f;` → bytes `00 00 80 3f` (উত্তর P1.9-এ)
  - `char c = 'A';` → `41` · `int n = -1;` → `ff ff ff ff` (উত্তর P1.7-এ)
- ⚠️ **সাধারণ ভুল:** negative `char`-কে `%x` দিয়ে print করলে `ffffff80`-এর মতো আসে — promotion + sign extension (→ P1.8)
- ❓ **নিজেকে জিজ্ঞেস করো:** একই 4 byte int হিসেবে আর float হিসেবে পড়লে value আলাদা কেন?
- 🎯 **শেষ হবে যখন:** যেকোনো variable-এর byte dump print করতে পারবে (byte-dumper-এর প্রথম version)।

### P1.5 — Binary/Hex Representation + Bitwise Operators 🔌 (bitwise অংশ ➕)

> **কেন:** Hardware register, flag, permission — সব bit দিয়ে চলে। ESP8266-এ GPIO চালাতে এটাই লাগবে।

- ✅ **শিখবে:**
  - Binary ↔ hex ↔ decimal হাতে convert · 1 hex digit = 4 bit
  - Literal: hex `0x1F` · octal `010` (= 8! সাবধান) · binary `0b1010` (GCC extension; C23-এ standard)
  - Hex print: `%x`, `%#x`, `%08x`
  - Bit numbering: bit 0 = LSB (সবচেয়ে ডানে)
  - Bitwise operators: `&` `|` `^` `~` `<<` `>>`
  - Mask pattern: set `x |= 1u << n` · clear `x &= ~(1u << n)` · toggle `x ^= 1u << n` · test `(x >> n) & 1u`
  - Shift-এর নিয়ম: width-এর সমান বা বেশি shift = UB · signed negative left shift = UB · negative-এর right shift = implementation-defined → **bit-এর কাজে সবসময় unsigned**
  - `&` vs `&&`, `|` vs `||` পার্থক্য
- ❌ **এখন শিখবে না:**
  - Bit-field → P6.6 · আসল hardware register → B.1–B.2 · negative সংখ্যার bit → P1.7
- 🧪 **Experiment:**
  - `print_binary(unsigned x)` লেখো (loop + shift + mask)
  - GPIO-style flag: `#define LED (1u << 2)` → set/clear/toggle করে binary print
  - `1 << 31` (int) vs `1u << 31` — `-fsanitize=undefined` দিয়ে চালাও
  - Power of 2 check: `x && !(x & (x - 1))`
- ⚠️ **সাধারণ ভুল:** `if (x & 1 == 0)` → আসলে `x & (1 == 0)` (precedence!) · `&` আর `&&` গুলিয়ে ফেলা
- ❓ **নিজেকে জিজ্ঞেস করো:** bit manipulation-এ কেন unsigned ব্যবহার করবে?
- 🎯 **শেষ হবে যখন:** set/clear/toggle/test macro নিজে লিখতে পারবে + `print_binary` কাজ করবে।

### P1.6 — Endianness 🔌

> **কেন:** P1.4-এর "উল্টো byte"-এর রহস্য। File, network, hardware-এ data পাঠাতে গেলে byte order না জানলে ভুল হবে।

- ✅ **শিখবে:**
  - Little-endian (x86-64, ESP8266 — দুটোই) vs big-endian (network byte order)
  - Multi-byte value-এর কোন byte কোন address-এ থাকে
  - Runtime-এ endianness detect করা
  - কখন গুরুত্বপূর্ণ: binary file · network · hardware register · byte buffer থেকে পড়া
  - কখন গুরুত্বপূর্ণ না: একই machine-এ arithmetic · shift operator (shift value-এর উপর কাজ করে, memory-র উপর না)
  - `htonl` / `ntohl` / `htons` (`<arpa/inet.h>`) — শুধু পরিচয়
- ❌ **এখন শিখবে না:**
  - Network programming → Phase 12 #10 · serialization format → শিখবে না
- 🧪 **Experiment:**
  - `memcpy` দিয়ে endianness detect program
  - `htonl(0x12345678)`-এর bytes print → কী বদলালো?
  - একটা `int` `fwrite` দিয়ে file-এ লিখে `hexdump -C` দেখো (P5.7-এর ছোট্ট preview)
- ⚠️ **সাধারণ ভুল:** "shift operator endianness-এর উপর নির্ভর করে" — না · "string-ও memory-তে উল্টো থাকে" — না, char array byte-by-byte ক্রমেই থাকে
- ❓ **নিজেকে জিজ্ঞেস করো:** `0x12345678`-এর প্রথম byte little-endian-এ কোনটা, big-endian-এ কোনটা?
- 🎯 **শেষ হবে যখন:** endianness explain + detect program + byte-dumper-এ byte order দেখাতে পারবে।

### P1.7 — Signed Integer Representation

> **কেন:** `-1` memory-তে কেমন দেখায়, আর overflow-তে কী হয় — না জানলে অদ্ভুত bug আসে।

- ✅ **শিখবে:**
  - Unsigned: সরাসরি binary · range `0 … 2^N − 1`
  - Signed: **two's complement** (C23-এ বাধ্যতামূলক) · range `−2^(N−1) … 2^(N−1) − 1`
  - Negation = সব bit উল্টাও + 1 · কেন two's complement (একই adder, একটাই zero)
  - `INT_MIN`-এর asymmetry: `-INT_MIN` overflow
  - **Unsigned overflow = wraparound** (defined, modulo 2^N)
  - **Signed overflow = UB** (compiler ধরে নেয় কখনো হবে না)
  - Widening-এ sign extension
  - `char c = 200;` → implementation-defined (GCC-তে −56)
- ❌ **এখন শিখবে না:**
  - Optimizer কীভাবে signed overflow UB কাজে লাগায় → P7.4
- 🧪 **Experiment:**
  - `printf("%u\n", (unsigned)-1);` → 4294967295
  - `INT_MAX + 1` → `-fsanitize=undefined` report পড়ো
  - `UINT_MAX + 1u` → 0
  - −5-এর 8-bit two's complement হাতে বের করো (`11111011`) → byte dump দিয়ে মিলাও
- ⚠️ **সাধারণ ভুল:** "signed overflow wrap করে" (UB!) · `abs(INT_MIN)` (UB) · `for (unsigned i = n; i >= 0; i--)` → infinite loop
- ❓ **নিজেকে জিজ্ঞেস করো:** −1-এ কেন সব bit 1? signed overflow কেন UB, unsigned কেন না?
- 🎯 **শেষ হবে যখন:** 8-bit-এ যেকোনো সংখ্যার two's complement হাতে করতে পারবে + UBSan দিয়ে overflow ধরতে পারবে।

### P1.8 — Integer Promotions, Conversions & Expressions in Depth (expressions অংশ ➕)

> **কেন:** C চুপচাপ type বদলে দেয়। এখানেই সবচেয়ে বেশি "কেন এই output?!" bug আসে।

- ✅ **শিখবে:**
  - **Integer promotions:** expression-এ `char`/`short` → `int` (তাই `uint8_t + uint8_t`-এর type `int`)
  - **Usual arithmetic conversions:** `int + unsigned` → unsigned · `int + long` → long · `int + double` → double
  - Signed/unsigned তুলনার ফাঁদ: `-1 < 0u` → **false** · `if (-1 < sizeof(int))` → false
  - Assignment-এ implicit conversion: truncation · `float → int` শূন্যের দিকে কাটে (`3.99 → 3`)
  - Explicit cast `(type)` — কখন দরকার, কখন bug লুকায়
  - Integer division/modulo negative-এ: `-7 / 2 = -3`, `-7 % 2 = -1` (শূন্যের দিকে কাটে)
  - ➕ **Operators in depth:** precedence & associativity (মূল ফাঁদগুলো) · short-circuit `&&` `||` · ternary `?:` · comma operator · compound assignment · `++`/`--` pre vs post
  - ➕ **Unsequenced side effect = UB:** `i = i++;` · `a[i] = i++;` · `printf("%d %d", i++, i++);` — তোমার `SQUARE(i++)`-এর আসল কারণ
  - Warning flag: `-Wall -Wextra -Wconversion`
- ❌ **এখন শিখবে না:**
  - Float-এর conversion বিস্তারিত → P1.9 · pointer cast → Phase 3 · strict aliasing → P7.4
- 🧪 **Experiment:**
  - `unsigned char a = 200, b = 100; printf("%d\n", a + b);` → 300 কেন?
  - `if (-1 < 0u) puts("yes"); else puts("no");`
  - `size_t len = strlen(""); printf("%zu\n", len - 1);` → বিশাল সংখ্যা!
  - ৫টা "trick expression" লিখে আগে output predict করো, তারপর run
  - `-Wconversion` দিয়ে compile করে প্রতিটা warning পড়ো
- ⚠️ **সাধারণ ভুল:** `char` arithmetic-এ overflow ভাবা (expression-এ promotion হয়; assign-এ truncation হয়) · `strlen(s) - 1` empty string-এ
- ❓ **নিজেকে জিজ্ঞেস করো:** `uint8_t + uint8_t`-এর type কী? `i = i++` কেন UB?
- 🎯 **শেষ হবে যখন:** ৫টা trick expression-এর output আগে থেকে ঠিক predict করতে পারবে।

### P1.9 — Floating-Point Representation (IEEE-754)

> **কেন:** `0.1 + 0.2 != 0.3` — float কেন "প্রায়" ঠিক, কখনো পুরো ঠিক না।

- ✅ **শিখবে:**
  - `float` (binary32): sign 1 + exponent 8 (bias 127) + mantissa 23
  - `double` (binary64): 1 + 11 (bias 1023) + 52
  - Normalized number, special value: ±0, ±inf, NaN, subnormal
  - Precision: float ≈ 7 decimal digit, double ≈ 15–16
  - `0.1` binary-তে exact না → `0.1 + 0.2 != 0.3`
  - Float compare: `==` না — tolerance (epsilon) দিয়ে · `FLT_EPSILON`, `DBL_EPSILON` (`<float.h>`)
  - Print: `%f`, `%e`, `%g`, `%a` (hex float — bits দেখার সেরা উপায়)
  - `int → float` precision হারায় (`16777217` → `16777216`)
  - NaN নিজের সমানও না (`x != x` হলে NaN)
  - **টাকা-পয়সায় float না** — integer (পয়সা/cents) ব্যবহার করো
- ❌ **এখন শিখবে না:**
  - FPU/SIMD-এর ভেতর → Phase 10 (গভীরে না) · numerical analysis → শিখবে না · `long double`-এর বিস্তারিত → শুধু জানো x86-64-এ size 16
  - `-ffast-math` → শুধু জানো এটা IEEE নিয়ম ভাঙে
- 🧪 **Experiment:**
  - `1.0f`, `-2.0f`, `0.1f`-এর bytes dump → sign/exponent/mantissa হাতে decode
  - `printf("%.20f\n", 0.1);` · `printf("%a\n", 0.1);`
  - তোমার `03.c`-এর `float money = 10.45f;` → `printf("%.10f", money)` → আসলে 10.45 না!
  - `float f = 16777217;` print
  - `double z = 0.0; double n = z / z;` → `n != n`?
- ⚠️ **সাধারণ ভুল:** float `==` দিয়ে তুলনা · টাকায় float
- ❓ **নিজেকে জিজ্ঞেস করো:** 0.1 কেন binary-তে exact হয় না? (ইঙ্গিত: 1/10-এর হরে 5 আছে)
- 🎯 **শেষ হবে যখন:** যেকোনো float-এর 32 bit হাতে decode করতে পারবে + `0.1 + 0.2` ব্যাখ্যা করতে পারবে।

### P1.10 — `struct` Layout ও Padding (intro)

> **কেন:** Local variable-এর layout guarantee নেই (P1.3), কিন্তু struct-এর আছে — এই তুলনাটাই তোমার roadmap-এর মূল কথা।

- ✅ **শিখবে:**
  - Struct member **declaration-এর ক্রমেই** থাকে (C guarantee) · প্রথম member offset 0-তে
  - Member-এর মাঝে padding + শেষে trailing padding (array of struct-এ alignment ঠিক রাখতে)
  - Struct-এর alignment = সবচেয়ে বড় member alignment (সাধারণ ABI-তে)
  - `offsetof(type, member)` (`<stddef.h>`)
  - `sizeof(struct)` ≥ member-গুলোর যোগফল
  - Member reorder করে size কমানো — struct-এ এটা নিয়ম মেনে কাজ করে (local variable-এ guarantee নেই)
  - C compiler struct member reorder **করে না**
- ❌ **এখন শিখবে না:**
  - union, enum, bit-field, typedef → Phase 6 · `_Alignas`, packed → P6.3 · struct ABI-তে কীভাবে যায় → P8.6
- 🧪 **Experiment:** MASTER §7 Step 6
  - ৪টা আলাদা member order-এর struct — আগে কাগজে `sizeof` + offsets predict, তারপর run
  - ২ element-এর struct array → address পার্থক্য = `sizeof(struct)`?
- ⚠️ **সাধারণ ভুল:** "compiler struct member সাজিয়ে নেয়" (C-তে না!) · "trailing padding নেই"
- ❓ **নিজেকে জিজ্ঞেস করো:** trailing padding না থাকলে struct array-এ কী সমস্যা হতো?
- 🎯 **শেষ হবে যখন:** যেকোনো struct-এর `sizeof` + offset কাগজে predict করে ১০০% মেলাতে পারবে।

### 🏁 Phase 1 Checkpoint — Byte-dumper

যেকোনো variable-এর bytes hex-এ print করার program (`memcpy` দিয়ে) — `int`, negative `int`, `float`, `double`, struct (padding byte সহ)। Output দেখে চিনিয়ে দাও: endianness (P1.6), two's complement (P1.7), IEEE-754 (P1.9), padding (P1.10)।

---

# Phase 2 — Arrays

> **লক্ষ্য (তোমার roadmap):** array → contiguous objects → address arithmetic → element size → pointer relationship
> **📁** `Module-02_C_Syntax/` বা `Module-04_Pointers/` (তোমার পছন্দ) · **🔙 আগে লাগবে:** Phase 1

### P2.1 — Array Basics

> **কেন:** একই type-এর অনেক data একসাথে রাখার সবচেয়ে সরল উপায় — আর C-তে এর কোনো "safety net" নেই।

- ✅ **শিখবে:**
  - Declaration `int a[5];` · initialization `{1, 2, 3}` (বাকি সব 0) · `{0}` · designated `[3] = 7` (C99)
  - Index `0` থেকে `n − 1` · `sizeof a` = পুরো array-এর byte · element সংখ্যা = `sizeof a / sizeof a[0]`
  - Array assign করা যায় না (`a = b` → error) — copy করতে loop বা `memcpy`
  - **C bounds check করে না** — `a[5]` লেখা/পড়া = **UB**
  - Uninitialized local array = indeterminate value
- ❌ **এখন শিখবে না:**
  - VLA (`int a[n]`) → এড়িয়ে চলবে · dynamic array → P5.3 · string → P2.4
- 🧪 **Experiment:**
  - `int a[5] = {1};` → সব element print
  - `ARRAY_LEN(a)` macro লিখে test
  - `a[5] = 99;` → `-fsanitize=address` দিয়ে চালাও → `stack-buffer-overflow` report পড়ো
- ⚠️ **সাধারণ ভুল:** `a[5]`-কে valid ভাবা (5-element array-এর শেষ index 4) · function-এর ভেতরে `sizeof a` দিয়ে length বের করা (→ P2.6)
- ❓ **নিজেকে জিজ্ঞেস করো:** C কেন bounds check করে না? (speed vs safety — দায়িত্ব কার?)
- 🎯 **শেষ হবে যখন:** `ARRAY_LEN` ঠিকমতো কাজ করবে, আর ASan report দেখে কোন line-এ overflow বলতে পারবে।

### P2.2 — Array = Contiguous Objects

> **কেন:** Local variable-এর layout guarantee নেই, কিন্তু array-এর আছে — element গুলো গায়ে গায়ে লাগানো।

- ✅ **শিখবে:**
  - Element গুলো পরপর থাকে, element-এর **মাঝে কোনো padding নেই**
  - `&a[i]` = base address + `i × sizeof(element)`
  - Element stride = `sizeof(element)` (struct হলে trailing padding সহ)
  - Local variable (guarantee নেই) vs array (contiguous guarantee) — P1.3-এর সাথে তুলনা
- ❌ **এখন শিখবে না:**
  - `a + i` syntax-এর বিস্তারিত → P2.3, P3.3
- 🧪 **Experiment (তোমার roadmap-এর experiment হুবহু):**
  - প্রতিটা element-এর address print
  - `&a[i]` গুলো তুলনা করো
  - পাশাপাশি address-এর পার্থক্য দেখো
  - Element size-এর সাথে পার্থক্য মিলিয়ে pointer arithmetic-এর সাথে সংযোগ করো
  - একই কাজ `char[]`, `double[]` আর struct array দিয়ে
- ⚠️ **সাধারণ ভুল:** "array-এর element-এর মাঝে padding থাকে" — না (struct-এর ভেতরে থাকতে পারে, element-এর মাঝে না)
- ❓ **নিজেকে জিজ্ঞেস করো:** `&a[3] − &a[0]` byte-এ কত, element-এ কত?
- 🎯 **শেষ হবে যখন:** শুধু address-এর পার্থক্য দেখে element type-এর size বলতে পারবে।

### P2.3 — Array ↔ Pointer Relationship (preview)

> **কেন:** C-তে array আর pointer খুব কাছের — কিন্তু এক না। এই পার্থক্যই পরে অনেক bug বাঁচাবে।

- ✅ **শিখবে:**
  - **Array-to-pointer decay:** বেশিরভাগ expression-এ `a` → `&a[0]`
  - Decay হয় না: `sizeof a`, `&a`, string literal দিয়ে initialize
  - `a[i]` ≡ `*(a + i)` (তাই `i[a]`-ও কাজ করে — মজার তথ্য)
  - `a` vs `&a`: একই address, আলাদা type (`int *` vs `int (*)[5]`) → `a + 1` vs `&a + 1`
- ❌ **এখন শিখবে না:**
  - Pointer-এর পুরো theory → Phase 3
- 🧪 **Experiment:**
  - `a`, `&a[0]`, `&a`, `a + 1`, `&a + 1` print → পার্থক্য 4 vs 20 (int[5]-এ)
- ⚠️ **সাধারণ ভুল:** "array = pointer" — না; array একটা object, শুধু expression-এ pointer-এ decay হয়
- ❓ **নিজেকে জিজ্ঞেস করো:** `&a + 1` কেন 20 byte এগোয়?
- 🎯 **শেষ হবে যখন:** `a + 1` আর `&a + 1`-এর পার্থক্য type দিয়ে explain করতে পারবে।

### P2.4 — String = `char` Array ➕

> **কেন:** C-তে string আলাদা type না — শুধু `'\0'`-এ শেষ হওয়া char array। এখান থেকেই সবচেয়ে বিখ্যাত security bug (buffer overflow) আসে।

- ✅ **শিখবে:**
  - String = `char` array + শেষে `'\0'`
  - String literal-এর type `char[N]` (N-এ `'\0'` ধরা) · থাকে read-only memory-তে (`.rodata`) — modify করা = UB
  - `char s[] = "hi";` (copy, বদলানো যায়, size 3) vs `char *p = "hi";` (literal-এর দিকে pointer — বদলানো যাবে না)
  - `strlen` vs `sizeof`
  - `<string.h>` basics: `strlen`, `strcpy`, `strncpy`-এর ফাঁদ, `strcmp`, `strcat`
  - নিরাপদ input: `fgets` · **`gets` কখনো না** (C11-এ বাদ) · `scanf("%s")` বিপজ্জনক
  - 🇧🇩 বাংলা text UTF-8-এ multi-byte: `strlen("আমি")` = 9, 3 না!
- ❌ **এখন শিখবে না:**
  - নিজের string library → Phase 12 #2 · Unicode/UTF-8-এর গভীরে → শিখবে না (শুধু জানো এক অক্ষর = একাধিক byte হতে পারে)
- 🧪 **Experiment:**
  - `"hello"`-এর `sizeof` vs `strlen`
  - `char *p = "hi"; p[0] = 'H';` → segfault কেন?
  - `strlen("আমি")` print + bytes hex-এ dump
  - ছোট buffer-এ `strcpy` করে overflow → ASan report
- ⚠️ **সাধারণ ভুল:** `'\0'`-এর জায়গা না রাখা · `==` দিয়ে string তুলনা (address তুলনা হয়!) · literal modify করা
- ❓ **নিজেকে জিজ্ঞেস করো:** `char s[] = "hi"` আর `char *p = "hi"` — memory-তে কোথায় কী থাকে?
- 🎯 **শেষ হবে যখন:** index loop দিয়ে নিজের `my_strlen` লিখবে + UTF-8 byte count ব্যাখ্যা করতে পারবে।

### P2.5 — Multi-dimensional Array ➕ (তোমার `01_C_Programming/README.md` থেকে)

> **কেন:** Matrix, image, game board — আর পরে Phase 10-এ cache-এর সবচেয়ে বিখ্যাত experiment এটা দিয়েই।

- ✅ **শিখবে:**
  - `int m[3][4]` = ৩টা "৪-int-এর array"-এর array
  - **Row-major** layout — পুরোটা contiguous
  - `&m[i][j]` = base + `(i × 4 + j) × sizeof(int)`
  - `m[i]`-এর type `int[4]`
  - Nested brace দিয়ে initialization
  - Function-এ পাঠাতে column size লাগে: `void f(int m[][4], size_t rows)`
- ❌ **এখন শিখবে না:**
  - Array of pointers (jagged array) → P3.6 · traversal order-এর cache effect → P10.3
- 🧪 **Experiment:**
  - `m[3][4]`-এর সব address print → formula দিয়ে মেলাও
  - `m[0][5]` access — memory contiguous হলেও C-তে এটা UB কেন?
- ⚠️ **সাধারণ ভুল:** column-major ভাবা (Fortran-এর মতো) — C row-major
- ❓ **নিজেকে জিজ্ঞেস করো:** `m[2][1]`-এর address হাতে বের করো (base দেওয়া থাকলে)
- 🎯 **শেষ হবে যখন:** যেকোনো `[i][j]`-এর address formula দিয়ে হাতে বের করতে পারবে।

### P2.6 — Array + Function (decay) ➕

> **কেন:** Array function-এ পাঠালেই size হারিয়ে যায় — এটা না জানলে প্রথম বড় bug এখানেই।

- ✅ **শিখবে:**
  - Function-এ array পাঠালে pointer-এ decay: `void f(int a[])` ≡ `void f(int *a)`
  - Size হারায় → length আলাদা parameter হিসেবে পাঠাও (`size_t n`)
  - Function-এর ভেতরে `sizeof a` = pointer-এর size (8) — GCC warning দেয়
  - Function caller-এর array বদলাতে পারে (কারণ pointer পেয়েছে)
  - Array return করা যায় না — caller-এর buffer ভরো (local array-এর pointer কখনো return না)
- ❌ **এখন শিখবে না:**
  - Pass-by-value-এর সাধারণ নিয়ম → P4.3 · heap থেকে return → P5.4 · `const` → P3.7
- 🧪 **Experiment:**
  - `main`-এ `sizeof a` vs function-এর ভেতরে `sizeof a`
  - Function-এর ভেতরে element বদলাও → `main`-এ print
- ⚠️ **সাধারণ ভুল:** function parameter-এ `sizeof` দিয়ে length · local array-এর address return
- ❓ **নিজেকে জিজ্ঞেস করো:** C কেন পুরো array copy করে পাঠায় না?
- 🎯 **শেষ হবে যখন:** "array + length" pattern দিয়ে `sum(const int *a, size_t n)` লিখতে পারবে।

### 🏁 Phase 2 Checkpoint

Matrix print + transpose (address সহ row-major ব্যাখ্যা) · `my_strlen` · in-place `reverse_string` — সব ASan clean।

---

# Phase 3 — Pointers

> **লক্ষ্য (তোমার roadmap):** address → pointer → dereference → pointer arithmetic
> **তোমার roadmap-এর সতর্কতা:** pointer-কে শুধু "address রাখে" বলে শেখানো যাবে না — pointer type, dereference semantics, arithmetic, NULL, pointer-to-pointer, alignment, lifetime, invalid pointer সব লাগবে।
> **📁** `Module-04_Pointers/` · **🔙 আগে লাগবে:** Phase 2

### P3.1 — Address → Pointer (Pointer Type)

> **কেন:** Pointer শুধু একটা সংখ্যা না — এর **type** বলে দেয় ওই address-এ কী আছে, কত byte, কীভাবে পড়তে হবে।

- ✅ **শিখবে:**
  - Pointer = একটা object যেটা address রাখে **আর** যার type বলে address-এ কী আছে
  - `int *p = &x;` · `&` = address-of · declaration-এর `*` vs dereference-এর `*`
  - Pointer type বলে দেয়: কত byte পড়বে/লিখবে · bits কীভাবে interpret হবে · `+1` করলে কত এগোবে
  - `sizeof(pointer)` = 8 (x86-64) — data pointer সব একই size (সাধারণত)
  - `%p` দিয়ে print, `(void *)` cast সহ
  - Pointer-এরও নিজের address আছে (`&p`)
- ❌ **এখন শিখবে না:**
  - Arithmetic → P3.3 · `void *` → P3.8 · function pointer → P4.7
- 🧪 **Experiment:**
  - `int x = 10; int *p = &x;` → `x`, `&x`, `p`, `*p`, `&p`, `sizeof p` print
  - `*p = 20;` → `x` print
  - `int *p, q;` → `sizeof q` কত? (q pointer না!)
- ⚠️ **সাধারণ ভুল:** `int* p, q;`-এ q-কে pointer ভাবা · "pointer = integer" (MASTER-এর guardrail)
- ❓ **নিজেকে জিজ্ঞেস করো:** pointer-এর type না থাকলে compiler কী কী জানতে পারত না?
- 🎯 **শেষ হবে যখন:** `x` আর `p`-এর memory diagram (address সহ) এঁকে ব্যাখ্যা করতে পারবে।

### P3.2 — Dereference Semantics

> **কেন:** `*p` লিখলে আসলে কী হয় — কত byte, কোন type হিসেবে — এটাই pointer-এর আসল ক্ষমতা আর বিপদ।

- ✅ **শিখবে:**
  - `*p` বামে (লেখা) আর ডানে (পড়া)
  - আলাদা pointer type দিয়ে পড়লে আলাদা byte সংখ্যা ও মানে
  - `unsigned char *` দিয়ে যেকোনো object-এর byte পড়া allowed — P1.4-এর byte dump এবার pointer দিয়ে
  - Strict aliasing-এর সতর্কতা: `int`-কে `float *` দিয়ে পড়া = UB → `memcpy` বা `union` (শুধু পরিচয়)
  - NULL/invalid pointer dereference = UB (→ P3.4)
- ❌ **এখন শিখবে না:**
  - Strict aliasing / effective type-এর পুরো নিয়ম → P7.4
- 🧪 **Experiment:**
  - Byte-dumper pointer দিয়ে আবার লেখো: `const unsigned char *b = (const unsigned char *)&x;`
  - `unsigned char *` দিয়ে int-এর একটা byte বদলাও → int print
- ⚠️ **সাধারণ ভুল:** uninitialized pointer dereference · `*p++` মানে `*(p++)` জানা না থাকা
- ❓ **নিজেকে জিজ্ঞেস করো:** `int *` আর `char *` একই address দেখালে `*p` কেন আলাদা?
- 🎯 **শেষ হবে যখন:** P1.4-এর byte-dumper pointer দিয়ে লিখতে পারবে।

### P3.3 — Pointer Arithmetic (+ Array পুরোটা)

> **কেন:** `p + 1` মানে "পরের byte" না, "পরের element" — এটা বুঝলেই array আর pointer মিলে যায়।

- ✅ **শিখবে:**
  - `p + n` এগোয় `n × sizeof(*p)` byte
  - `p − q` (একই array-তে) → `ptrdiff_t`, element-এর সংখ্যায় (byte-এ না)
  - `<` দিয়ে তুলনা শুধু একই array-র ভেতরে (বা শেষের ঠিক পরে)
  - One-past-the-end pointer valid, কিন্তু dereference করা যাবে না
  - `a[i]` ≡ `*(a + i)` — এবার পুরোটা বুঝবে
  - `*p++` vs `(*p)++`
- ❌ **এখন শিখবে না:**
  - `void *` arithmetic (GNU extension — এড়িয়ে চলো) → P3.8
- 🧪 **Experiment:**
  - একই array index দিয়ে আর pointer দিয়ে traverse
  - `int *` আর `char *`-এ `+1`-এর পার্থক্য print
  - `p − q`-এর result · one-past-end address print
- ⚠️ **সাধারণ ভুল:** array-র বাইরে pointer arithmetic (dereference না করলেও UB) · আলাদা array-র pointer বিয়োগ (UB)
- ❓ **নিজেকে জিজ্ঞেস করো:** `p − q` কেন byte না, element দেয়?
- 🎯 **শেষ হবে যখন:** pointer দিয়ে `my_strlen` লিখবে: `while (*p) p++; return p - s;`

### P3.4 — NULL, Invalid ও Dangling Pointer (Lifetime)

> **কেন:** Pointer-এর সবচেয়ে বিপজ্জনক দিক — আর সবচেয়ে বিভ্রান্তিকর, কারণ UB সবসময় crash করে না।

- ✅ **শিখবে:**
  - `NULL` — dereference-এর আগে check
  - Uninitialized (wild) pointer
  - **Dangling pointer:** যে object-এর lifetime শেষ — local-এর address return · free করা memory (→ P5.5)
  - Out-of-bounds pointer
  - Segfault = OS (MMU) invalid access ধরেছে — কিন্তু UB সবসময় crash করে না!
  - ASan দিয়ে ধরা · gdb দিয়ে crash line খোঁজা (`bt`)
- ❌ **এখন শিখবে না:**
  - Heap bug-এর বিস্তারিত → P5.5 · MMU কীভাবে ধরে → P9.2 · SIGSEGV handle → P9.7
- 🧪 **Experiment:**
  - Function থেকে local-এর address return করে ব্যবহার → `ASAN_OPTIONS=detect_stack_use_after_return=1` দিয়ে চালাও
  - NULL dereference → segfault → `gdb ./a.out` → `run` → `bt`
- ⚠️ **সাধারণ ভুল:** "crash না করলে code ঠিক আছে" — UB!
- ❓ **নিজেকে জিজ্ঞেস করো:** dangling আর wild pointer-এর পার্থক্য কী?
- 🎯 **শেষ হবে যখন:** ৩ ধরনের invalid pointer চিনে ASan/gdb দিয়ে দেখাতে পারবে।

### P3.5 — Pointer ও Alignment 🔌

> **কেন:** P1.2-এর alignment এবার pointer দিয়ে ভাঙা যায় — x86 সহ্য করে, ESP8266 crash করে।

- ✅ **শিখবে:**
  - `T *` dereference করতে address-কে `T`-এর alignment মানতে হবে
  - `char` buffer-কে `int *`-এ cast করে বিজোড় address-এ পড়া = UB
  - x86 সাধারণত চালিয়ে দেয় · 🔌 ESP8266 → `Exception (9) LoadStoreAlignmentCause`
  - নিরাপদ উপায়: `memcpy`
  - `-fsanitize=undefined` misaligned access ধরে
- ❌ **এখন শিখবে না:**
  - `_Alignas`, packed struct → P6.3
- 🧪 **Experiment:**
  - `char buf[8]; int *p = (int *)(buf + 1); *p = 5;` → `-fsanitize=undefined` report
  - একই কাজ `memcpy` দিয়ে
- ⚠️ **সাধারণ ভুল:** "x86-এ চলছে মানে ঠিক আছে"
- ❓ **নিজেকে জিজ্ঞেস করো:** network packet থেকে int পড়তে কেন `memcpy` ভালো?
- 🎯 **শেষ হবে যখন:** misaligned access-এর বিপদ আর `memcpy` সমাধান explain করতে পারবে।

### P3.6 — Pointer-to-Pointer

> **কেন:** Function-এর ভেতর থেকে caller-এর pointer বদলানো, আর `argv` বোঝা — দুটোই এটা ছাড়া অসম্ভব।

- ✅ **শিখবে:**
  - `int **pp = &p;` — pointer-এর address রাখা pointer
  - Function-এ caller-এর pointer বদলানো: `void make(int **out)`
  - Array of pointers (`char *names[]`) vs 2D array — memory-তে পার্থক্য
  - `argc` / `argv` (`char *argv[]` ≡ `char **argv`) — command-line argument
- ❌ **এখন শিখবে না:**
  - Triple pointer — এড়িয়ে চলো · malloc দিয়ে jagged array → Phase 5
- 🧪 **Experiment:**
  - `argc`/`argv` print, প্রতিটার address সহ
  - Caller-এর pointer বদলায় এমন function লেখো
- ⚠️ **সাধারণ ভুল:** `char *argv[]`-কে 2D char array ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** `**pp` লিখলে কয়টা জায়গায় লাফ দেয়?
- 🎯 **শেষ হবে যখন:** `char *argv[]`-এর memory diagram আঁকতে পারবে।

### P3.7 — `const` + Pointer ➕

> **কেন:** তোমার নিজের list-এ ছিল "`const`-এর syntax জানি কিন্তু কেন জানি না" — এখানে উত্তর।

- ✅ **শিখবে:**
  - `const int x` = read-only object (compile-time constant না — `#define` থেকে আলাদা)
  - `const int *p` (pointee বদলানো যাবে না) · `int *const p` (pointer বদলানো যাবে না) · `const int *const p`
  - ডান থেকে বামে পড়ার নিয়ম
  - Function parameter-এ `const char *s` = "আমি বদলাব না" প্রতিশ্রুতি — API design
  - const object-কে cast করে বদলানো = UB
  - `const` vs `#define`: type আছে, scope আছে, debugger-এ দেখা যায়, address আছে
  - মজার তথ্য: C-তে `const int n = 5; int a[n];` → VLA হয়ে যায় (C-তে const int constant expression না)
- ❌ **এখন শিখবে না:**
  - `volatile`, `restrict` → P7.4 · C23 `constexpr` → শিখবে না
- 🧪 **Experiment:**
  - ৪টা const রূপ — প্রতিটায় কী বদলানো যায় না, compile error দিয়ে দেখো
- ⚠️ **সাধারণ ভুল:** `const int *p` আর `int *const p` গুলিয়ে ফেলা
- ❓ **নিজেকে জিজ্ঞেস করো:** `strlen`-এর parameter কেন `const char *`?
- 🎯 **শেষ হবে যখন:** ৪টা const declaration পড়ে মানে বলতে পারবে।

### P3.8 — `void *` ➕

> **কেন:** `malloc`, `memcpy`, `qsort` — সব `void *` দিয়ে চলে। Generic code-এর চাবি।

- ✅ **শিখবে:**
  - Generic object pointer — যেকোনো object pointer-এর সাথে cast ছাড়াই আসা-যাওয়া (C-তে; C++-এ না)
  - `void *` dereference করা যায় না
  - Standard C-তে `void *` arithmetic নেই (GCC 1 byte ধরে — extension, `-Wpointer-arith`)
  - কাজে লাগে: `malloc`, `memcpy`, `memset`, `qsort`
  - ব্যবহারের আগে সঠিক type-এ ফেরত নিতে হয়
- ❌ **এখন শিখবে না:**
  - Function pointer ↔ `void *` (C guarantee করে না) → P4.7-এ শুধু উল্লেখ
- 🧪 **Experiment:**
  - Generic `swap_bytes(void *a, void *b, size_t n)` (`unsigned char *` দিয়ে) → int আর double-এ চালাও
- ⚠️ **সাধারণ ভুল:** `void *`-এ সরাসরি `+1` করা
- ❓ **নিজেকে জিজ্ঞেস করো:** `memcpy` কীভাবে জানে কত byte copy করবে?
- 🎯 **শেষ হবে যখন:** generic swap যেকোনো type-এ কাজ করবে।

### 🏁 Phase 3 Checkpoint

Generic swap + pointer দিয়ে byte-dumper + pointer style-এ `my_strcpy` / `my_strcmp` — সব ASan clean।

---

# Phase 4 — Functions and Stack Frames

> **লক্ষ্য (তোমার roadmap):** function call → arguments → calling convention → registers / stack → stack frame → return value
> **তোমার roadmap বলে:** এটা সরাসরি তোমার এখনকার address/alignment experiment-এর উপর দাঁড়াবে।
> **📁** `Module-02_C_Syntax/` (function) + `Module-03_Memory/` (stack) · **🔙 আগে লাগবে:** Phase 3

### P4.1 — Declaration vs Definition (Prototype)

> **কেন:** Compiler একবারে একটা file দেখে। Prototype ছাড়া সে জানে না function কী নেয়, কী দেয়।

- ✅ **শিখবে:**
  - Declaration (prototype) vs definition
  - Prototype কেন লাগে: compiler type check করে · C99 থেকে implicit declaration নেই (GCC 14-এ error)
  - `void f(void)` vs `void f()` — C23-এর আগে `()` মানে "argument অজানা", C23-এ "কোনো argument না"
  - Prototype-এ parameter-এর নাম optional
  - একটা function-এর definition একবারই (না হলে linker-এর multiple definition — P0.4)
- ❌ **এখন শিখবে না:**
  - K&R style পুরোনো definition → শিখবে না
- 🧪 **Experiment:**
  - Prototype ছাড়া আগে call করো → GCC 14-এর error পড়ো
  - `void f()`-এ বাড়তি argument দিয়ে call → `-std=c17` vs `-std=c23`
- ⚠️ **সাধারণ ভুল:** header-এ definition রাখা
- ❓ **নিজেকে জিজ্ঞেস করো:** `.h`-এ কী যায়, `.c`-এ কী যায়?
- 🎯 **শেষ হবে যখন:** declaration আর definition-এর পার্থক্য উদাহরণ দিয়ে বলতে পারবে।

### P4.2 — Header File, Multi-file Project, `extern`, Makefile ➕

> **কেন:** তোমার নিজের list-এ "header file, multi-file project, build system" প্রায় নতুন ছিল — বড় project এটা ছাড়া হয় না।

- ✅ **শিখবে:**
  - `module.h` (declaration, type, macro) + `module.c` (definition)
  - Include guard: `#ifndef MODULE_H` / `#define MODULE_H` / `#endif` · `#pragma once` (standard না, কিন্তু প্রায় সবাই support করে)
  - `extern int g;` header-এ, আসল definition একটা `.c`-তে
  - `static` function = শুধু ওই file-এর (internal linkage)
  - Separate compilation → linking (P0.4-এর সাথে মিলাও) · `-I` include path
  - Basic Makefile: target, prerequisite, recipe (**TAB** দিয়ে শুরু!), `CC`/`CFLAGS` variable · timestamp দেখে শুধু বদলানো file rebuild
- ❌ **এখন শিখবে না:**
  - CMake, Ninja, auto-dependency (`-MMD`) → P7.9 · library বানানো → P7.6
- 🧪 **Experiment:**
  - ৩-file project (`main.c`, `mathx.h`, `mathx.c`) → হাতে compile → Makefile → একটা file `touch` করে `make` → কোনটা rebuild হলো?
- ⚠️ **সাধারণ ভুল:** header-এ `int g = 0;` (multiple definition) · include guard না দেওয়া · recipe-তে TAB-এর বদলে space
- ❓ **নিজেকে জিজ্ঞেস করো:** `extern` আর `static` (file scope-এ) — একে অপরের উল্টো কীভাবে?
- 🎯 **শেষ হবে যখন:** নিজের ৩-file project + Makefile চলবে।

### P4.3 — Parameter ও Return Value

> **কেন:** C-তে সবকিছু copy হয়ে যায় — এটা না বুঝলে `swap` কেন কাজ করে না বোঝা যায় না।

- ✅ **শিখবে:**
  - C সবসময় **pass-by-value** (copy)
  - "Pass-by-reference" pointer দিয়ে বানানো: `swap(int *a, int *b)`
  - Array decay (P2.6-এর সাথে মিলাও)
  - Struct by value (পুরো copy — খরচ) vs pointer (`const struct T *`)
  - Local-এর pointer return = dangling (P3.4)
  - একাধিক output → pointer parameter দিয়ে
  - `return` vs `exit`
- ❌ **এখন শিখবে না:**
  - Argument কোন register-এ যায় → P8.2
- 🧪 **Experiment:**
  - Value দিয়ে swap (ব্যর্থ) vs pointer দিয়ে swap (সফল)
  - Parameter-এর address vs caller-এর variable-এর address print → parameter-এর নিজের address আছে!
- ⚠️ **সাধারণ ভুল:** function-এর ভেতরে parameter বদলালে caller-এরটাও বদলাবে ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** `swap(a, b)` কেন কাজ করে না — address দিয়ে প্রমাণ করো।
- 🎯 **শেষ হবে যখন:** pass-by-value address দিয়ে প্রমাণ করতে পারবে।

### P4.4 — Scope, Lifetime, Storage Duration, Linkage ➕ (তোমার README-র "Storage Classes")

> **কেন:** "কোথায় দেখা যায়" (scope) আর "কতক্ষণ বাঁচে" (lifetime) — দুটো আলাদা জিনিস। এটা গুলিয়ে ফেলাই dangling pointer-এর মূল কারণ।

- ✅ **শিখবে:**
  - **Scope:** block · file · function prototype (label-এর function scope)
  - **Lifetime:** object কখন থেকে কখন পর্যন্ত থাকে — scope থেকে আলাদা!
  - **Storage duration:** automatic (local) · static (global, `static` local — পুরো program, শূন্য দিয়ে শুরু) · allocated (malloc → Phase 5) · thread (`_Thread_local` → Phase 11)
  - **Linkage:** external (global, function default) · internal (file scope-এ `static`) · none (local)
  - Storage class keyword: `auto` (local-এর default; C23-এ মানে বদলে type inference) · `static` · `extern` · `register` (শুধু hint, পুরোনো; address নেওয়া যায় না) · `_Thread_local`
  - কোথায় থাকে: `.data` (initialized global/static) · `.bss` (শূন্য/uninitialized global/static) · stack (automatic) — P0.5 আর `test.c`-এর সাথে মিলাও
  - Shadowing (ভেতরের নাম বাইরেরটা ঢেকে দেয়)
- ❌ **এখন শিখবে না:**
  - Thread-local-এর বিস্তারিত → Phase 11
- 🧪 **Experiment:**
  - Function-এর ভেতরে `static int counter` → প্রতিবার call-এ বাড়ে?
  - Uninitialized global vs initialized global → `nm`-এ `B` vs `D`
  - File-scope `static` variable → `nm`-এ ছোট হাতের অক্ষর (local symbol)
  - Local, static local, global-এর address → `/proc/self/maps`-এর কোন region?
- ⚠️ **সাধারণ ভুল:** "static local stack-এ থাকে" (না — `.data`/`.bss`) · "uninitialized global = garbage" (না — শূন্য)
- ❓ **নিজেকে জিজ্ঞেস করো:** একটা variable-এর scope শেষ কিন্তু lifetime চলছে — উদাহরণ দাও।
- 🎯 **শেষ হবে যখন:** যেকোনো variable দেখে scope, lifetime, storage, linkage আর কোন section — সব বলতে পারবে।

### P4.5 — Stack Frame Mechanics

> **কেন:** তোমার সব local-variable address experiment-এর "ঘর" এটাই — function call-এ stack-এ কী ঘটে।

- ✅ **শিখবে:**
  - প্রতিটা call → নতুন frame: return address, saved `rbp`, local variable, spill হওয়া argument
  - x86-64-এ stack নিচের দিকে বাড়ে
  - `call` return address push করে, `ret` pop করে
  - `rsp` (stack pointer), `rbp` (frame pointer) — শুধু পরিচয়
  - `-O0`-তে local গুলো `rbp`-এর negative offset-এ
  - Return করলে frame-এর lifetime শেষ → local-এর address return কেন ভুল (P3.4)
  - Stack size limit: `ulimit -s` (সাধারণত 8 MiB)
- ❌ **এখন শিখবে না:**
  - কোন argument কোন register-এ, alignment rule, red zone → Phase 8
- 🧪 **Experiment:**
  - `main → f → g` প্রতিটায় একটা local-এর address print → ক্রমশ কমছে?
  - gdb: `break g` → `bt` → `info frame` → `x/16gx $rsp`
  - `objdump -d` (`-O0`): `push %rbp; mov %rsp,%rbp; sub $N,%rsp` খোঁজো
- ⚠️ **সাধারণ ভুল:** "stack উপরের দিকে বাড়ে" (x86-64-এ না) · "frame শেষ হলেও local থাকে"
- ❓ **নিজেকে জিজ্ঞেস করো:** `ret` instruction কীভাবে জানে কোথায় ফিরতে হবে?
- 🎯 **শেষ হবে যখন:** ৩-level call chain-এর stack ছবি real address দিয়ে আঁকতে পারবে।

### P4.6 — Recursion

> **কেন:** প্রতিটা call-এর আলাদা frame — recursion-এ এটা চোখের সামনে দেখা যায়।

- ✅ **শিখবে:**
  - নিজেকে call করা function · base case
  - প্রতিটা call-এর নিজের frame (local-এর নিজের copy)
  - Factorial, fibonacci (exponential!) · recursion vs iteration
  - বেশি গভীরে গেলে stack overflow
  - `-O2`-তে tail call optimization (C-তে guarantee না)
- ❌ **এখন শিখবে না:**
  - Recursive data structure (tree) → P6.7, Phase 12 #4
- 🧪 **Experiment:**
  - প্রতিটা level-এ depth + local-এর address print → পার্থক্য = frame size!
  - Infinite recursion → segfault (stack overflow) · `ulimit -s` ছোট করে আবার
  - Tail-recursive function `-O0` vs `-O2` → `objdump`-এ `call` vs `jmp`
- ⚠️ **সাধারণ ভুল:** base case ভুলে যাওয়া · "recursion সবসময় ধীর"
- ❓ **নিজেকে জিজ্ঞেস করো:** fibonacci recursion কেন এত ধীর?
- 🎯 **শেষ হবে যখন:** address পার্থক্য দিয়ে একটা function-এর frame size বের করতে পারবে।

### P4.7 — Function Pointer ও Callback 🔌 ➕

> **কেন:** তোমার OS README বলে — interrupt handler, driver callback, system call, scheduler সব জায়গায় function pointer লাগবে।

- ✅ **শিখবে:**
  - Function-এর নাম pointer-এ decay করে
  - Syntax: `int (*op)(int, int);` · readability-র জন্য `typedef int (*binop)(int, int);`
  - Pointer দিয়ে call
  - Callback: `qsort`-এর comparator
  - Function pointer-এর array → dispatch table, state machine (তোমার README-র "State machines")
  - Function pointer ↔ `void *` — C guarantee করে না (এড়িয়ে চলো)
- ❌ **এখন শিখবে না:**
  - `enum` দিয়ে state → P6.5 (এখানে int দিয়ে চালাও) · interrupt vector table → B.5
- 🧪 **Experiment:**
  - Dispatch table দিয়ে calculator (`+ - * /`)
  - `qsort` দিয়ে int ছোট থেকে বড় আর বড় থেকে ছোট
  - Function-এর address print → `/proc/self/maps`-এর `.text` region-এ?
- ⚠️ **সাধারণ ভুল:** `int *f(int)` (pointer return করা function) vs `int (*f)(int)` (function pointer) গুলিয়ে ফেলা
- ❓ **নিজেকে জিজ্ঞেস করো:** OS-এ system call table কেন function pointer-এর array?
- 🎯 **শেষ হবে যখন:** function pointer table দিয়ে ছোট state machine চালাতে পারবে।

### P4.8 — Variadic Function (ছোট lesson) ➕

> **কেন:** `printf` কীভাবে যত খুশি argument নেয় — আর ভুল format দিলে কেন UB।

- ✅ **শিখবে:**
  - `...` আর `<stdarg.h>`: `va_list`, `va_start`, `va_arg`, `va_end`
  - `printf` type জানে শুধু format string থেকে
  - Variadic call-এ default argument promotion: `float → double`, `char/short → int`
  - ভুল format specifier = UB · `-Wformat` warning
- ❌ **এখন শিখবে না:**
  - Variadic argument register-এ কীভাবে যায় (`al`) → P8.6
- 🧪 **Experiment:**
  - `int sum(int count, ...)`
  - `my_printf` subset (`%d %s %c`) — শুধু `putchar` দিয়ে
- ⚠️ **সাধারণ ভুল:** `va_arg(ap, float)` (promotion-এর কারণে `double` হবে)
- ❓ **নিজেকে জিজ্ঞেস করো:** variadic function কীভাবে জানে কয়টা argument এসেছে?
- 🎯 **শেষ হবে যখন:** নিজের mini printf চলবে।

### 🏁 Phase 4 Checkpoint

Multi-file calculator (function-pointer dispatch table, আলাদা module, Makefile) + gdb দিয়ে ৩-level call-এর stack diagram।

---

# Phase 5 — Dynamic Memory

> **লক্ষ্য (তোমার roadmap):** stack vs heap · `malloc`, `calloc`, `realloc`, `free` · ownership · lifetime · controlled experiment দিয়ে: leak, dangling pointer, use-after-free, double-free, buffer overflow · sanitizer ব্যবহার
> **📁** `Module-03_Memory/` · **🔙 আগে লাগবে:** Phase 4

### P5.1 — Stack vs Heap

> **কেন:** কিছু data-র size শুধু run-time-এ জানা যায়, কিছু data function শেষ হওয়ার পরেও বাঁচতে হয় — stack এটা পারে না।

- ✅ **শিখবে:**
  - Heap কেন: size run-time-এ জানা · function-এর পরেও বাঁচবে · বড় data (stack-এর limit ~8 MiB)
  - Stack: automatic, দ্রুত, LIFO, সীমিত
  - Heap: হাতে manage (malloc/free), flexible, তুলনায় ধীর, fragmentation
  - Process map-এ কোথায়: `[heap]` region · বড় allocation `mmap` region-এ
  - Static storage-এর সাথে তুলনা (P4.4)
- ❌ **এখন শিখবে না:**
  - `malloc`-এর ভেতরের কাজ → P9.5, Phase 12 #5
- 🧪 **Experiment:**
  - 16 MiB-এর local array → stack overflow segfault · একই size `malloc` দিয়ে → চলে
  - Local vs malloc vs global-এর address → `/proc/self/maps`-এ মেলাও
- ⚠️ **সাধারণ ভুল:** "heap মানে ধীর, তাই কখনো না" · "stack অসীম"
- ❓ **নিজেকে জিজ্ঞেস করো:** কোন data stack-এ, কোনটা heap-এ রাখবে — নিয়ম কী?
- 🎯 **শেষ হবে যখন:** যেকোনো data-র জন্য stack/heap/static ঠিক করে কারণ বলতে পারবে।

### P5.2 — `malloc` ও `free`

- ✅ **শিখবে:**
  - `void *malloc(size_t n)` — memory uninitialized
  - Fail হলে `NULL` — সবসময় check
  - Idiom: `T *p = malloc(n * sizeof *p);` (C-তে cast লাগে না)
  - `n * size` overflow check
  - `free(p)` ঠিক একবার, শুধু malloc করা pointer-এ · `free(NULL)` কিছু করে না
  - Free-এর পরে `p = NULL` (defensive)
  - Allocation-এর overhead: `malloc_usable_size` (glibc, `<malloc.h>`)
- ❌ **এখন শিখবে না:**
  - `calloc`/`realloc` → P5.3 · ভেতরের কাজ → Phase 12 #5
- 🧪 **Experiment:**
  - User-এর দেওয়া n দিয়ে int array allocate → ব্যবহার → free
  - ছোট আর বড় (> 128 KiB) malloc-এর address → `/proc/self/maps`-এ heap না mmap region? (glibc-র default threshold)
- ⚠️ **সাধারণ ভুল:** `malloc(n)` লেখা যেখানে `malloc(n * sizeof(int))` দরকার · NULL check না করা
- ❓ **নিজেকে জিজ্ঞেস করো:** `free` কীভাবে জানে কত byte ছাড়তে হবে?
- 🎯 **শেষ হবে যখন:** allocate → use → free — ASan + Valgrind clean।

### P5.3 — `calloc` ও `realloc`

- ✅ **শিখবে:**
  - `calloc(n, size)` — শূন্য দিয়ে ভরে + `n × size` overflow নিজে check করে
  - `realloc(p, new)` — block সরে যেতে পারে (পুরোনো pointer invalid!)
  - `realloc` fail হলে `NULL`, কিন্তু পুরোনো block এখনো valid → `tmp = realloc(p, n); if (!tmp) {...} p = tmp;`
  - `realloc(NULL, n)` = `malloc(n)`
  - Growth strategy: capacity দ্বিগুণ → amortized O(1)
- ❌ **এখন শিখবে না:**
  - `realloc(p, 0)` — C23-এ UB, এড়িয়ে চলো
- 🧪 **Experiment:**
  - দ্বিগুণ করে বাড়ানো array · realloc-এর আগে-পরে address print → সরে গেল?
  - `p = realloc(p, n)` কেন leak করতে পারে — ব্যাখ্যা লেখো
- ⚠️ **সাধারণ ভুল:** `p = realloc(p, n)` (fail হলে পুরোনো block হারায়)
- ❓ **নিজেকে জিজ্ঞেস করো:** কেন ১ করে না বাড়িয়ে দ্বিগুণ করে বাড়ায়?
- 🎯 **শেষ হবে যখন:** নিরাপদ grow-able buffer লিখতে পারবে।

### P5.4 — Ownership ও Lifetime

> **কেন:** C-তে garbage collector নেই — "কে free করবে" এটা তোমাকেই ঠিক করতে আর লিখে রাখতে হবে।

- ✅ **শিখবে:**
  - কে allocate করে, কে free করে — document করো ("caller frees")
  - Heap memory return করা function (`char *dup(const char *s)`)
  - Out-parameter
  - Error path-এ cleanup: `goto cleanup` pattern — `goto`-র একমাত্র ভালো ব্যবহার ➕
  - C-তে RAII নেই — শৃঙ্খলা লাগে
  - Ownership শুধু memory না: `FILE *`, file descriptor, lock — সব resource
- ❌ **এখন শিখবে না:**
  - Reference counting / smart pointer → শুধু নাম জানলেই হবে
- 🧪 **Experiment:**
  - `my_strdup` + caller free করে
  - ৩টা allocation আছে এমন function, মাঝখানে error → `goto cleanup` → Valgrind দিয়ে error path-এও leak নেই প্রমাণ
- ⚠️ **সাধারণ ভুল:** error path-এ free ভুলে যাওয়া
- ❓ **নিজেকে জিজ্ঞেস করো:** একটা pointer-এর "owner" কে — কীভাবে বুঝবে?
- 🎯 **শেষ হবে যখন:** প্রতিটা malloc-এর owner বলতে পারবে আর error path-এ leak থাকবে না।

### P5.5 — Memory Bug Lab (তোমার roadmap-এর list)

> **কেন:** এই bug গুলো প্রায়ই চুপচাপ থাকে — crash না করে ভুল result দেয়। Tool দিয়ে ধরতে শেখা জরুরি।

- ✅ **শিখবে (প্রতিটার কারণ, লক্ষণ, ধরার উপায়):**
  - Memory leak
  - Dangling pointer
  - Use-after-free
  - Double-free
  - Buffer overflow (heap)
  - Invalid memory access (uninitialized read সহ)
- ❌ **এখন শিখবে না:**
  - Exploit লেখা (security attack) → শিখবে না
- 🧪 **Experiment:**
  - ৬টা ছোট bug program (প্রতিটায় একটা bug)
  - প্রতিটা `-fsanitize=address -g` দিয়ে, আবার `valgrind --leak-check=full` দিয়ে চালাও → report-এর stack trace পড়ো
  - মনে রাখো: uninitialized read ASan ধরে না → Valgrind (Memcheck) বা clang-এর MSan
- ⚠️ **সাধারণ ভুল:** "ASan সব ধরে" (না) · একই binary ASan + Valgrind একসাথে (কাজ করে না)
- ❓ **নিজেকে জিজ্ঞেস করো:** use-after-free কেন অনেক সময় crash করে না?
- 🎯 **শেষ হবে যখন:** প্রতিটা report পড়ে bug-এর line আর ধরন বলতে পারবে।

### P5.6 — Tools: Sanitizer, Valgrind, GDB Basics

- ✅ **শিখবে:**
  - Debug flags: `-g -O0 -Wall -Wextra -fsanitize=address,undefined`
  - UBSan · LeakSanitizer (ASan-এর সাথে)
  - Valgrind Memcheck (recompile ছাড়া, কিন্তু ধীর)
  - GDB: `break`, `run`, `next`, `step`, `print`, `bt`, `watch` (watchpoint — memory কে বদলাচ্ছে ধরতে), `x` (memory দেখা)
  - Core dump: `ulimit -c unlimited` · `coredumpctl` (systemd-coredump install থাকলে)
- ❌ **এখন শিখবে না:**
  - rr (record-replay), MSan setup → optional
- 🧪 **Experiment:**
  - P5.5-এর program গুলো gdb দিয়ে debug — overwritten variable-এ watchpoint
- ⚠️ **সাধারণ ভুল:** শুধু `printf` দিয়ে debug করা
- ❓ **নিজেকে জিজ্ঞেস করো:** কোন bug-এ ASan, কোনটায় Valgrind, কোনটায় gdb?
- 🎯 **শেষ হবে যখন:** নতুন bug দেখে সঠিক tool বেছে নিতে পারবে।

### P5.7 — File Handling (stdio) ➕ (তোমার README-র Module 10)

> **কেন:** Data program বন্ধ হলেও রাখতে হয়। আর `fopen`/`fclose` ঠিক `malloc`/`free`-এর মতো ownership।

- ✅ **শিখবে:**
  - `FILE *` · `fopen` mode: `"r"`, `"w"`, `"a"`, `"rb"`, `"wb"`, `"+"`
  - NULL check + `perror` / `errno`
  - Text I/O: `fgets`, `fputs`, `fprintf`, `fscanf` (return value check!)
  - Binary I/O: `fread` / `fwrite` — struct লিখলে padding আর endianness সমস্যা (P1.6, P1.10)
  - `fclose` (ownership — না করলে leak)
  - `while (!feof(f))` anti-pattern কেন ভুল
  - Buffering: `fflush`, output দেরিতে আসে কেন · `stdin`/`stdout`/`stderr`
- ❌ **এখন শিখবে না:**
  - File descriptor / system call → P9.4 · `mmap` দিয়ে file → P9.5 · directory → Phase 12 #7
- 🧪 **Experiment:**
  - `fread`/`fwrite` loop দিয়ে file copy → `cmp` দিয়ে মিলাও
  - Struct binary file-এ লিখে `hexdump -C` → padding byte আর little-endian int দেখো
  - Mini `wc` (line আর word গোনা)
- ⚠️ **সাধারণ ভুল:** `fopen`-এর NULL check না করা · `feof` দিয়ে loop
- ❓ **নিজেকে জিজ্ঞেস করো:** struct সরাসরি file-এ লিখে অন্য machine-এ পড়লে কী সমস্যা?
- 🎯 **শেষ হবে যখন:** error handling সহ file copy program চলবে।

### 🏁 Phase 5 Checkpoint — Dynamic Array (= Phase 12-এর Project #1)

`push / get / size / free` + file থেকে সংখ্যা পড়ে এতে রাখা — ASan + Valgrind clean।

---

# Phase 6 — Structs / Unions / Memory Layout

> **লক্ষ্য (তোমার roadmap):** `struct`, `union`, `enum` — বিশেষ করে member order, alignment, padding, `sizeof(struct)`, `offsetof`
> **তোমার roadmap-এর মূল তুলনা:** struct layout vs সাধারণ local-variable layout — struct-এর C guarantee অনেক শক্ত।
> **📁** `Module-05_DataStructures/` · **🔙 আগে লাগবে:** Phase 5

### P6.1 — `struct` Basics

> **কেন:** সম্পর্কিত data একসাথে রাখা — একজন মানুষের age, name, id একটা জিনিস হিসেবে।

- ✅ **শিখবে:**
  - Struct কেন (related data group করা)
  - Define / declare · initialization: positional আর designated (`.x = 10` — তুমি `05.c`-তে ব্যবহার করেছ)
  - Access: `.` · pointer দিয়ে `->` (`p->age` ≡ `(*p).age`)
  - Struct assignment = copy (shallow — pointer member হলে দুজনেই একই জায়গা দেখে!)
  - `==` দিয়ে struct তুলনা করা যায় না
  - Function-এ `const struct T *` পাঠানো (দ্রুত)
  - Nested struct · struct-এর array
- ❌ **এখন শিখবে না:**
  - `typedef` → P6.2 · layout-এর গভীরে → P6.3
- 🧪 **Experiment:**
  - `Person`: name array হিসেবে vs name pointer হিসেবে → দুটোই copy করে একটা বদলাও → shallow copy-র চমক
- ⚠️ **সাধারণ ভুল:** struct copy-কে deep copy ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** কখন struct by value, কখন pointer দিয়ে পাঠাবে?
- 🎯 **শেষ হবে যখন:** by value vs pointer-এর পার্থক্য দেখাতে পারবে।

### P6.2 — `typedef` ➕ (তোমার list-এ "syntax জানি, কেন জানি না")

- ✅ **শিখবে:**
  - Type-এর নতুন নাম (নতুন type না)
  - `typedef struct Person Person;`
  - Function pointer পড়া সহজ করা (P4.7)
  - `size_t`, `uint32_t` — এগুলোও typedef
  - **Opaque type:** header-এ `typedef struct Stack Stack;`, আসল definition `.c`-তে লুকানো → encapsulation
  - কখন typedef **না**: pointer লুকানো (`typedef int *IntPtr;`) বিভ্রান্তি আনে · Linux kernel style struct-এ typedef নিরুৎসাহিত করে
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - Opaque `Stack` module: header দেয় `Stack *stack_new(void)` — user field ছুঁতে পারে না
- ⚠️ **সাধারণ ভুল:** typedef-কে নতুন type ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** opaque type কোন সমস্যা solve করে?
- 🎯 **শেষ হবে যখন:** opaque type দিয়ে ছোট module বানাতে পারবে।

### P6.3 — Struct Memory Layout (গভীরে)

> **কেন:** P1.10-এর intro এবার পুরোটা — আর packed struct-এর বিপদ (ESP8266-এ crash!)।

- ✅ **শিখবে:**
  - P1.10 recap: order guaranteed, padding, trailing padding, `offsetof`
  - Struct alignment = সবচেয়ে বড় member-এর
  - Reorder করে size কমানো · struct array-এর stride
  - `_Alignas` (C11) দিয়ে alignment বাড়ানো (যেমন cache line 64 → P10.4, P11.7)
  - `__attribute__((packed))` (GCC extension) — misaligned access-এর খরচ ও বিপদ (🔌 ESP8266 Exception 9) — শুধু wire format/hardware-এর জন্য
  - Flexible array member: `struct { size_t n; int data[]; }` (C99) — optional
  - Padding byte-এর মান unspecified → `memcmp` দিয়ে struct তুলনা অবিশ্বস্ত · deterministic output-এর জন্য `fwrite`-এর আগে `memset` 0
- ❌ **এখন শিখবে না:**
  - Struct ABI-তে কীভাবে যায় → P8.6
- 🧪 **Experiment:**
  - Packed vs normal `sizeof`
  - দুটো "সমান" struct `memcmp` → padding-এ garbage থাকলে আলাদা!
  - Flexible array member দিয়ে allocate
- ⚠️ **সাধারণ ভুল:** packed সব জায়গায় ব্যবহার করা · struct `memcmp` দিয়ে তুলনা
- ❓ **নিজেকে জিজ্ঞেস করো:** কোন situation-এ packed ঠিক, কোনটায় বিপদ?
- 🎯 **শেষ হবে যখন:** padding কমানো proof `offsetof` দিয়ে দেখাতে পারবে।

### P6.4 — `union`

> **কেন:** একই memory, একাধিক ব্যাখ্যা — memory বাঁচানো, protocol parse, hardware register।

- ✅ **শিখবে:**
  - সব member একই storage share করে · `sizeof` = সবচেয়ে বড় member (+ alignment padding)
  - এক member-এ লিখে অন্য member পড়া = type punning — **C-তে allowed** (C++-এ UB)
  - Tagged union: `struct { enum type tag; union { ... } v; }` — variant type
  - ব্যবহার: memory বাঁচানো · protocol parsing · hardware register overlay · float-এর bits দেখা
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - `union { float f; uint32_t u; }` → float-এর bits print (P1.9-এর সাথে মিলাও)
  - Tagged union `Value` (int / double / string) + print function
- ⚠️ **সাধারণ ভুল:** tag না রেখে union ব্যবহার → কোন member valid জানা যায় না
- ❓ **নিজেকে জিজ্ঞেস করো:** union আর struct-এর memory পার্থক্য আঁকো।
- 🎯 **শেষ হবে যখন:** tagged union দিয়ে variant print function চলবে।

### P6.5 — `enum` (+ State Machine) 🔌 ➕ (state machine তোমার README থেকে)

> **কেন:** তোমার list-এ ছিল "`enum`-এর use-case জানি না" — named constant আর state machine-এর মূল।

- ✅ **শিখবে:**
  - Named integer constant · 0 থেকে শুরু, explicit value দেওয়া যায়
  - Constant-এর type `int` (C23-এর আগে)
  - `enum` vs `#define`: debugger-এ নাম দেখা যায় · `switch`-এ missing case-এ `-Wswitch` warning দেয়
  - Underlying type implementation-defined · C23-এ fixed type: `enum E : uint8_t` (শুধু জানো)
  - **State machine:** `enum state { IDLE, RUNNING, STOPPED };` + `switch` · অথবা function pointer table (P4.7)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - Traffic light state machine
  - একটা case বাদ দিয়ে `-Wall` → warning
  - `sizeof(enum ...)` print
- ⚠️ **সাধারণ ভুল:** enum-কে scoped ভাবা (C-তে সব constant একই namespace-এ)
- ❓ **নিজেকে জিজ্ঞেস করো:** `#define RED 0`-এর বদলে enum কেন ভালো?
- 🎯 **শেষ হবে যখন:** enum দিয়ে state machine চলবে (ESP8266 LED logic-এর প্রস্তুতি)।

### P6.6 — Bit-field 🔌 ➕

- ✅ **শিখবে:**
  - `struct { unsigned ready : 1; unsigned mode : 3; }`
  - Bit-এ pack করা
  - Layout (order, boundary পার হওয়া) implementation-defined → portable না
  - Bit-field-এর address নেওয়া যায় না
  - Plain `int` bit-field-এর signedness implementation-defined → সবসময় `unsigned`
  - Hardware register-এ portability-র জন্য অনেক সময় mask + shift (P1.5) ভালো
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - Bit-field struct-এর `sizeof`
  - Field set করে bytes dump (P1.4) → GCC x86-64-এ bit কোথায় বসলো?
- ⚠️ **সাধারণ ভুল:** অন্য compiler-এ একই layout ধরে নেওয়া
- ❓ **নিজেকে জিজ্ঞেস করো:** bit-field আর mask — কখন কোনটা?
- 🎯 **শেষ হবে যখন:** একই register flags bit-field আর mask দুইভাবে লিখে tradeoff বলতে পারবে।

### P6.7 — Self-referential Struct: Linked List, Stack, Queue 🔌 ➕ (`Module-05_DataStructures`)

- ✅ **শিখবে:**
  - `struct Node { int val; struct Node *next; };`
  - Singly linked list: push front/back, find, delete, free all
  - Stack (array-based আর list-based)
  - Queue — circular buffer (🔌 UART buffer-এ এটাই লাগে)
  - Node-এর ownership · ASan/Valgrind clean
- ❌ **এখন শিখবে না:**
  - Tree, hash table → Phase 12 #3–#4 · `void *` দিয়ে generic container → optional
- 🧪 **Experiment:**
  - List + queue বানাও, `assert` দিয়ে test লেখো
- ⚠️ **সাধারণ ভুল:** delete-এর পরে `next` হারানো · শেষে সব node free না করা
- ❓ **নিজেকে জিজ্ঞেস করো:** circular buffer full আর empty কীভাবে আলাদা করবে?
- 🎯 **শেষ হবে যখন:** list/queue module (`.h` + `.c` + test) leak-free।

### 🏁 Phase 6 Checkpoint

`offsetof` দিয়ে struct reorder-এর proof + list/stack/queue module। (এর পরে Phase 12-এর #3 hash table আর #4 tree শুরু করা যায়।)

---

# Phase 7 — Compiler Internals

> **লক্ষ্য (তোমার roadmap):** `.c → .i → .s → .o → executable` — preprocessing, compilation, assembly, object file, symbol table, relocation, linker, loader
> **তোমার roadmap-এর নিয়ম:** assembly আনবে শুধু যখন সেটা কোনো observed behavior explain করে।
> Phase 0-এ basics হয়েছে — এখানে **গভীরে**। তোমার README-র compiler internals (lexer → code generation) আর "Advanced Topics" (UB, optimization, debugging) এখানে।
> **📁** `Module-01_Compiler-Pipeline/` (গভীরে) + `05_Assembly/` · **🔙 আগে লাগবে:** Phase 6

### P7.1 — Preprocessor in Depth

- ✅ **শিখবে:**
  - P0.1 recap · object-like vs function-like macro
  - ফাঁদ: multiple evaluation (`SQUARE(i++)`) · parentheses না দেওয়া · semicolon-এর সমস্যা → `do { ... } while (0)`
  - `#` (stringize) · `##` (token paste) · variadic macro `__VA_ARGS__`
  - Conditional compilation: `#if` / `#ifdef` / `#elif` / `#else` / `#endif`, `defined()`
  - Include guard vs `#pragma once`
  - Predefined: `__FILE__`, `__LINE__`, `__DATE__`, `__STDC_VERSION__` (আর `__func__` — এটা macro না, identifier)
  - `#error` · `-D` flag
  - X-macro (enum + string table একসাথে) ➕ · `_Generic` (C11) পরিচয়
- ❌ **এখন শিখবে না:**
  - Preprocessor metaprogramming trick → শিখবে না
- 🧪 **Experiment:**
  - `LOG(fmt, ...)` macro, `__FILE__` / `__LINE__` সহ
  - X-macro দিয়ে enum → string
  - `gcc -dM -E - < /dev/null | grep x86` → predefined macro list
- ⚠️ **সাধারণ ভুল:** macro-তে side effect সহ argument পাঠানো
- ❓ **নিজেকে জিজ্ঞেস করো:** `do { } while (0)` কোন সমস্যা solve করে?
- 🎯 **শেষ হবে যখন:** debug `LOG` macro + X-macro চলবে।

### P7.2 — Compiler Front-end: Lexer, Token, Parser, AST, Semantic Analysis ➕ (তোমার README-র Phase 3)

- ✅ **শিখবে:**
  - Lexing: character → token
  - Parsing: token → AST (grammar অনুযায়ী)
  - Semantic analysis: type, scope, implicit conversion, error/warning
  - কোন error কোন stage-এর: lexical vs syntax vs type error
  - Tool: `clang -Xclang -ast-dump -fsyntax-only file.c` · `gcc -fdump-tree-original`
- ❌ **এখন শিখবে না:**
  - পুরো compiler লেখা → শিখবে না (optional: ছোট expression parser)
- 🧪 **Experiment:**
  - ছোট function-এর AST dump (clang)
  - ইচ্ছা করে lexical / syntax / semantic error বানিয়ে stage চেনো
  - (Optional) `+ − × ÷ ( )` calculator: tokenizer + recursive-descent parser
- ⚠️ **সাধারণ ভুল:** "compiler সরাসরি C থেকে machine code বানায়"
- ❓ **নিজেকে জিজ্ঞেস করো:** `int x = "hi";` কোন stage-এ ধরা পড়ে?
- 🎯 **শেষ হবে যখন:** ছোট program-এর AST পড়ে ব্যাখ্যা করতে পারবে।

### P7.3 — IR, Optimization ও Code Generation ➕ (তোমার README-র Phase 3)

- ✅ **শিখবে:**
  - IR কী (GCC: GIMPLE/RTL · LLVM IR) · SSA-র ধারণা
  - Optimization pass: constant folding/propagation · dead code elimination · inlining · loop optimization (unrolling, vectorization — নাম) · tail call
  - `-O0 / -O1 / -O2 / -O3 / -Os / -Og`-এর মানে
  - Code generation: instruction selection · register allocation (তাই `-O2`-তে local stack থেকে "উধাও"!) · instruction scheduling
  - Compiler Explorer (godbolt.org) দিয়ে তুলনা
- ❌ **এখন শিখবে না:**
  - নিজে optimization pass লেখা → শিখবে না
- 🧪 **Experiment:**
  - `gcc -O2 -fdump-tree-optimized` · `clang -S -emit-llvm`
  - একই function `-O0` vs `-O2` assembly
  - Loop sum — clang `-O2` প্রায়ই formula বানিয়ে দেয়!
- ⚠️ **সাধারণ ভুল:** "`-O3` সবসময় দ্রুত"
- ❓ **নিজেকে জিজ্ঞেস করো:** `-O2`-তে debugger-এ variable "optimized out" কেন?
- 🎯 **শেষ হবে যখন:** `-O0` vs `-O2` assembly-র ৩টা পার্থক্য নাম দিয়ে ব্যাখ্যা করতে পারবে (inlining, register allocation, DCE)।

### P7.4 — UB, Optimization ও Qualifier (`volatile`, `restrict`, strict aliasing) 🔌 ➕

> **কেন:** Compiler ধরে নেয় UB কখনো হবে না — তাই UB থাকলে অবাক করা optimization হয়। আর `volatile` ছাড়া hardware register-এর code কাজ করবে না।

- ✅ **শিখবে:**
  - UB তালিকা: signed overflow · OOB · null deref · uninitialized read · unsequenced modification · strict aliasing ভাঙা · misaligned access · data race (C11)
  - Compiler UB-কে কীভাবে কাজে লাগায়: `x + 1 > x` → সবসময় true · dereference-এর পরের null check মুছে ফেলা
  - Unspecified vs implementation-defined vs undefined (তোমার vocabulary-র category 11!)
  - Strict aliasing ও effective type: শুধু compatible type বা `char` type দিয়ে access · `-fno-strict-aliasing`
  - `volatile`: প্রতিটা access সত্যিই হবে — 🔌 MMIO, signal handler-এর `volatile sig_atomic_t` · **thread sync-এর জন্য না**
  - `restrict`: "alias নেই" প্রতিশ্রুতি → ভালো vectorization (`memcpy` vs `memmove`)
  - `-fsanitize=undefined`
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - `int f(int x) { return x + 1 > x; }` → `-O2` assembly → শুধু `return 1`!
  - float/int strict aliasing উদাহরণ: `-O2` vs `-O2 -fno-strict-aliasing`
  - Non-volatile flag-এর loop → `-O2`-তে infinite loop · `volatile` দিলে ঠিক
  - `restrict` সহ / ছাড়া assembly পার্থক্য
- ⚠️ **সাধারণ ভুল:** `volatile`-কে atomic ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** hardware register pointer কেন `volatile` হতে হবে?
- 🎯 **শেষ হবে যখন:** ৫টা UB উদাহরণ চিনে explain করতে পারবে।

### P7.5 — Object File গভীরে: ELF Section, Symbol, Relocation

- ✅ **শিখবে:**
  - ELF header (`readelf -h`) · section header (`readelf -S`): `.text .rodata .data .bss .symtab .strtab .rela.text .comment .note`
  - Symbol table (`readelf -s`): binding LOCAL / GLOBAL / WEAK · type FUNC / OBJECT · visibility
  - `nm`-এর অক্ষর: `T t D d B b R r U W`
  - Relocation entry (`readelf -r`): `R_X86_64_PC32`, `PLT32`, `GOTPCREL`
  - COMMON symbol (`-fcommon` vs `-fno-common` — GCC 10 থেকে default `-fno-common`)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - Initialized/uninitialized/static/const global + function আছে এমন file → প্রতিটা `readelf -s`/`nm` দিয়ে section-এ মেলাও
  - `objdump -dr` দিয়ে relocation site
  - Weak symbol override (`__attribute__((weak))`)
- ⚠️ **সাধারণ ভুল:** section আর segment গুলিয়ে ফেলা (→ P7.7)
- ❓ **নিজেকে জিজ্ঞেস করো:** `const` global কোন section-এ যায়?
- 🎯 **শেষ হবে যখন:** যেকোনো symbol-এর section + binding বলতে পারবে।

### P7.6 — Linking গভীরে: Static/Shared Library, PLT/GOT

- ✅ **শিখবে:**
  - Static library = `ar` archive — শুধু দরকারি `.o` টানে → link order গুরুত্বপূর্ণ!
  - Shared library: `-fPIC -shared`, soname, `-L` / `-l`
  - Runtime search: rpath, `LD_LIBRARY_PATH`, `ldconfig` cache
  - Dynamic linking: PLT/GOT · lazy binding (`LD_BIND_NOW`) · `ldd` · `ltrace` (library call)
  - Symbol interposition: `LD_PRELOAD` (যেমন নিজের `malloc` বসানো!)
  - `-static`-এর লাভ-ক্ষতি
- ❌ **এখন শিখবে না:**
  - `dlopen` plugin system → optional
- 🧪 **Experiment:**
  - একই code থেকে `libmath.a` আর `libmath.so` → দুইভাবে link → `ldd`, size তুলনা
  - `LD_PRELOAD` দিয়ে নকল `puts` ➕ (মজার)
  - `ltrace ./app`
  - `objdump -d`-এ `puts@plt` stub → তোমার P0.2-এর পুরোনো `call puts@PLT`-এর এবার পুরো ব্যাখ্যা!
- ⚠️ **সাধারণ ভুল:** `-lmath`-কে source file-এর আগে দেওয়া
- ❓ **নিজেকে জিজ্ঞেস করো:** PLT না থাকলে প্রতিটা library function-এর address কীভাবে জানা যেত?
- 🎯 **শেষ হবে যখন:** নিজের library দিয়ে static vs shared দেখিয়ে PLT ব্যাখ্যা করতে পারবে।

### P7.7 — Loader গভীরে: Program Header, Dynamic Loader, `_start → main` 🔌

- ✅ **শিখবে:**
  - Program header / segment (`readelf -l`): LOAD (R, RX, RW), INTERP, DYNAMIC, GNU_STACK, GNU_RELRO
  - Section vs segment
  - PIE vs non-PIE (`-no-pie`) · ASLR
  - `execve` → kernel segment map করে → `ld-linux` library map ও relocation → `_start` (`crt1.o`) → `__libc_start_main` → constructor → `main` → `exit` → `atexit` handler / destructor
  - শুরুর stack-এ `argc` / `argv` / `envp` / auxv (`LD_SHOW_AUXV=1`)
  - 🔌 Linker script পরিচয়: `ld --verbose` → default script (→ B.2-এ নিজে লিখবে)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - gdb: `break _start` → `main` পর্যন্ত step
  - `__attribute__((constructor))` → `main`-এর আগে চলে
  - `LD_SHOW_AUXV=1 /bin/true`
  - `-no-pie` vs PIE-তে address তুলনা
- ⚠️ **সাধারণ ভুল:** "`main` = program-এর শুরু"
- ❓ **নিজেকে জিজ্ঞেস করো:** `main` return করলে তারপর কী হয়?
- 🎯 **শেষ হবে যখন:** `main`-এর আগে আর পরে কী কী হয় ধারাবাহিকভাবে বলতে পারবে।

### P7.8 — Debug Info, GDB গভীরে, Warning, GCC vs Clang ➕

- ✅ **শিখবে:**
  - `-g` → DWARF (`readelf --debug-dump=info`, অল্প) · `-g` + `-O2`-এর সমস্যা ("optimized out")
  - GDB গভীরে: conditional breakpoint · watchpoint · `info registers` · `disassemble` · TUI (`layout asm`, `layout split`) · core dump
  - Warning-ই শিক্ষক: `-Wall -Wextra -Wpedantic -Wshadow -Wconversion` (+ চাইলে `-Werror`)
  - `-std=c11 / c17 / c23`
  - GCC vs Clang: diagnostic, extension, sanitizer (MSan শুধু clang) · static analysis: `clang-tidy`, `scan-build` ➕
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - একই buggy program gcc আর clang-এ → warning তুলনা
  - gdb TUI-তে assembly ধরে step
- ⚠️ **সাধারণ ভুল:** warning উপেক্ষা করা
- ❓ **নিজেকে জিজ্ঞেস করো:** কোন warning তোমার আগের কোন bug ধরতে পারত?
- 🎯 **শেষ হবে যখন:** নতুন project-এর জন্য নিজের standard flag set ঠিক করবে।

### P7.9 — Build System: Make গভীরে, CMake, Ninja ➕

- ✅ **শিখবে:**
  - Make: pattern rule (`%.o: %.c`) · automatic variable (`$@ $< $^`) · `.PHONY` · auto-dependency (`-MMD -MP`) · parallel build (`-j`)
  - Incremental build-এর ধারণা
  - CMake basics: `project`, `add_executable`, `add_library`, `target_link_libraries` · `cmake -B build`
  - Ninja generator (`cmake -G Ninja`) · `compile_commands.json` (tool-এর জন্য)
- ❌ **এখন শিখবে না:**
  - Autotools, Bazel → শিখবে না
- 🧪 **Experiment:**
  - Phase 6-এর list module project → auto-deps সহ Makefile → তারপর CMake + Ninja
- ⚠️ **সাধারণ ভুল:** header বদলালে rebuild না হওয়া (auto-deps না থাকায়)
- ❓ **নিজেকে জিজ্ঞেস করো:** Make কীভাবে জানে কোনটা rebuild করতে হবে?
- 🎯 **শেষ হবে যখন:** header বদলালে ঠিক file গুলোই rebuild হয় — দেখাতে পারবে।

### 🏁 Phase 7 Checkpoint

নিজের module-এর static + shared library — `nm` / `readelf` / `ldd` / `ltrace` দিয়ে ব্যাখ্যা + একটা UB demo report।

---

# Phase 8 — ABI / Calling Convention

> **লক্ষ্য (তোমার roadmap):** একটা concrete platform দিয়ে শুরু — **x86-64 Linux, System V AMD64 ABI** — argument register, return register, stack alignment, caller-saved, callee-saved, stack frame, prologue/epilogue, frame pointer, red zone
> **এখানে তোমার Phase 1-এর address রহস্য (৩ byte gap, local layout) পুরো খুলবে।**
> **📁** `05_Assembly/` · **🔙 আগে লাগবে:** Phase 7

### P8.1 — x86-64 Assembly পড়া (ন্যূনতম)

- ✅ **শিখবে:**
  - AT&T vs Intel syntax (`objdump -M intel`)
  - General purpose register: `rax rbx rcx rdx rsi rdi rbp rsp r8–r15` আর এদের ছোট অংশ (`eax`, `ax`, `al`)
  - Instruction: `mov`, `lea`, `add`/`sub`/`imul`, `cmp`/`test`, `jmp`/`jcc`, `call`/`ret`, `push`/`pop`
  - Memory operand: `disp(base, index, scale)`
  - Flag (ZF, SF, CF, OF) — অল্প
  - RIP-relative addressing (PIE-তে)
- ❌ **এখন শিখবে না:**
  - বড় assembly program লেখা · SIMD · instruction encoding
- 🧪 **Experiment:**
  - ছোট function (add, max, loop sum, array index) → `-O0` আর `-O1`-এ compile → প্রতিটা লাইনে মন্তব্য লেখো
- ⚠️ **সাধারণ ভুল:** AT&T-তে operand-এর ক্রম উল্টো (`mov src, dst`) ভুলে যাওয়া
- ❓ **নিজেকে জিজ্ঞেস করো:** `lea` আর `mov`-এর পার্থক্য কী?
- 🎯 **শেষ হবে যখন:** ছোট function-এর assembly লাইন ধরে explain করতে পারবে।

### P8.2 — Argument ও Return Register

- ✅ **শিখবে:**
  - Integer/pointer argument: `rdi, rsi, rdx, rcx, r8, r9` · ৭ নম্বর থেকে stack-এ
  - Float/double argument: `xmm0–xmm7`
  - Return: `rax` (128-bit হলে `rdx:rax`) · float/double → `xmm0`
- ❌ **এখন শিখবে না:**
  - Windows x64 ABI · ARM/Xtensa ABI (ESP8266 → Track B-তে প্রয়োজনমতো)
- 🧪 **Experiment:**
  - ৮টা int + ২টা double argument-এর function → `-O0`/`-O1` assembly → register আর stack কোথায়?
- ⚠️ **সাধারণ ভুল:** "সব argument stack-এ যায়" (32-bit x86-এর পুরোনো ধারণা)
- ❓ **নিজেকে জিজ্ঞেস করো:** ৩ নম্বর int argument কোন register-এ?
- 🎯 **শেষ হবে যখন:** যেকোনো function-এর argument কোথায় বলতে পারবে।

### P8.3 — Caller-saved vs Callee-saved

- ✅ **শিখবে:**
  - Callee-saved: `rbx, rbp, r12–r15` (আর `rsp`)
  - Caller-saved: `rax, rcx, rdx, rsi, rdi, r8–r11`, সব `xmm`
  - কেন এই ভাগ · prologue-এ `push rbx` দেখা
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - অনেক variable ব্যবহার করে এমন function `-O2` → `push %rbx` / `push %r12` খোঁজো
- ⚠️ **সাধারণ ভুল:** call-এর পরে `rax`-এর পুরোনো মান থাকবে ধরে নেওয়া
- ❓ **নিজেকে জিজ্ঞেস করো:** function call-এর পরে কোন register নিরাপদ থাকে?
- 🎯 **শেষ হবে যখন:** caller/callee-saved ভাগ আর তার কারণ ব্যাখ্যা করতে পারবে।

### P8.4 — Stack Frame, Prologue/Epilogue, Frame Pointer

- ✅ **শিখবে:**
  - Prologue: `push rbp; mov rbp, rsp; sub rsp, N`
  - Epilogue: `leave; ret`
  - Frame pointer chain → backtrace কীভাবে কাজ করে
  - `-fomit-frame-pointer` (x86-64-এ `-O1`+ থেকে default) vs `-fno-omit-frame-pointer` — তোমার আগের experiment-এর flag এবার পুরো বোঝা যাবে
  - Return address কোথায় থাকে
  - Stack canary ➕: `-fstack-protector-strong`, `%fs:0x28` থেকে load, `__stack_chk_fail` — array থাকলে যে বাড়তি code দেখো তার ব্যাখ্যা
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - একই function frame pointer সহ / ছাড়া
  - Local char array আছে এমন function-এ canary load খোঁজো
- ⚠️ **সাধারণ ভুল:** "`rbp` সবসময় frame pointer" (optimization-এ সাধারণ register হতে পারে)
- ❓ **নিজেকে জিজ্ঞেস করো:** canary কোন attack আটকায়?
- 🎯 **শেষ হবে যখন:** prologue/epilogue-এর প্রতিটা instruction-এর কাজ বলতে পারবে।

### P8.5 — Stack Alignment ও Red Zone (Phase 1-এর রহস্য সমাধান)

- ✅ **শিখবে:**
  - `call`-এর সময় `rsp` 16-byte aligned → function-এ ঢোকার মুহূর্তে `rsp ≡ 8 (mod 16)`
  - কেন: SSE instruction (`movaps`) aligned memory চায়
  - **Red zone:** leaf function `rsp`-এর নিচের 128 byte `rsp` না নামিয়েই ব্যবহার করতে পারে (Linux user space) · kernel-এ `-mno-red-zone` — 🔌 OS বানাতে গেলে জরুরি!
  - Local variable কোথায় বসলো — এবার পুরো ব্যাখ্যা → P1.3-এর experiment আবার দেখো
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - Local আছে এমন leaf function `-O0` → `sub rsp` নেই (red zone!) · non-leaf → আছে
  - তোমার `02.c` আবার `objdump` করে প্রতিটা offset-এর কারণ লেখো
- ⚠️ **সাধারণ ভুল:** "local variable সবসময় `sub rsp`-এর ভেতরে"
- ❓ **নিজেকে জিজ্ঞেস করো:** তোমার ৩ byte gap-এর চূড়ান্ত ব্যাখ্যা কী?
- 🎯 **শেষ হবে যখন:** Phase 1-এর address layout পুরো ব্যাখ্যা করে MASTER-এর Parking Lot থেকে প্রশ্নটা কাটতে পারবে।

### P8.6 — Struct Passing ও Variadic ABI (ছোট lesson) ➕

- ✅ **শিখবে:**
  - ছোট struct (≤ 16 byte) register-এ যায় — classification (INTEGER / SSE)
  - বড় struct memory দিয়ে (copy)
  - 16 byte-এর বড় struct return → hidden pointer (`rdi`-তে)
  - Variadic call: `al` = কয়টা vector register ব্যবহার হলো
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - ২-int struct vs ৫-int struct pass → assembly তুলনা
  - `printf("%f", x)` call-এর আগে `mov $1, %eax` খোঁজো
- ⚠️ **সাধারণ ভুল:** বড় struct by value পাঠানো খরচহীন ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** বড় struct কেন pointer দিয়ে পাঠানো ভালো — ABI দিয়ে প্রমাণ।
- 🎯 **শেষ হবে যখন:** struct pass/return-এর assembly দেখে নিয়ম মেলাতে পারবে।

### P8.7 — C ↔ Assembly ➕

- ✅ **শিখবে:**
  - `.s` file-এ function লেখা (global symbol, ABI মেনে) → C থেকে call
  - Assembly থেকে C function call
  - Inline asm basics (GCC extended asm: output, input, clobber) — যেমন `rdtsc`, `cpuid`
  - কখন দরকার: startup code, বিশেষ instruction — 🔌 bare-metal (B.2), context switch (B.8)
- ❌ **এখন শিখবে না:**
  - পুরো program assembly-তে লেখা
- 🧪 **Experiment:**
  - `long add_asm(long a, long b)` assembly-তে → C থেকে call
  - Inline `rdtsc` দিয়ে cycle গোনা (P10.6-এর সাথে কাজে লাগবে)
- ⚠️ **সাধারণ ভুল:** callee-saved register নষ্ট করে ফেলা
- ❓ **নিজেকে জিজ্ঞেস করো:** তোমার asm function কোন নিয়ম ভাঙলে C code crash করবে?
- 🎯 **শেষ হবে যখন:** asm function C থেকে call করে সঠিক result পাবে।

### 🏁 Phase 8 Checkpoint

৭-argument + local array আছে এমন function-এর assembly পুরো annotate · asm function C থেকে call · ৩ byte gap-এর চূড়ান্ত ব্যাখ্যা লেখা।

---

# Phase 9 — Virtual Memory / OS

> **লক্ষ্য (তোমার roadmap):** virtual address → page → page table → physical memory · process address space: text/code, read-only data, data, BSS, heap, stack, shared library, `mmap`, system call
> **তোমার `Thought.md` আর `Story.md` ("Memory City")-এর প্রশ্নের উত্তর এখানে।**
> **📁** `03_Operating_System/` + `02_Linux/` + `Module-06_SystemProgramming/` · **🔙 আগে লাগবে:** Phase 8

### P9.1 — Process ও Address Space

- ✅ **শিখবে:**
  - Program vs process · process = address space + thread + resource (fd ইত্যাদি)
  - `/proc/<pid>/` — `maps`, `status`, `fd`
  - Region: text, rodata, data, bss, heap, mmap area (shared lib), stack, vdso/vvar
  - ASLR কোনগুলো randomize করে
  - `pmap`
- ❌ **এখন শিখবে না:**
  - Page table → P9.2
- 🧪 **Experiment:**
  - তোমার `test.c` চালাও → `/proc/<pid>/maps` → প্রতিটা printed address-এ label দাও
  - `cat /proc/self/maps` দুইবার → ASLR
- ⚠️ **সাধারণ ভুল:** "দুটো process-এর একই address মানে একই memory"
- ❓ **নিজেকে জিজ্ঞেস করো:** দুটো process একই virtual address ব্যবহার করলে সংঘর্ষ হয় না কেন?
- 🎯 **শেষ হবে যখন:** যেকোনো address দেখে region বলতে পারবে।

### P9.2 — Virtual Memory: Page, Page Table, MMU, TLB, Page Fault

- ✅ **শিখবে:**
  - Virtual memory কেন: isolation · contiguous-এর মায়া · overcommit · sharing
  - Page (4 KiB) · virtual page → physical frame — page table দিয়ে (x86-64-এ 4-level, 48-bit)
  - MMU translate করে · TLB translation cache করে
  - Page fault (minor / major) · demand paging · copy-on-write (fork → P9.6)
  - Protection bit (R/W/X) → segfault-এর আসল কারণ
  - Physical address user দেখতে পায় না (`/proc/self/pagemap`-এ root লাগে) ➕ optional
- ❌ **এখন শিখবে না:**
  - Kernel-এর page table code · NUMA, huge page → শুধু নাম
- 🧪 **Experiment:**
  - 1 GiB `malloc` করে কিছু না ছুঁলে RSS (`/proc/self/status`-এর `VmRSS`) ছোট → page ছুঁতে থাকো → RSS বাড়ে
  - `/usr/bin/time -v ./prog` বা `perf stat -e page-faults` → minor fault গোনা
  - String literal-এ লেখা → SIGSEGV — এবার আসল ব্যাখ্যা
- ⚠️ **সাধারণ ভুল:** "malloc করলেই RAM খরচ হয়"
- ❓ **নিজেকে জিজ্ঞেস করো:** তোমার `Thought.md`-এর প্রশ্ন — `int x = 10` কি সরাসরি physical memory-তে যায়?
- 🎯 **শেষ হবে যখন:** virtual → physical translation-এর diagram আঁকবে (তোমার `Story.md` আপডেট করো!)।

### P9.3 — System Call

- ✅ **শিখবে:**
  - User mode vs kernel mode
  - System call = kernel-এ নিয়ন্ত্রিত প্রবেশ: x86-64-এ `syscall` instruction · নম্বর `rax`-এ · argument `rdi, rsi, rdx, r10, r8, r9` (খেয়াল: `rcx`-এর বদলে `r10`!)
  - libc wrapper (`write()`, `read()`) vs stdio (`printf`-এর buffering তার উপরে)
  - `errno`
  - `strace` (system call দেখা) · `ltrace` (library call)
  - vDSO (`clock_gettime` system call ছাড়াই)
- ❌ **এখন শিখবে না:**
  - Kernel-এর syscall handler code → Track B-তে নিজে বানাবে (B.11)
- 🧪 **Experiment:**
  - `strace ./hello` → `write` খোঁজো
  - `printf` vs `write` vs `syscall(SYS_write, ...)`
  - Inline asm দিয়ে raw `syscall` ➕ (P8.7-এর সাথে)
  - `strace -c` → syscall গোনা
- ⚠️ **সাধারণ ভুল:** "printf = system call" (তুমি আগেই ঠিক করেছ: `puts` system call না ✓)
- ❓ **নিজেকে জিজ্ঞেস করো:** user program কেন সরাসরি hardware ছুঁতে পারে না?
- 🎯 **শেষ হবে যখন:** hello world-এর `strace` output লাইন ধরে ব্যাখ্যা করতে পারবে।

### P9.4 — File Descriptor ও Low-level I/O ➕

- ✅ **শিখবে:**
  - fd = ছোট integer → process-এর fd table → open file description (offset, flag) → inode
  - 0 / 1 / 2 (stdin / stdout / stderr)
  - `open` / `read` / `write` / `close` / `lseek` · flag: `O_CREAT`, `O_TRUNC`, `O_APPEND`
  - Partial read/write → loop লাগে!
  - `dup` / `dup2` (redirection → mini shell)
  - stdio (`FILE *`) fd-এর উপর buffering দিয়ে বানানো — P5.7-এর সাথে তুলনা
  - "Everything is a file" (`/dev`, `/proc`)
- ❌ **এখন শিখবে না:**
  - Non-blocking I/O, `epoll` → Phase 12 #11
- 🧪 **Experiment:**
  - `read`/`write` দিয়ে `cat` clone
  - stdio vs raw → `strace`-এ তুলনা
  - `ls -l /proc/self/fd`
  - `dup2` দিয়ে stdout file-এ redirect
- ⚠️ **সাধারণ ভুল:** একবার `read`-এ সব data আসবে ধরে নেওয়া
- ❓ **নিজেকে জিজ্ঞেস করো:** `printf`-এর output pipe-এ দেরিতে আসে কেন, terminal-এ না?
- 🎯 **শেষ হবে যখন:** নিজের `cat` চলবে (Phase 12 #7-এর শুরু)।

### P9.5 — `mmap`

- ✅ **শিখবে:**
  - File বা anonymous memory address space-এ map করা
  - `MAP_PRIVATE` vs `MAP_SHARED` · `PROT_*` flag · `munmap`
  - glibc `malloc`: বড় allocation-এ `mmap`, ছোটতে `brk` (P5.2-এর সাথে মিলাও)
  - File-backed mapping দিয়ে দ্রুত পড়া
  - Process-এর মধ্যে shared memory (→ P9.8)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - File `mmap` করে content print
  - Anonymous `mmap` 1 page → লেখো → `/proc/self/maps`-এ দেখো
  - `mprotect` দিয়ে read-only → লেখো → SIGSEGV
- ⚠️ **সাধারণ ভুল:** `munmap` ভুলে যাওয়া · size page-এর multiple না ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** `malloc` নিজে কীভাবে `mmap` ব্যবহার করে?
- 🎯 **শেষ হবে যখন:** `mmap` দিয়ে file পড়বে + region `maps`-এ দেখাবে (Phase 12 #5 allocator-এর ভিত্তি)।

### P9.6 — Process Creation: `fork`, `exec`, `wait` ➕

- ✅ **শিখবে:**
  - `fork` — copy-on-write duplicate, দুইবার return করে
  - `exec` family — process-এর image বদলে দেয়
  - `wait` / `waitpid` · exit status macro (`WIFEXITED` ইত্যাদি)
  - `exit` vs `_exit`
  - Zombie আর orphan process · process tree (`pstree`) · environment variable
- ❌ **এখন শিখবে না:**
  - Process group / session / job control-এর গভীরে → optional
- 🧪 **Experiment:**
  - `fork` → দুজনের pid print
  - `fork` + `exec("ls")`
  - Zombie বানিয়ে `ps`-এ state `Z` দেখো · orphan-এর নতুন parent
- ⚠️ **সাধারণ ভুল:** `wait` না করা (zombie জমে)
- ❓ **নিজেকে জিজ্ঞেস করো:** `fork`-এর পর memory কি সত্যিই copy হয়?
- 🎯 **শেষ হবে যখন:** mini shell-এর মূল loop (read → fork → exec → wait) চলবে।

### P9.7 — Signal ➕

- ✅ **শিখবে:**
  - Asynchronous notification: `SIGINT`, `SIGTERM`, `SIGKILL` (ধরা যায় না), `SIGSEGV`, `SIGCHLD`, `SIGALRM`
  - `sigaction` (`signal`-এর চেয়ে ভালো)
  - Handler-এ শুধু async-signal-safe function: `write` চলবে, `printf` **না**
  - `volatile sig_atomic_t` flag (P7.4)
  - Signal mask · default action · core dump
- ❌ **এখন শিখবে না:**
  - Real-time signal, `signalfd` → optional
- 🧪 **Experiment:**
  - Ctrl+C handler যেটা শুধু flag set করে
  - SIGSEGV handler → `write` দিয়ে message → exit
  - `SIGCHLD` দিয়ে child reap (Phase 12 #8-এর সাথে)
- ⚠️ **সাধারণ ভুল:** handler-এ `printf`/`malloc`
- ❓ **নিজেকে জিজ্ঞেস করো:** handler-এ `printf` কেন বিপজ্জনক?
- 🎯 **শেষ হবে যখন:** Ctrl+C-তে graceful shutdown কাজ করবে।

### P9.8 — IPC: Pipe, FIFO, Shared Memory ➕

- ✅ **শিখবে:**
  - `pipe()` + `fork` (parent-child) · `ls | wc` pipeline `dup2` দিয়ে
  - FIFO (`mkfifo`)
  - POSIX shared memory (`shm_open` + `mmap`) basics
  - Message queue — নাম জানো · socket → Phase 12 #10
- ❌ **এখন শিখবে না:**
  - System V IPC-এর বিস্তারিত → শুধু নাম
- 🧪 **Experiment:**
  - C-তে `ls | wc -l` বানাও
  - দুটো process shm-এ একটা counter বাড়ায় → race! (→ Phase 11)
- ⚠️ **সাধারণ ভুল:** pipe-এর অব্যবহৃত end বন্ধ না করা (EOF আসে না)
- ❓ **নিজেকে জিজ্ঞেস করো:** pipe-এর write end বন্ধ না করলে reader কেন আটকে থাকে?
- 🎯 **শেষ হবে যখন:** mini shell-এ pipe support চলবে।

### P9.9 — Scheduling ও Context Switching (ধারণা) ➕

- ✅ **শিখবে:**
  - Process/thread state: running, runnable, sleeping, zombie
  - Scheduler runnable task বেছে নেয় — Linux-এ এখন EEVDF (6.6 থেকে; তোমার kernel 6.12)
  - Time slice · preemption · nice value
  - Context switch = register save/restore + address space বদল (খরচ: TLB)
  - Voluntary vs involuntary switch (`/proc/<pid>/status`)
  - এটাই Track B-র MyOS scheduler-এর সেতু (B.6, B.8)
- ❌ **এখন শিখবে না:**
  - Linux scheduler-এর code → শিখবে না
- 🧪 **Experiment:**
  - `/proc/self/status`-এ `voluntary_ctxt_switches` / `nonvoluntary_ctxt_switches`
  - দুটো CPU-heavy process ভিন্ন nice value-তে → `top`
  - `taskset` দিয়ে একটা CPU-তে বাঁধা
- ⚠️ **সাধারণ ভুল:** "thread অনেক বেশি মানেই দ্রুত"
- ❓ **নিজেকে জিজ্ঞেস করো:** context switch-এ ঠিক কী কী save হয়?
- 🎯 **শেষ হবে যখন:** context switch-এ কী save হয় ব্যাখ্যা করতে পারবে (MyOS scheduler-এর প্রস্তুতি)।

### 🏁 Phase 9 Checkpoint

Mini shell (Phase 12 #6): fork/exec/wait + pipe + Ctrl+C handling · `mmap` দিয়ে custom allocator-এর prototype (Phase 12 #5)।

---

# Phase 10 — CPU / Performance

> **লক্ষ্য (তোমার roadmap):** register, cache, cache line, locality, branch prediction, pipeline, memory latency, profiling, performance measurement — তারপর C data structure-কে cache behavior-এর সাথে যুক্ত করা।
> **📁** `04_Computer_Architecture/` · **🔙 আগে লাগবে:** Phase 9

### P10.1 — CPU Basics: ISA, Pipeline

- ✅ **শিখবে:**
  - ISA (x86-64, ESP8266-এর Xtensa LX106, ARM) vs microarchitecture
  - Fetch → decode → execute
  - Register (recap)
  - Pipeline stage, hazard · superscalar আর out-of-order (শুধু ধারণা)
  - Clock আর IPC (instructions per cycle)
- ❌ **এখন শিখবে না:**
  - Microarchitecture-এর গভীরে (Agner Fog-এর মতো) → optional
- 🧪 **Experiment:**
  - `lscpu`, `/proc/cpuinfo`
  - `perf stat ./prog` → instructions, cycles, IPC
- ⚠️ **সাধারণ ভুল:** "GHz বেশি মানেই দ্রুত"
- ❓ **নিজেকে জিজ্ঞেস করো:** IPC 0.5 আর 3.0 — কোনটা ভালো, কেন?
- 🎯 **শেষ হবে যখন:** `perf stat`-এর output পড়ে IPC ব্যাখ্যা করতে পারবে।

### P10.2 — Memory Hierarchy ও Latency

- ✅ **শিখবে:**
  - Register → L1 (~1 ns, ~32–48 KiB) → L2 → L3 → RAM (~80–100 ns) → SSD/disk
  - Latency vs bandwidth · "memory wall"
- ❌ **এখন শিখবে না:**
  - DRAM-এর ভেতরের কাজ → শিখবে না
- 🧪 **Experiment:**
  - Array size বাড়িয়ে pointer-chasing benchmark → cache size-এ latency লাফ
  - `lscpu`-এ cache size দেখে মেলাও
- ⚠️ **সাধারণ ভুল:** "RAM access-এর খরচ সবসময় এক"
- ❓ **নিজেকে জিজ্ঞেস করো:** L1 hit আর RAM access-এ কত গুণ পার্থক্য?
- 🎯 **শেষ হবে যখন:** টেবিল/graph-এ cache size অনুযায়ী latency-র লাফ দেখাতে পারবে।

### P10.3 — Cache, Cache Line, Locality

- ✅ **শিখবে:**
  - Cache line = 64 byte
  - Spatial আর temporal locality
  - Row-major traversal (P2.5) vs column-major
  - Associativity আর conflict miss (ধারণা) · prefetching
- ❌ **এখন শিখবে না:**
  - Cache coherence protocol (MESI)-র বিস্তারিত → শুধু নাম (false sharing-এ P11.7)
- 🧪 **Experiment:**
  - 2D array row-wise vs column-wise sum → সময় + `perf stat -e cache-misses,cache-references`
- ⚠️ **সাধারণ ভুল:** একই Big-O মানে একই speed ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** row-wise কেন দ্রুত?
- 🎯 **শেষ হবে যখন:** row vs column পার্থক্য `perf` দিয়ে প্রমাণ করতে পারবে।

### P10.4 — Data Layout ও Cache

- ✅ **শিখবে:**
  - Array vs linked list traversal (pointer chasing)
  - AoS (array of structs) vs SoA (struct of arrays)
  - Struct padding-এর খরচ (P6.3) · hot/cold field আলাদা করা
  - False sharing-এর preview (→ P11.7) · `_Alignas(64)`
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - 10M int-এর যোগফল: array vs linked list
  - Particle update: AoS vs SoA
- ⚠️ **সাধারণ ভুল:** linked list-কে "সবসময় flexible তাই ভালো" ভাবা
- ❓ **নিজেকে জিজ্ঞেস করো:** তোমার Phase 6-এর list cache-friendly কীভাবে করবে?
- 🎯 **শেষ হবে যখন:** নিজের একটা data structure cache-friendly করে মেপে দেখাবে।

### P10.5 — Branch Prediction

- ✅ **শিখবে:**
  - Branch predictor · misprediction-এর খরচ (~15–20 cycle)
  - বিখ্যাত sorted vs unsorted উদাহরণ
  - Branchless technique (`cmov`, arithmetic)
  - `__builtin_expect` (likely/unlikely) ➕
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - Sorted vs unsorted array-তে "128-এর বেশি হলে যোগ" → `perf stat` branch-misses
  - `-O2` নিজেই branchless বানিয়ে দিতে পারে → assembly দেখো; effect দেখতে `-O1`
- ⚠️ **সাধারণ ভুল:** assembly না দেখে সিদ্ধান্ত নেওয়া
- ❓ **নিজেকে জিজ্ঞেস করো:** sorted data-তে একই code দ্রুত কেন?
- 🎯 **শেষ হবে যখন:** `perf` দিয়ে branch-miss পার্থক্য দেখাতে পারবে।

### P10.6 — Profiling ও Measurement

- ✅ **শিখবে:**
  - `time` · `clock_gettime(CLOCK_MONOTONIC)` · `perf stat` · `perf record` / `perf report` (hot spot) · flame graph (optional) · `gprof` (নাম)
  - Benchmark-এর ফাঁদ: optimizer অব্যবহৃত result মুছে দেয় (`volatile` sink বা print) · warmup · noise · বারবার চালানো · CPU frequency scaling
  - `rdtsc` (P8.7)
  - Debian-এ `perf` চালাতে `sudo sysctl kernel.perf_event_paranoid=1` লাগতে পারে (default কড়া)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - একটা ধীর program profile → hot spot খুঁজে → optimize → আবার মাপো
- ⚠️ **সাধারণ ভুল:** একবার চালিয়ে সিদ্ধান্ত · `-O0`-তে benchmark
- ❓ **নিজেকে জিজ্ঞেস করো:** তোমার benchmark-এর loop কি compiler মুছে দিয়েছে? কীভাবে নিশ্চিত হবে?
- 🎯 **শেষ হবে যখন:** আগে-পরে measurement সহ একটা optimization দেখাতে পারবে।

### 🏁 Phase 10 Checkpoint

Benchmark report: array vs list · row vs column · sorted vs unsorted — `perf` সংখ্যা সহ।

---

# Phase 11 — Concurrency

> **লক্ষ্য (তোমার roadmap):** process → thread → shared memory → race condition → synchronization · pthreads, mutex, condition variable, semaphore, atomics, memory ordering, deadlock
> **📁** `Module-06_SystemProgramming/` (বা `03_Operating_System/`) · **🔙 আগে লাগবে:** Phase 10

### P11.1 — Thread (pthreads)

- ✅ **শিখবে:**
  - Thread vs process: একই address space, আলাদা stack আর register
  - `pthread_create`, `pthread_join` · argument পাঠানো (pointer-এর lifetime!) · return value
  - `-pthread` flag
  - Thread stack `/proc/<pid>/maps`-এ
  - `_Thread_local` (P4.4)
- ❌ **এখন শিখবে না:**
  - C11 `<threads.h>` → শুধু জানো আছে, pthreads শিখবে
- 🧪 **Experiment:**
  - ৪টা thread → প্রতিটা নিজের id আর local-এর address print
  - Loop variable-এর address পাঠানোর bug (সবাই একই `i` দেখে)
- ⚠️ **সাধারণ ভুল:** thread-কে stack variable-এর address দিয়ে তারপর function থেকে return করা
- ❓ **নিজেকে জিজ্ঞেস করো:** দুটো thread-এর local variable কি একই জায়গায়?
- 🎯 **শেষ হবে যখন:** thread argument-এর lifetime bug চিনে ঠিক করতে পারবে।

### P11.2 — Race Condition

- ✅ **শিখবে:**
  - Data race (C11): একসাথে conflicting access, অন্তত একটা write, synchronization নেই → **UB**
  - `counter++` = read-modify-write (assembly দেখো!)
  - Nondeterminism
  - ThreadSanitizer: `-fsanitize=thread` (ASan-এর সাথে একসাথে না)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - ২ thread × ১০ লাখ increment → ভুল total · TSan report
- ⚠️ **সাধারণ ভুল:** "আমার machine-এ ঠিক আসছে মানে race নেই"
- ❓ **নিজেকে জিজ্ঞেস করো:** `counter++` assembly-তে কয়টা ধাপ?
- 🎯 **শেষ হবে যখন:** race-এর assembly-level ব্যাখ্যা দিতে পারবে (P8.1)।

### P11.3 — Mutex

- ✅ **শিখবে:**
  - `pthread_mutex_lock` / `unlock` · critical section
  - Lock granularity · performance খরচ
  - Static init: `PTHREAD_MUTEX_INITIALIZER`
- ❌ **এখন শিখবে না:**
  - Read-write lock, spinlock-এর বিস্তারিত → optional
- 🧪 **Experiment:**
  - Counter ঠিক করো · কতটা ধীর হলো মাপো · প্রতি iteration-এ lock vs batch-এ lock
- ⚠️ **সাধারণ ভুল:** lock নিয়ে error path-এ unlock না করা
- ❓ **নিজেকে জিজ্ঞেস করো:** lock খুব বড় বা খুব ছোট হলে কী সমস্যা?
- 🎯 **শেষ হবে যখন:** race ঠিক + TSan clean।

### P11.4 — Deadlock

- ✅ **শিখবে:**
  - ৪টা শর্ত: mutual exclusion · hold & wait · no preemption · circular wait
  - Lock ordering · `trylock`
  - ধরা: gdb (`thread apply all bt`) · Valgrind-এর helgrind ➕
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - দুটো mutex উল্টো ক্রমে নিয়ে deadlock বানাও → ordering দিয়ে ঠিক করো
- ⚠️ **সাধারণ ভুল:** lock-এর ক্রম document না করা
- ❓ **নিজেকে জিজ্ঞেস করো:** ৪টা শর্তের কোনটা ভাঙলে deadlock সম্ভব না?
- 🎯 **শেষ হবে যখন:** deadlock বানিয়ে আবার ঠিক করতে পারবে।

### P11.5 — Condition Variable

- ✅ **শিখবে:**
  - `wait` / `signal` / `broadcast` — mutex-এর সাথে
  - Spurious wakeup → সবসময় `while` loop
  - Producer-consumer bounded buffer (P6.7-এর circular queue)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - ১ producer, ২ consumer-এর bounded queue
- ⚠️ **সাধারণ ভুল:** `while`-এর বদলে `if` দিয়ে wait
- ❓ **নিজেকে জিজ্ঞেস করো:** condition variable কেন একা কাজ করে না, mutex লাগে?
- 🎯 **শেষ হবে যখন:** thread-safe queue চলবে (thread pool-এর ভিত্তি)।

### P11.6 — Semaphore

- ✅ **শিখবে:**
  - POSIX `sem_init` / `sem_wait` / `sem_post`
  - Counting vs binary
  - Semaphore vs mutex (ownership)
  - Process-এর মধ্যে named semaphore (P9.8)
- ❌ **এখন শিখবে না:** —
- 🧪 **Experiment:**
  - একসাথে সর্বোচ্চ ৩টা "connection" সীমা
- ⚠️ **সাধারণ ভুল:** semaphore-কে mutex-এর মতো ব্যবহার করে অন্য thread থেকে release
- ❓ **নিজেকে জিজ্ঞেস করো:** কখন semaphore, কখন mutex + condvar?
- 🎯 **শেষ হবে যখন:** দুটোর পার্থক্য উদাহরণ দিয়ে বলতে পারবে।

### P11.7 — Atomics ও Memory Ordering

- ✅ **শিখবে:**
  - `<stdatomic.h>`: `atomic_int`, `atomic_fetch_add`
  - `memory_order_relaxed / acquire / release / seq_cst`
  - Happens-before (ধারণা) · CPU reordering আর compiler reordering
  - `volatile` ≠ atomic (P7.4)
  - False sharing (cache line ping-pong) → padding / `_Alignas(64)` (P10.4)
- ❌ **এখন শিখবে না:**
  - Formal memory model-এর গভীরে → শিখবে না
- 🧪 **Experiment:**
  - Atomic counter vs mutex — speed
  - False sharing benchmark: একই cache line-এ দুটো counter vs আলাদা line-এ
- ⚠️ **সাধারণ ভুল:** সব জায়গায় `seq_cst` না বুঝে, বা `relaxed` না বুঝে
- ❓ **নিজেকে জিজ্ঞেস করো:** acquire/release কোন সমস্যা solve করে?
- 🎯 **শেষ হবে যখন:** acquire/release দিয়ে একটা flag handoff লিখতে পারবে।

### P11.8 — Lock-free Concept (পরিচয়) ➕

- ✅ **শিখবে:**
  - Compare-and-swap (`atomic_compare_exchange_strong`)
  - Lock-free stack-এর ধারণা
  - ABA problem
  - কখন এসবে যাবে না (খুব কঠিন!)
- ❌ **এখন শিখবে না:**
  - Production lock-free data structure · memory reclamation (hazard pointer, RCU) → শুধু নাম
- 🧪 **Experiment:**
  - CAS দিয়ে counter · (optional) reclamation ছাড়া Treiber stack — কেন reclamation কঠিন লেখো
- ⚠️ **সাধারণ ভুল:** "lock-free মানেই দ্রুত"
- ❓ **নিজেকে জিজ্ঞেস করো:** ABA problem নিজের ভাষায়।
- 🎯 **শেষ হবে যখন:** ABA problem নিজের ভাষায় ব্যাখ্যা করতে পারবে।

### 🏁 Phase 11 Checkpoint

Thread pool (Phase 12 #9) — P11.5-এর queue দিয়ে।

---

# Phase 12 — Systems Projects

> **তোমার roadmap-এর progression হুবহু (১ → ১২)।** প্রতিটা project-এ: কখন শুরু করা যায় (🔓), কী বানাবে, কী শিখবে, কী করবে না, কখন শেষ।
> **📁** `01_C_Programming/Projects/` + `11_Projects/` (network → `06_Networking/`, embedded → `10_Embedded/`)
> **নিয়ম:** project = শেখা জিনিস জোড়া লাগানো। Tutorial-এর code copy না (তোমার OS README-র নিষেধ)।

### #1 — Dynamic Array

- 🔓 **শুরু:** P5.3-এর পরে (Phase 5 checkpoint-এই এটা)
- ✅ **বানাবে:** `vec_init`, `vec_push`, `vec_get`, `vec_set`, `vec_pop`, `vec_free` · capacity দ্বিগুণ (realloc) · bounds-checked API
- ✅ **শিখবে:** amortized O(1) · ownership · realloc-এর ফাঁদ
- ❌ **করবে না:** macro দিয়ে generic বানানো (optional, পরে)
- 🎯 **শেষ:** ১০ লাখ push → ASan + Valgrind clean, test pass

### #2 — String Library Subset (তোমার README-র "Mini libc"-এর শুরু)

- 🔓 **শুরু:** P3.3 + P5.2-এর পরে
- ✅ **বানাবে:** `my_strlen`, `my_strcpy`, `my_strncpy`, `my_strcmp`, `my_strcat`, `my_strdup`, `my_memcpy`, `my_memmove` (overlap!), `my_memset`
- ✅ **শিখবে:** pointer loop · edge case · `memcpy` vs `memmove`
- ❌ **করবে না:** locale, UTF-8 সমর্থন
- 🎯 **শেষ:** প্রতিটা function libc-র result-এর সাথে test দিয়ে মিলবে

### #3 — Hash Table

- 🔓 **শুরু:** P6.7-এর পরে
- ✅ **বানাবে:** string key → value · chaining বা open addressing · load factor ছাড়ালে resize · FNV-1a hash
- ✅ **শিখবে:** hashing · collision · resize-এর খরচ
- ❌ **করবে না:** cryptographic hash
- 🎯 **শেষ:** ১ লাখ key insert/find/delete — leak-free, test pass

### #4 — Linked List / Tree

- 🔓 **শুরু:** P6.7 + P4.6-এর পরে
- ✅ **বানাবে:** doubly linked list · BST: insert, search, delete, traversal (in/pre/post order) · recursive free
- ✅ **শিখবে:** recursion + pointer-to-pointer দিয়ে delete
- ❌ **করবে না (এখন):** AVL / red-black (optional)
- 🎯 **শেষ:** সব operation-এর test + leak-free

### #5 — Custom Allocator

- 🔓 **শুরু:** P9.5-এর পরে (alignment-এর জন্য P1.2)
- ✅ **বানাবে:** প্রথমে bump allocator → তারপর free-list allocator: `mmap` করা arena, 16-byte alignment, splitting/coalescing · ➕ `LD_PRELOAD` দিয়ে নিজের malloc বসানো (P7.6)
- ✅ **শিখবে:** fragmentation · alignment · metadata
- 💡 **এটাই MyOS-এর `kmalloc`-এর ভিত্তি (B.4)** — তোমার OS plan-এও `kmalloc/kfree` আছে
- 🎯 **শেষ:** `ls` বা নিজের program তোমার malloc দিয়ে চলবে

### #6 — Mini Shell

- 🔓 **শুরু:** P9.6–P9.8-এর পরে
- ✅ **বানাবে:** prompt · argument parse · fork/exec/wait · builtin (`cd`, `exit`) · redirection (`<`, `>`) · pipe · Ctrl+C handling
- ❌ **করবে না:** job control, scripting language
- 🎯 **শেষ:** `ls -l | grep c > out.txt` কাজ করবে

### #7 — File Utility

- 🔓 **শুরু:** P9.4-এর পরে
- ✅ **বানাবে:** নিজের `cat`, `wc`, `cp`, `ls` (`opendir`/`readdir`/`stat`) — অন্তত ২টা
- ❌ **করবে না:** সব option (শুধু মূলগুলো)
- 🎯 **শেষ:** আসল tool-এর output-এর সাথে মিলবে

### #8 — Process Supervisor

- 🔓 **শুরু:** P9.7-এর পরে
- ✅ **বানাবে:** N টা child চালায় · crash করলে আবার চালায় (`SIGCHLD`) · log · graceful shutdown
- 🎯 **শেষ:** child `kill` করলে আবার উঠে আসে, Ctrl+C-তে সব পরিষ্কারভাবে বন্ধ

### #9 — Thread Pool

- 🔓 **শুরু:** P11.5-এর পরে
- ✅ **বানাবে:** নির্দিষ্ট worker · task queue · shutdown · benchmark
- 🎯 **শেষ:** TSan clean, ১০০০ task সঠিকভাবে শেষ

### #10 — TCP Server (তোমার README-র "HTTP Server"-এর ভিত্তি)

- 🔓 **শুরু:** P9.4-এর পরে + **networking basics** (`06_Networking/`: TCP/IP, port, socket API — `socket`, `bind`, `listen`, `accept`, `connect`, `htons`/`htonl` — P1.6)
- ✅ **বানাবে:** echo server → সহজ HTTP/1.0 response (browser-এ দেখা যায়)
- ❌ **করবে না:** TLS/HTTPS
- 🎯 **শেষ:** `curl` আর browser থেকে response আসবে

### #11 — Event-driven Server (তোমার README-র "Multi-threaded Server"-এর সাথে তুলনা)

- 🔓 **শুরু:** #10-এর পরে
- ✅ **বানাবে:** non-blocking socket + `poll` / `epoll` · ১০০০ connection · thread-per-connection আর thread pool (#9)-এর সাথে তুলনা
- 🎯 **শেষ:** তিন design-এর benchmark তুলনা

### #12 — Embedded / ESP8266 Project 🔌

- 🔓 **শুরু:** Phase 6 (bit operation, struct, state machine) + P7.4 (`volatile`)-এর পরে
- ✅ **বানাবে:** প্রথমে ESP8266 RTOS SDK দিয়ে: GPIO LED + interrupt-চালিত button + UART logging + state machine (P6.5)
- ➡️ তারপর **Track B** (bare-metal → MyOS)
- 🎯 **শেষ:** button চাপলে state বদলায়, UART-এ log আসে

### ➕ Bonus — তোমার `01_C_Programming/README.md`-এর Project

| তোমার README | কীভাবে বানাবে |
|---|---|
| Mini libc | #2 + `my_printf` (P4.8) + নিজের malloc (#5) |
| Shell | = #6 |
| Memory Allocator | = #5 |
| HTTP Server | #10-কে বাড়িয়ে (static file serve) |
| Multi-threaded Server | #9 + #10 |
| Mini Database | key-value store: #3 hash table + file-এ persistence (P5.7 / P9.4) + append-only log |

---

# Track B — Phase 12-এর পরে: ESP8266 → Bare-metal → MyOS 🔌

> **ভিত্তি:** তোমার `03_Operating_System/README.md`-এর Phase 8–17 — **order একই রাখা হয়েছে।**
> **কখন শুরু:** Phase 12 শেষে। (তোমার OS README অনুযায়ী চাইলে Phase 8 + Phase 10 শেষ হলেই B.1–B.2 শুরু করা যায়।)
> **📁** `10_Embedded/` (hardware, bare-metal) + `03_Operating_System/` (MyOS)
> **সবচেয়ে বড় নিয়ম (তোমার README থেকে):** **Hardware-এ যা নেই, সেটা আছে বলে pretend করব না।** Software দিয়ে emulate করলে সেটাকে কখনো hardware feature বলবে না।
> **তোমার priority:** C হলো main subject · ESP8266 হলো practical laboratory · MyOS হলো long-term project।

### B.1 — ESP8266 Hardware (OS README Phase 8)

- ✅ **শিখবে:** Xtensa LX106 CPU · register · RAM (IRAM / DRAM) · Flash (code কোথা থেকে চলে) · memory map · GPIO · UART · Timer · Interrupt · datasheet আর technical reference পড়তে শেখা
- ❌ **এখন শিখবে না:** SDK-এর হাজারটা API মুখস্থ (তোমার README-র নিষেধ) · Wi-Fi stack-এর ভেতর
- 🧪 **Experiment:** datasheet থেকে নিজে ESP8266 memory map টেবিল বানাও · ইচ্ছা করে unaligned 32-bit access → `Exception (9) LoadStoreAlignmentCause` (P1.2, P3.5)
- ⚠️ **Limitation:** PC-র মতো page-table MMU নেই → virtual memory / process isolation নেই — datasheet দিয়ে যাচাই করে লিখে রাখো
- 🎯 **শেষ হবে যখন:** memory map দেখে বলতে পারবে কোন address-এ কী।

### B.2 — Bare-Metal Programming (OS README Phase 9)

- ✅ **শিখবে:** reset → CPU init → stack set → `.data` copy / `.bss` zero → `main` (startup code) · linker script (memory region, section বসানো) · `volatile` pointer দিয়ে register-level GPIO (MMIO) · SDK ছাড়া UART-এ character পাঠানো
- 🔗 **আগের lesson:** P7.7 (`_start`, linker script) · P7.4 (`volatile`) · P1.5 (bit mask) · P8.7 (asm)
- ❌ **এখন শিখবে না:** নিজের bootloader (প্রথমে না)
- 🎯 **শেষ হবে যখন:** SDK ছাড়া LED blink + UART-এ "hello"।

### B.3 — Kernel Entry + Serial Output (OS README Phase 10–11)

- ✅ **শিখবে:** `kernel_main()` · MyOS folder structure ধীরে ধীরে (`kernel/`, `drivers/`, `include/` …) — শুরুতেই পুরোটা না (তোমার README) · UART দিয়ে `kprintf` (P4.8 variadic!)
- 🎯 **শেষ হবে যখন:** boot হলে UART-এ "MyOS v0.1"।

### B.4 — Memory Manager (OS README Phase 11)

- ✅ **শিখবে:** `kmalloc` / `kfree` — Phase 12 #5-এর allocator থেকে · linker script থেকে heap region · alignment (P1.2)
- 🎯 **শেষ হবে যখন:** kmalloc test leak-free।

### B.5 — Interrupt Handler + Timer (OS README Phase 11)

- ✅ **শিখবে:** interrupt vector / handler table (function pointer — P4.7) · ISR-এর নিয়ম (ছোট রাখো, `volatile` flag) · timer tick
- 🎯 **শেষ হবে যখন:** timer interrupt-এ LED toggle।

### B.6 — Task Management + প্রথম Scheduler (OS README Phase 11)

- ✅ **শিখবে:** task = stack + saved register · সহজ round-robin · P9.9-এর ধারণা কাজে লাগাও
- 🎯 **শেষ হবে যখন:** ২টা task পালা করে চলছে।

### B.7 — Driver (OS README Phase 12)

- ✅ **শিখবে:** UART · GPIO · Timer · Display · Input · Flash driver · ➕ SPI, I2C (তোমার topic checklist) · driver callback (function pointer)
- 🎯 **শেষ হবে যখন:** প্রতিটা driver-এর আলাদা `.h` / `.c` interface।

### B.8 — Scheduler গভীরে (OS README Phase 13)

- ✅ **শিখবে:** Task → Context → Stack → Context switch (asm — P8.7) → Timer interrupt → Scheduler
- 🎯 **শেষ হবে যখন:** ৩টা task timer interrupt দিয়ে preemptive-ভাবে চলছে।

### B.9 — Filesystem (OS README Phase 14)

- ✅ **শিখবে:** Flash → Block → File → Directory → Filesystem · `open` / `read` / `write` / `close`-এর basic ধারণা (P9.4) · flash wear (erase cycle)
- 🎯 **শেষ হবে যখন:** file লিখে reboot-এর পর আবার পড়া যায়।

### B.10 — MyOS Shell (OS README Phase 15)

- ✅ **শিখবে:** command: `help`, `info`, `mem`, `tasks`, `ls`, `cat`, `write`, `reboot` · Phase 12 #6-এর অভিজ্ঞতা কাজে লাগাও
- 🎯 **শেষ হবে যখন:** UART terminal-এ `MyOS Shell >` চলছে।

### B.11 — System Call (OS README Phase 16)

- ✅ **শিখবে:** User Program → System Call → Kernel → Hardware · syscall table (function pointer)
- ⚠️ **Limitation:** MMU না থাকায় সত্যিকারের user/kernel isolation নেই — এটা লিখে রাখবে (তোমার limitation নিয়ম)
- 🎯 **শেষ হবে যখন:** user task syscall দিয়ে UART-এ লিখতে পারে।

### B.12 — Hardware Abstraction (OS README Phase 17)

- ✅ **শিখবে:** Application → OS API → Kernel → HAL → Driver → Hardware · interface design (opaque type — P6.2)
- 🎯 **শেষ হবে যখন:** driver বদলালে উপরের code বদলাতে হয় না।

### B.13 — RTOS Concept ➕ (তোমার topic checklist)

- ✅ **শিখবে:** ESP8266 RTOS SDK-এর FreeRTOS: task, queue, semaphore, priority — নিজের MyOS scheduler-এর সাথে তুলনা (Phase 11)
- 🎯 **শেষ হবে যখন:** একই কাজ FreeRTOS-এ আর MyOS-এ করে পার্থক্য লিখবে।

---

# 🚫 এখন শিখবে না (Out of Scope)

### তোমার নিজের নিয়ম — `03_Operating_System/README.md`-এর "আমরা যেগুলো করব না"

❌ বড় code dump · ❌ ready-made OS copy · ❌ শুধু tutorial follow · ❌ definition মুখস্থ · ❌ একদিনে ১০টা concept · ❌ ESP8266 SDK-এর হাজারটা API মুখস্থ · ❌ hardware limitation লুকানো

### এই roadmap-এর বাইরের subject (repo-তে folder আছে, কিন্তু এখন শুরু করবে না)

| Subject | কখন | কেন এখন না |
|---|---|---|
| `07_Algorithms` | Phase 6-এর পরে হালকা parallel চলতে পারে (Big-O, sorting, searching) | নিজে data structure বানানোর পর algorithm বেশি অর্থবহ |
| `06_Networking` | Phase 12 #10-এর ঠিক আগে — শুধু TCP/IP + socket basics | Networking internals (তোমার Long-Term Goal) Phase 12-এর পরে |
| `08_System_Design` | Phase 12-এর পরে | আগে C/system foundation |
| `09_Databases` | Phase 12-এর পরে (bonus "Mini Database" project ছাড়া) | আগে C/system foundation |
| C++ / Rust / অন্য language | C roadmap শেষে | focus ভাঙবে |
| Web, GUI, mobile, AI/ML, competitive programming | এই journey-র অংশ না | লক্ষ্য systems |

### C-এর যেগুলো শিখবে না / এড়িয়ে চলবে

| জিনিস | কী করবে |
|---|---|
| `gets()` | কখনো না — C11-এ বাদ; `fgets` ব্যবহার করো |
| VLA (`int a[n]`, run-time size) | এড়িয়ে চলো — heap বা fixed size |
| K&R style function definition | শিখবে না |
| Trigraph / digraph | শিখবে না |
| `setjmp` / `longjmp` | এখন না |
| `goto` | শুধু error cleanup pattern (P5.4) |
| `register` keyword | শুধু জানলেই হবে (P4.4) |
| C11 `<threads.h>` | pthreads শিখবে (Phase 11) — এটা শুধু জানো |
| `_Complex`, `<tgmath.h>` | দরকার নেই |
| Macro metaprogramming trick | X-macro পর্যন্ত যথেষ্ট (P7.1) |

### Tool / অন্যান্য

- Arduino framework — লক্ষ্য না (চাইলে শুধু hardware দ্রুত test করতে)
- IDE সাজানো, Autotools, Bazel — সময় নষ্ট
- ESP8266 toolchain / SDK setup — ✅ শেষ, **freeze** (তোমার OS README)

---

# 📌 Topic Checklist → কোন Lesson-এ

> `MASTER.md` §8-এর "Full Topic Checklist"-এর **প্রতিটা** topic কোথায় শিখবে — কিছুই বাদ নেই।

**C Core**
- operators in depth → P1.5, P1.8
- integer promotions → P1.8
- usual arithmetic conversions → P1.8
- signed/unsigned → P1.7
- overflow → P1.7
- floating-point → P1.9
- arrays → P2.1–P2.6
- strings → P2.4 (+ Phase 12 #2)
- pointers → P3.1–P3.8
- pointer arithmetic → P3.3
- pointer-to-pointer → P3.6
- `const` → P3.7
- `static` → P4.2, P4.4
- `extern` → P4.2, P4.4
- storage duration → P4.4
- object lifetime → P3.4, P4.4
- scope vs lifetime → P4.4
- structs → P1.10, P6.1, P6.3
- unions → P6.4
- enums → P6.5
- bit-fields → P6.6
- function pointers → P4.7
- callbacks → P4.7
- variadic functions → P4.8
- preprocessor/macros in depth → P7.1

**Memory Management**
- stack vs heap → P5.1
- `malloc` → P5.2 · `calloc` → P5.3 · `realloc` → P5.3 · `free` → P5.2
- ownership → P5.4 · lifetime → P5.4
- dangling pointers → P3.4, P5.5
- use-after-free → P5.5 · double-free → P5.5 · memory leaks → P5.5
- buffer overflow → P2.4, P5.5
- invalid memory access → P3.4, P5.5

**Data Representation**
- binary/hex → P1.5
- two's complement → P1.7
- endianness → P1.6
- IEEE-754 → P1.9
- object representation → P1.4
- `sizeof` → P1.1
- `_Alignof` → P1.2
- `_Alignas` → P6.3
- `offsetof` → P1.10, P6.3
- strict aliasing → P3.2 (পরিচয়), P7.4
- effective type → P7.4

**Compiler / Build**
- preprocessing in depth → P7.1
- compilation stages → P0.2, P7.2, P7.3
- assembly generation → P0.2, P7.3, P8.1
- object files → P0.3, P7.5
- symbols → P0.3, P0.4, P7.5
- relocation → P0.3, P7.5
- static/dynamic linking → P0.4, P7.6
- shared libraries → P7.6
- loader → P0.5, P7.7
- GCC vs Clang → P7.8
- optimization → P7.3, P7.4
- debug information → P7.8
- Make → P4.2, P7.9 · CMake → P7.9 · Ninja → P7.9 · incremental builds → P4.2, P7.9

**Machine / CPU**
- registers → P8.1, P10.1
- stack pointer → P4.5, P8.4
- frame pointer → P4.5, P8.4
- calling conventions → P8.2, P8.3
- function call mechanics → P4.5, P8.4
- return values → P4.3, P8.2
- cache → P10.2, P10.3 · cache lines → P10.3 · locality → P10.3
- branch prediction → P10.5
- pipeline basics → P10.1

**OS**
- process → P9.1, P9.6
- virtual memory → P9.2 · address space → P9.1 · pages → P9.2 · page tables → P9.2
- `mmap` → P9.5
- system calls → P9.3
- file descriptors → P9.4
- signals → P9.7
- process creation → P9.6
- threads → P11.1
- scheduling → P9.9 (+ B.6, B.8) · context switching → P9.9 (+ B.8)
- IPC → P9.8

**Concurrency**
- race conditions → P11.2
- mutex → P11.3
- semaphore → P11.6
- condition variable → P11.5
- atomics → P11.7 · memory ordering → P11.7
- deadlock → P11.4
- lock-free concepts → P11.8

**Systems Tools**
- `gdb` → P3.4, P5.6, P7.8
- `strace` → P9.3 · `ltrace` → P7.6, P9.3
- `objdump` → P0.3, P1.3, P8.1 · `readelf` → P0.3, P7.5 · `nm` → P0.3, P0.4, P4.4 · `ldd` → P0.4, P7.6
- valgrind → P5.5, P5.6
- sanitizers (ASan/UBSan) → P2.1, P5.5, P5.6 · TSan → P11.2

**Embedded**
- MCU architecture → B.1
- memory-mapped I/O → B.2 (+ `volatile` P7.4)
- registers → B.1, B.2
- interrupts → B.5
- GPIO → B.1, B.2, B.7
- timers → B.5, B.7
- UART → B.2, B.7
- SPI → B.7 · I2C → B.7
- linker scripts → P7.7 (পরিচয়), B.2
- bare-metal C → B.2
- RTOS concepts → B.13
- ESP8266 → Phase 12 #12, Track B

---

# 🔗 তোমার অন্য Plan-এর সাথে মিল

### `01_C_Programming/README.md` → এই Roadmap

| তোমার README | এখানে |
|---|---|
| Phase 0 · Module 01 Compilation Pipeline | Phase 0 (P0.1–P0.5) |
| Module 02 · Variables | ✅ শেষ (MASTER §3) |
| Module 02 · Data Types | Phase 1 |
| Module 02 · Operators | P1.5, P1.8 |
| Module 02 · Control Flow | আলাদা lesson নেই (তুমি জানো) — `switch` + enum P6.5 · `goto` cleanup P5.4 |
| Module 02 · Functions | Phase 4 |
| Module 03 · Memory (stack, heap, static, read-only, process layout, alignment) | P1.2–P1.3, P4.4–P4.5, P5.1, P9.1 |
| Module 04 · Arrays & Strings | Phase 2 |
| Module 05 · Pointers (+ function pointer, void pointer) | Phase 3, P4.7 |
| Module 06 · User Defined Types (struct, union, state machine, embedded) | P1.10, Phase 6 |
| Module 07 · Storage Classes (auto, static, extern, register) | P4.4 |
| Module 08 · Qualifiers (const, volatile, restrict) | P3.7, P7.4 |
| Module 09 · Dynamic Memory | Phase 5 |
| Module 10 · File Handling | P5.7 (+ P9.4) |
| Phase 2 · Intermediate C (header, modular, multi-file, static/shared lib, Makefile, CMake) | P4.2, P7.6, P7.9 |
| Phase 3 · Compiler Internals (lexer, token, parser, AST, semantic, IR, optimization, codegen) | P7.2, P7.3 |
| Phase 4 · System Programming (ELF, loader, process, thread, signal, VM, mmap, syscall) | P7.5–P7.7, Phase 9, P11.1 |
| Phase 5 · Computer Architecture (CPU, register, cache, stack, calling convention, ABI, assembly) | Phase 8, Phase 10 |
| Phase 6 · Advanced (UB, optimization, debugging, GDB, Valgrind, sanitizer) | P7.3, P7.4, P7.8, P5.5–P5.6 |
| Phase 7 · Projects (mini libc, shell, allocator, HTTP server, multi-threaded server, mini database) | Phase 12 (#2, #5, #6, #10, #11 + Bonus) |

### `03_Operating_System/README.md` → এই Roadmap

| তোমার OS README | এখানে |
|---|---|
| Phase 0 · Development Environment | ✅ শেষ — freeze |
| Phase 1 · C Foundation (variables & data types, operators, functions) | Phase 1, P1.5, P1.8, Phase 4 |
| Phase 2 · Memory & Pointer (memory, address, pointer, pointer+array, pointer+function, struct+pointer) | P0.5, Phase 1, P3.1, P2.3 / P3.3, P4.3, P6.1 |
| Phase 3 · Deep C Memory (stack, heap, dynamic memory) | P4.5, Phase 5 |
| Phase 4 · System-Level C (const, static, extern, volatile, enum, typedef, struct, function pointer, macro, header/source) | P3.7, P4.4, P7.4, P6.5, P6.2, Phase 6, P4.7, P7.1, P4.2 |
| Phase 5 · Compiler & Build System (pipeline, ELF, section) | Phase 0 + P7.5–P7.9 |
| Phase 6 · Computer Architecture | Phase 10 |
| Phase 7 · Assembly | Phase 8 |
| Phase 8 · ESP8266 Hardware | B.1 |
| Phase 9 · Bare-Metal Programming | B.2 |
| Phase 10 · Kernel | B.3 |
| Phase 11 · Kernel Components | B.3–B.6 |
| Phase 12 · Drivers | B.7 |
| Phase 13 · Scheduler | B.8 |
| Phase 14 · Filesystem | B.9 |
| Phase 15 · Shell | B.10 |
| Phase 16 · System Calls | B.11 |
| Phase 17 · Hardware Abstraction | B.12 |

### তোমার Long-Term Learning Goal (MASTER §8) → কোথায়

| Long-Term Goal-এর ধাপ | এখানে |
|---|---|
| C Programming | Phase 0–2, Phase 4 |
| Memory | Phase 1, Phase 5 |
| Pointers | Phase 3 |
| Data Structures | Phase 6, Phase 12 #1–#4 |
| System Programming | Phase 9, Phase 11, Phase 12 #5–#9 |
| Linux Internals | Phase 9 (+ Track B-র পরে আরও গভীরে) |
| Operating Systems | Phase 9, Track B (MyOS) |
| Computer Architecture | Phase 10 |
| Assembly | Phase 8 |
| Networking Internals | Phase 12 #10–#11 (+ পরে `06_Networking`) |
| Embedded Systems | Phase 12 #12, Track B |
