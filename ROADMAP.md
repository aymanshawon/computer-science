# 🗺️ ROADMAP — বড় ছবি

> লক্ষ্য: **C → Compiler → Machine Code → CPU → Memory → OS**
> প্রতিটা phase-এর শেষে একটা **ছোট project** — শুধু observe না, build করব।
> Current position: [MASTER.md §3](MASTER.md#3-current-state-এখন-কোথায়) · Step by step: [LESSON_PLAN.md](LESSON_PLAN.md)

```text
Phase 0 Toolchain ──► Phase 1 Data Repr ──► Phase 2 Operators/Control ──► Phase 3 Functions & Stack
   📍 এখানে                                                                         │
Phase 7 Compiler/ABI ◄── Phase 6 Struct/Union ◄── Phase 5 Dynamic Memory ◄── Phase 4 Arrays & Pointers
   │
   ▼
Phase 8 Linux System Prog ──► Phase 9 Virtual Memory/OS ──► Phase 10 CPU/Perf ──► Phase 11 Concurrency ──► Phase 12 OS/Embedded Projects
```

| Phase | Topics | Repo folder | শেষে Project |
|---|---|---|---|
| **0 Toolchain** 📍 | Preprocessor ✅, Compiler ✅, **Assembler**, Linker (static/dynamic, symbols), Loader (process, memory layout, ASLR) | `01_C_Programming/Module-01` | হাতে হাতে ২-file program build: `.c→.i→.s→.o→exe`, `nm`/`readelf` দিয়ে explain |
| **1 Data Representation** | sizeof, `_Alignof`, alignment vs padding, object representation, binary/hex, signed/unsigned, two's complement, overflow, integer promotions & usual arithmetic conversions, float (IEEE 754), endianness, casting | `Module-02/02_DataType` | Byte-dumper: যেকোনো variable-এর bytes hex-এ print |
| **2 Operators & Control** | arithmetic, bitwise (`& \| ^ ~ << >>`), precedence, if/switch/loops, `goto` | `Module-02` | Bit-flag permission system (ESP8266 GPIO-র প্রস্তুতি) |
| **3 Functions & Stack** | declaration/definition, params, return, recursion, stack frame, `static`, scope/lifetime | `Module-02` → `Module-03_Memory` | `objdump` দিয়ে recursion-এর stack frame trace |
| **4 Arrays & Pointers** | array = contiguous objects (প্রতিটা `&arr[i]` print → element size ↔ pointer arithmetic), pointer type, dereference, arithmetic, NULL, invalid pointer, array vs pointer, `char*` strings, ptr-to-ptr, `void*`, function pointer | `Module-04_Pointers` | নিজের `strlen/strcpy/memcpy` |
| **5 Dynamic Memory** | heap, `malloc/free`, leak, use-after-free, valgrind, ASan | `Module-03_Memory` | Dynamic array (vector) |
| **6 Struct/Union/Enum** | layout, padding, `offsetof`, `typedef`, `enum`, `const`, bitfield, header files, multi-file | `Module-05_DataStructures` | Linked list + stack + queue, multi-file + Makefile |
| **7 Compiler & ABI** | optimization, IR, relocation, shared libraries, debug info · **System V AMD64 ABI:** argument/return registers, caller/callee-saved, prologue/epilogue, stack alignment, frame pointer, red zone · inline asm basics | `05_Assembly` | C function ↔ assembly function call |
| **8 Linux System Prog** | syscalls, file I/O, `fork/exec`, signals, pipes | `Module-06` + `02_Linux` | Mini shell |
| **9 Virtual Memory / OS** | process, page table, MMU, scheduler, `mmap` | `03_Operating_System` | Simple allocator (`my_malloc`) |
| **10 CPU / Performance** | cache, branch prediction, `perf` | `04_Computer_Architecture` | Cache-friendly vs unfriendly benchmark |
| **11 Concurrency** | threads, race, mutex, atomics | `03_Operating_System` | Thread-safe queue |
| **12 Projects** | bare-metal ESP8266, RTOS, tiny kernel | `10_Embedded`, `11_Projects` | Bootable toy kernel / ESP8266 firmware |

**Rule:** phase skip হবে না। প্রতিটা phase-এর project শেষ = phase শেষ।

**Project ladder (ক্রমান্বয়ে কঠিন):** dynamic array → string library subset → hash table → linked list/tree → custom allocator →
mini shell → file utility → process supervisor → thread pool → TCP server → event-driven server → ESP8266 project

---

## 📚 Full Topic Checklist

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
