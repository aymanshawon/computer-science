# 🧭 MASTER — Computer Science Learning Project

> এই ফাইলটাই **single source of truth**। কোথায় আছি, কী শিখেছি, পরে কী — সব এখান থেকে শুরু।
> যেকোনো AI tutor (Claude, ChatGPT, Gemini…) কে প্রথমে এই ফাইল দাও।

**Last updated:** 2026-10-03

| File | কাজ |
|---|---|
| **MASTER.md** (এটা) | Current state, শেখা জিনিস, rules, file map |
| [ROADMAP.md](ROADMAP.md) | বড় ছবি — পুরো journey phase by phase |
| [LESSON_PLAN.md](LESSON_PLAN.md) | ছোট ছবি — পরের lesson গুলো step by step, checkbox সহ |
| [TUTOR.md](TUTOR.md) | যেকোনো LLM-এ paste করার tutor prompt |
| [CLAUDE.md](CLAUDE.md) | Claude Code-এর project instruction |
| [C_Programming_Learning_State_README.md](C_Programming_Learning_State_README.md) | পুরোনো raw handoff (archive — আর update হবে না) |

---

## 1. আমি কে, লক্ষ্য কী

- Self-learner. Debian 13, ESP8266 hardware lab।
- লক্ষ্য: **C Programmer → System Programmer → Computer Architecture → OS Developer** (Production-grade)।
- Bangla-তে ভাবি, Technical term English-এ।
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
- গভীর "why" প্রশ্ন করি → উত্তর ছোট রেখে **Parking Lot**-এ রাখো, current lesson-এ ফেরো।

## 3. Current State (এখন কোথায়)

```text
📍 NOW:  Module 01 → Lesson 03 Assembler (আবার পড়ছি, এবার note সহ শেষ করব)
⏭️ NEXT: Lesson 04 Linker → Lesson 05 Loader → তারপর Module 02 Data Types-এ ফিরব (sizeof + _Alignof)
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
- `age` আর `c`-এর মাঝের 3 byte আসলে padding নাকি stack frame-এর অন্য কিছু? → `_Alignof` + `objdump` দিয়ে দেখব (data: [LESSON_PLAN Step 4](LESSON_PLAN.md))।

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

**Style**
- আগে ঠিক প্রশ্নটার উত্তর দাও। ছোট প্রশ্ন → ছোট উত্তর; গভীরে যাও শুধু দরকার হলে।
- Bangla/Banglish-এ উত্তর, technical term English-এ।
- একবার দেখানো concept আবার repeat করো না।
- ভুল ধারণা সরাসরি ঠিক করো — flattery না।
- Socratic: explain করার আগে ১–২টা প্রশ্ন করে জানো আমি কী ভাবি; ভুল ধারণা `mistakes.md`-এ যাবে।
- এক step-এ একটা concept, ছোট message।
- Assembly আনো শুধু যখন সেটা কোনো observed behavior explain করে।
- দরকার হলে connect করো: `C → compiler → assembly → machine code → CPU → memory/cache → OS`।
- আমার notes-এর ভুল statement আর file নামের typo ধরিয়ে দাও।

**প্রতিটা Topic-এর Structure**

Why exists → What problem it solves → Theory → Internal working → Memory model → Syntax → Examples →
Real-world use → Common mistakes → Terminal experiments → Homework (অন্তত একটা code লেখার কাজ) →
Interview questions → Summary → Mental model

**Rules**
1. এক lesson শেষ (সব file পূর্ণ) না হলে পরেরটা না। Topic skip না; ভুল উত্তর দিলে আগে ভুলের কারণ বোঝাও।
2. Own-voice file (`observation`, `mistakes`, `summary`, `Thought.md`) **আমি** লিখি; tutor review করে।
3. Session শুরু: MASTER.md + LESSON_PLAN.md পড়ো → current checkbox থেকে শুরু → জিজ্ঞেস করো গতবার থেকে কী confuse করছে।
4. Session শেষ: ৩টা quiz, LESSON_PLAN-এ tick, MASTER §3 update, session log-এ এক লাইন, commit message suggest।
5. কোনো folder/file delete বা move না — শুধু add/update।

## 7. Parking Lot (পরে উত্তর পাবে)

| প্রশ্ন | কোথায় |
|---|---|
| Virtual vs Physical address, MMU, page table | Loader → Module 03 Memory → OS |
| ABI কীভাবে stack layout ঠিক করে | ABI / Calling Convention phase |
| `test.c`-এর code/data/heap/stack address | L05 Loader |
| 3-byte gap padding কিনা | M02 Data Types (`_Alignof`) |

## 8. Repo Map

```text
computer-science/
├── MASTER.md · ROADMAP.md · LESSON_PLAN.md · TUTOR.md · CLAUDE.md
├── 00_Resources/          books, cheatsheets, papers
├── 01_C_Programming/      ← এখন এখানে
│   ├── Module-01_Compiler-Pipeline/  Lesson-01 … Lesson-05
│   ├── Module-02_C_Syntax/           01_Variable, 02_DataType
│   └── Module-03 … 06, Projects/     (ভবিষ্যৎ)
├── 02_Linux … 11_Projects/            (ভবিষ্যৎ subjects)
└── .claude/memory/        Claude-এর project memory
```

**Known clean-up (নিজে করবে যখন চাও — আমি folder ছুঁইনি):** typo নাম `Ruff Sctach.md`, `expriment/`, `04_obserbation.md`;
`.o`/binary commit হয়েছে → `.gitignore`; `Module-02_C_Syntax/README.md`-এর topic list main roadmap-এর সাথে মেলে না।
