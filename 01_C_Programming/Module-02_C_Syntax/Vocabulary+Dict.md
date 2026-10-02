## 📚 Technical Vocabulary — Master Structure

| # | Category | কী ধরনের শব্দ থাকবে |
|---:|---|---|
| 01 | **General Technical Terms** | Concept, Context, Fundamental, Significant, Mechanism ইত্যাদি |
| 02 | **C Language Core** | Declaration, Definition, Expression, Statement, Identifier, Keyword ইত্যাদি |
| 03 | **Type System** | Type, Value, Conversion, Casting, Implicit, Explicit ইত্যাদি |
| 04 | **Object & Storage** | Object, Lifetime, Storage Duration, Scope, Allocation ইত্যাদি |
| 05 | **Pointer & Memory** | Pointer, Address, Dereference, Offset, Alignment, Padding ইত্যাদি |
| 06 | **Data Representation** | Bit, Byte, Word, Bit Pattern, Object Representation ইত্যাদি |
| 07 | **Endianness** | Endian, Byte Order, Little-endian, Big-endian ইত্যাদি |
| 08 | **Compiler & Toolchain** | Preprocessor, Compiler, Assembler, Linker, Loader ইত্যাদি |
| 09 | **Compilation Pipeline** | Source → Preprocess → Compile → Assemble → Link → Execute |
| 10 | **Binary / ELF** | ELF, Section, Segment, `.text`, `.data`, `.bss`, `.rodata` ইত্যাদি |
| 11 | **Behavior & Standard** | UB, Unspecified, Implementation-defined, Indeterminate ইত্যাদি |
| 12 | **CPU / Architecture** | ISA, Instruction, Register, Load, Store, ABI ইত্যাদি |
| 13 | **Operating System** | Kernel, Process, Thread, Scheduler, Virtual Memory, System Call ইত্যাদি |
| 14 | **Embedded / Bare-metal** | Firmware, Bootloader, HAL, Peripheral, GPIO, UART, RTOS ইত্যাদি |
| 15 | **Runtime Concepts** | Runtime, Compile-time, Static, Dynamic, Execution, Evaluation ইত্যাদি |
| 16 | **Debugging / Analysis** | Debug, Trace, Inspect, Probe, Measure, Verify ইত্যাদি |
| 17 | **System Design Terms** | Abstraction, Interface, Dependency, Constraint, Architecture ইত্যাদি |
| 18 | **Concurrency** | Concurrent, Parallel, Synchronous, Asynchronous, Race Condition ইত্যাদি |

---

# 🧠 01 — General Technical Terms

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Concept** | কনসেপ্ট | ধারণা | কোনো বিষয় কী এবং তার মূল idea কী। |
| **Context** | কনটেক্সট | প্রেক্ষাপট | কোনো শব্দ/feature কোন পরিস্থিতিতে ব্যবহৃত হচ্ছে। |
| **Fundamental** | ফান্ডামেন্টাল | মৌলিক / ভিত্তিমূলক | পরবর্তী ধারণাগুলো বোঝার foundation। |
| **Significant** | সিগনিফিক্যান্ট | গুরুত্বপূর্ণ | কোনো পরিবর্তন বা effect-এর বাস্তব impact উল্লেখযোগ্য হলে। |
| **Mechanism** | মেকানিজম | কীভাবে কাজ করে | কোনো system ভিতরে কীভাবে কাজটি সম্পন্ন করে। |
| **Behavior** | বিহেভিয়ার | আচরণ / কাজের ধরন | নির্দিষ্ট input/state-এ system কীভাবে behave করে। |
| **Property** | প্রপার্টি | বৈশিষ্ট্য | কোনো object/type/system-এর নির্দিষ্ট characteristic। |
| **Constraint** | কনস্ট্রেইন্ট | সীমাবদ্ধতা | কোনো operation-এর ওপর থাকা restriction। |
| **Requirement** | রিকোয়ারমেন্ট | প্রয়োজনীয় শর্ত | system-এর কাজ করার জন্য প্রয়োজনীয় condition। |
| **Guarantee** | গ্যারান্টি | নিশ্চয়তা | Standard/specification যে behavior নিশ্চিত করে। |
| **Assumption** | অ্যাসাম্পশন | ধরে নেওয়া বিষয় | প্রমাণ ছাড়াই সত্য ধরে নেওয়া condition। |
| **Observation** | অবজারভেশন | পর্যবেক্ষণ | experiment বা execution থেকে সরাসরি যা দেখা যায়। |
| **Evidence** | এভিডেন্স | প্রমাণ | কোনো hypothesis যাচাই করার জন্য পাওয়া data/observation। |
| **Representation** | রিপ্রেজেন্টেশন | প্রকাশরূপ | value/object memory বা অন্য form-এ কীভাবে প্রকাশিত। |
| **Interpretation** | ইন্টারপ্রিটেশন | অর্থ হিসেবে বোঝা | কোনো data/bit pattern-কে নির্দিষ্ট type/rule অনুযায়ী বোঝা। |
| **Semantics** | সিম্যান্টিক্স | অর্থ / behavior | code-এর meaning এবং তার required behavior। |
| **Syntax** | সিনট্যাক্স | লেখার নিয়ম | language grammar অনুযায়ী code-এর structure। |
| **Convention** | কনভেনশন | প্রচলিত নিয়ম | বাধ্যতামূলক standard rule না হলেও প্রচলিত practice। |
| **Abstraction** | অ্যাবস্ট্র্যাকশন | জটিলতা আড়াল করা | implementation detail লুকিয়ে simpler interface দেওয়া। |
| **Implementation** | ইমপ্লিমেন্টেশন | বাস্তবায়ন | specification/idea-কে বাস্তবে তৈরি করা। |
| **Specification** | স্পেসিফিকেশন | নির্দিষ্ট নিয়ম | system কী করবে তার formal description। |

---

# 🔵 02 — C Language Core

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Declaration** | ডিক্লারেশন | ঘোষণা | compiler-কে কোনো identifier-এর type/নাম সম্পর্কে জানানো। |
| **Definition** | ডেফিনিশন | সংজ্ঞায়িত/তৈরি করা | entity-এর actual definition প্রদান করা; অনেক ক্ষেত্রে storage-ও তৈরি হয়। |
| **Initialization** | ইনিশিয়ালাইজেশন | শুরুতে মান দেওয়া | object তৈরি হওয়ার সময় initial value দেওয়া। |
| **Assignment** | অ্যাসাইনমেন্ট | মান পরিবর্তন করে দেওয়া | existing object-এ নতুন value store করা। |
| **Expression** | এক্সপ্রেশন | value তৈরি করে এমন code | `a + b`, `x * 2`, `foo()` ইত্যাদি। |
| **Statement** | স্টেটমেন্ট | নির্দেশ | program-এর একটি execution unit। |
| **Identifier** | আইডেন্টিফায়ার | নাম / পরিচায়ক | variable/function/type-এর নাম। |
| **Keyword** | কীওয়ার্ড | reserved word | C language-এর বিশেষ অর্থযুক্ত শব্দ। |
| **Literal** | লিটারাল | সরাসরি লেখা value | `10`, `3.14`, `'A'`, `"hello"` ইত্যাদি। |
| **Operator** | অপারেটর | operation-এর symbol | `+`, `-`, `*`, `==`, `&` ইত্যাদি। |
| **Operand** | অপার্যান্ড | যার ওপর operation হয় | `a + b`-এ `a`, `b` operands। |
| **Scope** | স্কোপ | নাম ব্যবহারের এলাকা | identifier কোন source-code region-এ visible। |
| **Lifetime** | লাইফটাইম | কতক্ষণ বেঁচে থাকে | object কখন থেকে কখন পর্যন্ত অস্তিত্বশীল। |
| **Type** | টাইপ | data-এর ধরন | value কীভাবে interpret হবে এবং কোন operation valid হবে। |
| **Value** | ভ্যালু | মান | object/expression-এর নির্দিষ্ট data value। |

---

# 🟢 03 — Type System

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Conversion** | কনভার্সন | type পরিবর্তন | একটি type-এর value অন্য type হিসেবে নেওয়া। |
| **Casting** | কাস্টিং | explicit conversion | programmer `(float)x`-এর মতো syntax দিয়ে conversion নির্দেশ করে। |
| **Implicit** | ইমপ্লিসিট | নিজে থেকে | programmer সরাসরি না বললেও language rules অনুযায়ী হওয়া। |
| **Explicit** | এক্সপ্লিসিট | স্পষ্টভাবে | programmer নিজে operation/conversion নির্দিষ্ট করে। |
| **Compatible** | কম্প্যাটিবল | সামঞ্জস্যপূর্ণ | C type/system rules অনুযায়ী compatible হওয়া। |
| **Incompatible** | ইনকম্প্যাটিবল | অসামঞ্জস্যপূর্ণ | প্রয়োজনীয় compatibility না থাকা। |
| **Signed** | সাইন্ড | positive ও negative ধারণ করতে পারে | signed integer type negative ও non-negative value represent করতে পারে। |
| **Unsigned** | আনসাইন্ড | negative নয় | unsigned integer শুধু non-negative values represent করে। |
| **Precision** | প্রিসিশন | সূক্ষ্মতার মাত্রা | floating-point বা numerical representation কতটা সূক্ষ্ম। |
| **Range** | রেঞ্জ | মানের সীমা | কোনো type কত minimum থেকে maximum value represent করতে পারে। |
| **Overflow** | ওভারফ্লো | representable range ছাড়িয়ে যাওয়া | integer calculation-এর ফল type-এর representable range-এর বাইরে গেলে overflow issue হতে পারে। |
| **Truncation** | ট্রাঙ্কেশন | অতিরিক্ত অংশ বাদ পড়া | floating → integer conversion-এ fractional part বাদ যেতে পারে। |

---

# 🟠 04 — Object & Storage

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Object** | অবজেক্ট | data রাখার memory entity | C standard-এ object হলো value রাখার জন্য ব্যবহৃত region of data storage। |
| **Storage** | স্টোরেজ | data রাখার জায়গা | object-এর value রাখার memory/resource। |
| **Storage Duration** | স্টোরেজ ডিউরেশন | storage কতক্ষণ থাকে | C-তে automatic, static, allocated ইত্যাদি storage duration রয়েছে। |
| **Automatic** | অটোমেটিক | function/block অনুযায়ী তৈরি/শেষ | automatic storage duration সাধারণত block/function execution-এর সঙ্গে সম্পর্কিত। |
| **Static Storage Duration** | স্ট্যাটিক স্টোরেজ | পুরো program execution জুড়ে storage | static storage duration-এর object program execution-এর পুরো সময় বিদ্যমান থাকে। |
| **Dynamic Allocation** | ডায়নামিক অ্যালোকেশন | runtime-এ memory নেওয়া | `malloc()`, `calloc()`, `realloc()` দিয়ে memory নেওয়া। |
| **Deallocation** | ডি-অ্যালোকেশন | memory ছেড়ে দেওয়া | allocated memory `free()` করা। |
| **Allocation** | অ্যালোকেশন | memory/resource নেওয়া | program-এর জন্য storage/resource reserve করা। |

---

# 🔴 05 — Pointer & Memory

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Address** | অ্যাড্রেস | ঠিকানা | memory location শনাক্ত করার value। |
| **Pointer** | পয়েন্টার | address ধারণকারী object | অন্য object/function বা memory location-এর দিকে নির্দেশ করতে পারে। |
| **Dereference** | ডিরেফারেন্স | pointer দিয়ে target access | `*p` দিয়ে pointer-এর referent access করা। |
| **Referent** | রেফারেন্ট | pointer যাকে point করে | `p` যদি `x`-কে point করে, `x` হলো referent। |
| **Offset** | অফসেট | base থেকে দূরত্ব | base address থেকে কোনো location-এর distance। |
| **Alignment** | অ্যালাইনমেন্ট | নির্দিষ্ট boundary মেনে রাখা | type/object-এর address required alignment পূরণ করতে হয়। |
| **Padding** | প্যাডিং | অতিরিক্ত bytes | alignment/layout ঠিক রাখতে compiler extra space যোগ করতে পারে। |
| **Contiguous** | কনটিগুয়াস | পরপর | memory location gap ছাড়া পাশাপাশি থাকা। |
| **Memory Layout** | মেমোরি লেআউট | memory-তে arrangement | object/data/code কীভাবে memory-তে সাজানো। |
| **Memory Region** | মেমোরি রিজিয়ন | memory-এর নির্দিষ্ট অংশ | stack, mapped region, heap ইত্যাদি implementation/OS context-এর region। |
| **Stack** | স্ট্যাক | সাধারণত automatic storage-এর জন্য ব্যবহৃত area | C standard-এর formal memory region নয়; implementation/ABI-এর concept। |
| **Heap** | হিপ | সাধারণত dynamic allocation area | C standard-এর formal term নয়; allocator implementation-এর memory area। |

---

# 🟣 06 — Data Representation

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Bit** | বিট | 0 বা 1 | binary information-এর একটি digit। |
| **Byte** | বাইট | addressable storage unit | C-তে byte হলো addressable unit; size `CHAR_BIT` দ্বারা নির্ধারিত। |
| **Word** | ওয়ার্ড | architecture-এর data unit | architecture-dependent concept; size CPU/ISA অনুযায়ী ভিন্ন হতে পারে। |
| **Bit Pattern** | বিট প্যাটার্ন | 0/1-এর arrangement | কোনো value/object-এর underlying bits। |
| **Byte Sequence** | বাইট সিকোয়েন্স | bytes-এর ক্রম | file/network/memory data analysis-এ ব্যবহৃত হয়। |
| **Object Representation** | অবজেক্ট রিপ্রেজেন্টেশন | memory-level representation | object-এর value কোন bytes/bits দিয়ে represent হচ্ছে। |
| **Binary Representation** | বাইনারি রিপ্রেজেন্টেশন | binary form | 0 এবং 1-এর মাধ্যমে value প্রকাশ। |
| **Hexadecimal** | হেক্সাডেসিমাল | base-16 notation | binary data/address সহজে প্রকাশের notation। |
| **Width** | উইডথ | কত bit | register/type/bus/address-এর bit count। |

---

# 🟤 07 — Endianness

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Endianness** | এন্ডিয়াননেস | byte রাখার ক্রম | multi-byte value memory-তে byte order। |
| **Byte Order** | বাইট অর্ডার | byte-এর ক্রম | high-order/low-order byte কোন address-এ থাকবে। |
| **Little-endian** | লিটল-এন্ডিয়ান | low byte আগে | lower memory address-এ least-significant byte। |
| **Big-endian** | বিগ-এন্ডিয়ান | high byte আগে | lower memory address-এ most-significant byte। |
| **Bit Order** | বিট অর্ডার | bit-এর ক্রম | এটি endianness-এর সমার্থক নয়। |

> ⚠️ **Mental Model:**  
> **Endianness = byte order**  
> **Not = bit order**

---

# ⚫ 08 — Compiler & Toolchain

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Preprocessor** | প্রিপ্রসেসর | preprocessing করে | `#include`, `#define`, conditional compilation process করে। |
| **Macro** | ম্যাক্রো | preprocessor definition | preprocessing-এর সময় expand হয়। |
| **Compiler** | কম্পাইলার | source translate করে | C source বিশ্লেষণ করে target representation তৈরি করে। |
| **Compile** | কম্পাইল | source translate করা | source → lower-level representation। |
| **Assembler** | অ্যাসেম্বলার | assembly translate করে | assembly → object code। |
| **Assembly** | অ্যাসেম্বলি | low-level textual code | machine instruction-এর human-readable representation। |
| **Linker** | লিংকার | object/library যুক্ত করে | symbols resolve ও relocation করে final binary তৈরি করে। |
| **Link** | লিংক | combine/resolve করা | object files এবং libraries combine করা। |
| **Loader** | লোডার | executable চালুর জন্য prepare করে | OS/runtime executable memory-তে map/load করে। |
| **Toolchain** | টুলচেইন | development tools-এর সমষ্টি | compiler + assembler + linker + debugger ইত্যাদি। |

---

# 🧩 09 — Compilation Pipeline

| Stage | Input | Output | মূল কাজ |
|---|---|---|---|
| **1. Preprocessing** | `.c` source | preprocessed source | `#include`, `#define`, conditional compilation |
| **2. Compilation** | preprocessed C | assembly/IR/object-related output | syntax/semantic analysis + optimization + code generation |
| **3. Assembly** | assembly | `.o` object file | assembly instructions → machine/object code |
| **4. Linking** | `.o` + libraries | executable/shared library | symbol resolution + relocation |
| **5. Loading** | executable | running process | OS executable memory-তে map/load করে execution শুরু করে |

### Mental Model

```text
source.c
   │
   ▼
Preprocessor
   │
   ▼
preprocessed source
   │
   ▼
Compiler
   │
   ▼
assembly / object-related output
   │
   ▼
Assembler
   │
   ▼
object.o
   │
   ▼
Linker + Libraries
   │
   ▼
Executable
   │
   ▼
Loader / OS
   │
   ▼
Running Process
```

---

# 🟡 10 — ELF / Binary

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **ELF** | ইএলএফ | Executable and Linkable Format | Linux/Unix-এ executable/object/shared library-এর binary format। |
| **Header** | হেডার | metadata অংশ | file সম্পর্কে architecture, size, entry point ইত্যাদি তথ্য। |
| **Section** | সেকশন | logical file অংশ | `.text`, `.data`, `.rodata`, `.bss` ইত্যাদি। |
| **Segment** | সেগমেন্ট | loader-oriented memory region | executable memory mapping-এর জন্য program headers ব্যবহার করে। |
| **`.text`** | ডট টেক্সট | code | সাধারণত executable machine instructions। |
| **`.data`** | ডট ডেটা | initialized writable data | initialized global/static writable objects। |
| **`.bss`** | ডট বিএসএস | zero-initialized static data | zero-initialized/uninitialized static storage-এর জন্য সাধারণ section। |
| **`.rodata`** | ডট আর-ও-ডেটা | read-only data | string literals ইত্যাদি রাখতে পারে। |
| **Symbol** | সিম্বল | named entity | function/object-এর linker-level নাম। |
| **Symbol Table** | সিম্বল টেবিল | symbols-এর তথ্য | symbol names, addresses/bindings ইত্যাদি। |
| **Relocation** | রিলোকেশন | address ঠিক করা | linking/loading-এর সময় address-dependent references adjust করা। |

---

# 🚨 11 — C Standard & Behavior

| Term | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Defined Behavior** | ডিফাইন্ড বিহেভিয়ার | behavior নির্ধারিত | Standard-এর rules অনুযায়ী behavior নির্ধারণ করা যায়। |
| **Undefined Behavior** | আনডিফাইন্ড বিহেভিয়ার | কোনো requirement নেই | Standard কোনো behavior impose করে না। |
| **Unspecified Behavior** | আনস্পেসিফাইড | একাধিক valid choice | implementation choice নিতে পারে; document করা বাধ্যতামূলক নয়। |
| **Implementation-defined** | ইমপ্লিমেন্টেশন-ডিফাইন্ড | implementation choice + documentation | Standard choice দেয় এবং implementation chosen behavior document করে। |
| **Indeterminate Value** | ইন্ডিটারমিনেট | নির্দিষ্ট value নয় | object-এর value নির্দিষ্টভাবে determined নয়। |
| **Portable** | পোর্টেবল | বিভিন্ন system-এ ব্যবহারযোগ্য | implementation-specific assumption কম। |
| **Non-portable** | নন-পোর্টেবল | নির্দিষ্ট system নির্ভর | compiler/CPU/OS/ABI-specific behavior-এর ওপর নির্ভরশীল। |

### ⭐ সবচেয়ে গুরুত্বপূর্ণ পার্থক্য

| Term | মনে রাখার shortcut |
|---|---|
| **Undefined** | 🚫 Standard কোনো requirement দেয় না |
| **Unspecified** | 🎲 কয়েকটি valid option-এর যেকোনোটি |
| **Implementation-defined** | 🏭 implementation choose করে + document করে |
| **Indeterminate** | ❓ value নির্দিষ্ট নয় |

---

# 🔵 12 — CPU / Architecture

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Architecture** | আর্কিটেকচার | CPU/system-এর design | CPU, memory, instruction, register ইত্যাদির organization। |
| **ISA** | আই-এস-এ | Instruction Set Architecture | software ↔ CPU instruction-level interface। |
| **Instruction** | ইনস্ট্রাকশন | CPU operation | CPU যে operation execute করে। |
| **Instruction Set** | ইনস্ট্রাকশন সেট | supported instructions | একটি ISA-এর সব supported instruction-এর collection। |
| **Register** | রেজিস্টার | CPU-এর দ্রুত storage | execution-এর সময় data/address/state রাখে। |
| **Load** | লোড | memory → register | memory থেকে register-এ data আনা। |
| **Store** | স্টোর | register → memory | register থেকে memory-তে data লেখা। |
| **Execution** | এক্সিকিউশন | instruction চালানো | CPU instruction execute করা। |
| **Calling Convention** | কলিং কনভেনশন | function call-এর binary নিয়ম | arguments, return value, registers ইত্যাদির convention। |
| **ABI** | এ-বি-আই | binary interface | compiled components-এর মধ্যে binary-level contract। |

---

# 🖥️ 13 — Operating System

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Kernel** | কার্নেল | OS-এর core | hardware/resources manage করে। |
| **Process** | প্রসেস | running program instance | নিজস্ব virtual address space ও resources-এর execution instance। |
| **Thread** | থ্রেড | execution flow | process-এর ভিতরের schedulable execution flow। |
| **Scheduler** | শিডিউলার | কে কখন চলবে ঠিক করে | runnable execution units-এর মধ্যে scheduling decision নেয়। |
| **Context Switch** | কনটেক্সট সুইচ | execution বদলানো | CPU state save/restore করে অন্য thread/process চালানো। |
| **Interrupt** | ইন্টারাপ্ট | CPU attention event | hardware/software event CPU-কে attention দিতে পারে। |
| **System Call** | সিস্টেম কল | kernel service request | user-space থেকে kernel service নেওয়ার interface। |
| **Virtual Memory** | ভার্চুয়াল মেমোরি | logical memory abstraction | process-কে virtual address space প্রদান করে। |
| **Address Space** | অ্যাড্রেস স্পেস | ব্যবহারযোগ্য address range | process যে virtual addresses ব্যবহার করতে পারে। |
| **MMU** | এম-এম-ইউ | memory translation hardware | virtual → physical address translation/protection। |
| **Privilege** | প্রিভিলেজ | access ক্ষমতা | কোন operation করা যাবে তার privilege level। |
| **Protection** | প্রোটেকশন | unauthorized access আটকানো | resource isolation/security mechanism। |

---

# ⚙️ 14 — Embedded / Bare-metal

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Bare-metal** | বেয়ার-মেটাল | OS ছাড়া hardware-এর ওপর software | সরাসরি CPU/peripheral control। |
| **Boot** | বুট | system startup | reset/power-on থেকে initial execution। |
| **Bootloader** | বুটলোডার | startup loader | firmware/application/OS image load বা initialize করে। |
| **Firmware** | ফার্মওয়্যার | hardware-control software | device-এর low-level software। |
| **HAL** | এইচ-এ-এল | hardware abstraction | hardware-specific detail hide করে interface দেয়। |
| **Peripheral** | পেরিফেরাল | CPU-এর attached hardware | UART, GPIO, timer, SPI, ADC ইত্যাদি। |
| **GPIO** | জি-পিআই-ও | digital input/output | hardware pin control। |
| **UART** | ইউ-এ-আর-টি | serial communication hardware | asynchronous serial communication। |
| **RTOS** | আর-টস | real-time OS | deadline/predictability প্রয়োজন এমন system-এর জন্য। |
| **Real-time** | রিয়েল-টাইম | timing requirement-based | শুধু fast নয়; নির্দিষ্ট deadline-এর মধ্যে predictable response। |
| **Microcontroller** | মাইক্রোকন্ট্রোলার | ছোট single-chip computer | CPU + memory + peripherals এক chip-এ। |
| **SoC** | এস-ও-সি | System on Chip | অনেক system component এক chip-এ integrated। |

---

# 🧪 15 — Debugging & Analysis

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Debug** | ডিবাগ | bug ঠিক করা | program-এর ভুলের কারণ খুঁজে সমাধান করা। |
| **Trace** | ট্রেস | execution অনুসরণ করা | function/instruction/data flow অনুসরণ করা। |
| **Inspect** | ইনস্পেক্ট | ভিতরের অবস্থা দেখা | memory/register/variable examine করা। |
| **Probe** | প্রোব | নির্দিষ্ট point পরীক্ষা | hardware/software-এর specific point inspect করা। |
| **Reproduce** | রিপ্রোডিউস | একই bug আবার ঘটানো | bug-এর condition নিশ্চিত করা। |
| **Hypothesis** | হাইপোথিসিস | সম্ভাব্য কারণ | bug-এর সম্ভাব্য explanation। |
| **Verify** | ভেরিফাই | সত্য কিনা যাচাই | hypothesis/result-এর correctness পরীক্ষা। |
| **Validate** | ভ্যালিডেট | requirement পূরণ করছে কিনা | system expected requirement পূরণ করছে কিনা। |
| **Measure** | মেজার | পরিমাপ করা | time, memory, bandwidth ইত্যাদি quantify করা। |
| **Benchmark** | বেঞ্চমার্ক | performance পরীক্ষা | নির্দিষ্ট workload দিয়ে performance measure করা। |

---

# 🔄 16 — Concurrency

| English | বাংলা উচ্চারণ | সহজ বাংলা অর্থ | Technical Context |
|---|---|---|---|
| **Sequential** | সিকোয়েনশিয়াল | একের পর এক | operations নির্দিষ্ট ক্রমে execute করা। |
| **Concurrent** | কনকারেন্ট | একই সময়ে progress করা | একাধিক execution flow একই সময়ের মধ্যে progress করতে পারে। |
| **Parallel** | প্যারালাল | সত্যিই একই সময়ে চলা | multiple CPU/core-এ execution simultaneously হতে পারে। |
| **Synchronous** | সিঙ্ক্রোনাস | অপেক্ষা/সমন্বিত timing | caller operation-এর completion-এর সঙ্গে directly coordinated হতে পারে। |
| **Asynchronous** | অ্যাসিঙ্ক্রোনাস | পরে result/event | caller-কে operation শেষ হওয়া পর্যন্ত একই flow-তে wait করতে নাও হতে পারে। |
| **Race Condition** | রেস কন্ডিশন | timing-এর ওপর result নির্ভর করা | shared state access-এর ordering-এর কারণে unexpected result। |
| **Synchronization** | সিঙ্ক্রোনাইজেশন | execution coordinate করা | multiple execution flow-এর access/order control করা। |
| **Atomic** | অ্যাটমিক | মাঝপথে ভাঙে না এমন operation | concurrency context-এ indivisible/atomic operation। |
| **Mutex** | মিউটেক্স | mutual exclusion lock | একই সময়ে একটি execution flow-কে critical section access দিতে পারে। |
| **Deadlock** | ডেডলক | সবাই অপেক্ষায় আটকে থাকা | একাধিক thread/process পরস্পরের resource-এর জন্য অপেক্ষা করে progress বন্ধ করে। |

---

# 🧭 তোমার C/System Programming Learning-এর জন্য Priority

সব শব্দ সমান গুরুত্বপূর্ণ নয়। আমি শেখার সময় এই priority রাখব:

| Priority | Topic | কেন |
|---|---|---|
| 🔴 **P0** | Object, Value, Type | C-এর memory model বোঝার foundation |
| 🔴 **P0** | Address, Pointer, Dereference | system programming-এর core |
| 🔴 **P0** | Declaration, Definition | C code বুঝতে অপরিহার্য |
| 🔴 **P0** | Scope, Lifetime, Storage Duration | variable আসলে কতক্ষণ/কোথায় থাকে বুঝতে |
| 🔴 **P0** | Alignment, Padding | memory layout বোঝার জন্য |
| 🔴 **P0** | Representation, Byte, Word | raw memory analysis-এর foundation |
| 🔴 **P0** | Endianness | multi-byte memory analysis |
| 🔴 **P0** | UB / Unspecified / Implementation-defined | production-grade C-এর জন্য অত্যন্ত গুরুত্বপূর্ণ |
| 🟠 **P1** | Compiler Pipeline | source থেকে executable কীভাবে হয় |
| 🟠 **P1** | ELF / `.text` / `.data` / `.bss` | binary এবং memory layout |
| 🟠 **P1** | Register / Load / Store | C → Assembly connection |
| 🟠 **P1** | ABI / Calling Convention | low-level function call বোঝার জন্য |
| 🟡 **P2** | Process / Thread | OS-level programming |
| 🟡 **P2** | Virtual Memory / MMU | OS + architecture |
| 🟡 **P2** | Interrupt / Scheduler | embedded + OS |
| 🟢 **P3** | RTOS / HAL / Peripheral | ESP8266/embedded systems |
| 🟢 **P3** | Concurrency | advanced systems programming |

---

## 🧠 পুরো Vocabulary-টার মূল Mental Map

```text
                    COMPUTER SYSTEM
                           │
          ┌────────────────┼────────────────┐
          │                │                │
        C Language       Compiler           OS
          │                │                │
      Type/Object      Translation       Process/Thread
          │                │                │
      Pointer/Memory    Object File       Virtual Memory
          │                │                │
 Representation         ELF/ABI          Kernel
          │                │                │
     Byte/Endian       Machine Code      Scheduler
          │                │                │
      Alignment        CPU/ISA          Interrupt
          │                │                │
       Padding       Register           System Call
          │                │
          └───────────────┼────────────────┘
                          │
                     Hardware
                          │
                CPU / RAM / Peripheral
                          │
                 Embedded / Bare-metal
```

**এটাই আমি তোমার জন্য vocabulary-এর master organization হিসেবে রাখব।** এতে তুমি কোনো নতুন technical শব্দ পেলে সেটাকে random list-এ না রেখে **C → Memory → Compiler → CPU → OS → Embedded** এই hierarchy-র মধ্যে বসাতে পারবে। 🔥