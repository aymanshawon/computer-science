# C Programming & System Programming Learning Roadmap

> Goal:
> Learn C deeply—not just syntax, but memory, compilation, system programming,
> and how computers actually execute programs.

---

# Phase 0 — Toolchain Fundamentals (Current)

## Module 01: Compilation Pipeline

### Lesson 01 — Preprocessor ✅
- What is the Preprocessor?
- #include
- #define
- Macros
- Header file expansion
- Conditional compilation
- Generate `.i` file
- Experiments

### Lesson 02 — Compiler ✅
- What is a Compiler?
- `.i` → `.s`
- Assembly basics
- Compiler optimization
- `printf()` vs `puts()`
- Reading generated assembly

### Lesson 03 — Assembler ⏳
- What is Assembly?
- `.s` → `.o`
- Object file
- Machine code
- Why object files exist

### Lesson 04 — Linker ⏳
- Multiple object files
- Static linking
- Dynamic linking
- Symbols
- Undefined references
- Libraries
- Executable generation

### Lesson 05 — Loader ⏳
- Executable loading
- Process creation
- Memory layout
- Program startup

---

# Phase 1 — Core C Programming

## Module 02: C Language Fundamentals

### Variables
- Variable declaration
- Initialization
- Lifetime
- Scope

### Data Types
- int
- char
- float
- double
- bool
- sizeof()

### Operators
- Arithmetic
- Relational
- Logical
- Bitwise
- Assignment
- Increment / Decrement

### Control Flow
- if
- switch
- while
- do while
- for
- break
- continue
- goto

### Functions
- Declaration
- Definition
- Parameters
- Return values
- Recursion

---

## Module 03 — Memory

- Stack
- Heap
- Static Memory
- Read-only Memory
- Process Memory Layout
- Memory Alignment

---

## Module 04 — Arrays & Strings

- Arrays
- Multi-dimensional Arrays
- Strings
- Character Arrays
- String Library

---

## Module 05 — Pointers (Very Important)

- Address
- Pointer
- Pointer Arithmetic
- Pointer to Pointer
- Array vs Pointer
- Function Pointer
- Void Pointer

---

## Module 06 — User Defined Types

### struct
- Why struct exists
- Memory layout
- Padding
- Alignment
- Nested struct

### typedef
- Why typedef exists
- Aliasing
- Real-world use cases
- Linux examples

### enum
- Why enum exists
- State machines
- Embedded examples

### union
- Shared memory
- Real use cases

---

## Module 07 — Storage Classes

- auto
- static
- extern
- register

---

## Module 08 — Qualifiers

- const
- volatile
- restrict

---

## Module 09 — Dynamic Memory

- malloc()
- calloc()
- realloc()
- free()
- Memory leaks
- Dangling pointers

---

## Module 10 — File Handling

- fopen()
- fclose()
- fread()
- fwrite()
- fprintf()
- fscanf()

---

# Phase 2 — Intermediate C

- Header Files
- Modular Programming
- Multiple Source Files
- Static Library
- Shared Library
- Makefile
- CMake

---

# Phase 3 — Compiler Internals

- Lexer
- Token
- Parser
- AST
- Semantic Analysis
- Intermediate Representation
- Optimization
- Code Generation

---

# Phase 4 — System Programming

- ELF Format
- Linux Loader
- Process
- Threads
- Signals
- Virtual Memory
- mmap()
- System Calls

---

# Phase 5 — Computer Architecture

- CPU
- Registers
- Cache
- Stack
- Calling Convention
- ABI
- Assembly Language

---

# Phase 6 — Advanced Topics

- Undefined Behavior
- Optimization
- Debugging
- GDB
- Valgrind
- Sanitizers

---

# Phase 7 — Projects

- Mini libc
- Shell
- Memory Allocator
- HTTP Server
- Multi-threaded Server
- Mini Database