# Experiment 01 — Variable Order, Memory Address, Alignment & Padding

## Objective

এই experiment-এর উদ্দেশ্য হলো local variable-এর **size, memory address, alignment এবং padding**-এর মধ্যে সম্পর্ক observe করা।

> **Important:** C standard local variable-গুলোর exact stack memory order guarantee করে না। এখানে আমরা একটি নির্দিষ্ট compiler/architecture/ABI/optimization environment-এ পাওয়া **observed behavior** বিশ্লেষণ করছি।

---

# Experiment 01 — Unordered Variable Declaration

### Source

```c
int num = 1;
char c = 'A';
double pi = 3.1416;
```

### Observed Memory Layout

```text
0x7ffe6a88e7b0   --> double (pi)
0x7ffe6a88e7b1
0x7ffe6a88e7b2
0x7ffe6a88e7b3
0x7ffe6a88e7b4
0x7ffe6a88e7b5
0x7ffe6a88e7b6
0x7ffe6a88e7b7   <-- end double

0x7ffe6a88e7b8   --> int (num)
0x7ffe6a88e7b9
0x7ffe6a88e7ba
0x7ffe6a88e7bb   <-- end int

0x7ffe6a88e7bc   --> padding
0x7ffe6a88e7bd   --> padding
0x7ffe6a88e7be   --> padding

0x7ffe6a88e7bf   --> char (c)
```

## What We Observe

এখানে `double` 8 bytes, `int` 4 bytes এবং `char` 1 byte।

`double` এবং `int` তাদের alignment requirement অনুযায়ী aligned address-এ রাখা হয়েছে। `char`-কে পরের address-এ রাখার আগে 3 bytes unused space দেখা যাচ্ছে। এই unused space-কে এখানে **padding** হিসেবে observe করা হয়েছে।

```text
Double:  8 bytes
Int:     4 bytes
Padding: 3 bytes
Char:    1 byte
```

---

# Experiment 02 — Large to Small Ordering

এবার variable declaration-গুলো **বড় size থেকে ছোট size** অনুযায়ী সাজানো হয়েছে।

### Source

```c
#include <stdio.h>

int main(void)
{
    long long int big = 1203721073091397123;
    double pi = 3.1416;
    int num = 1;
    float money = 10.45f;
    char c = 'A';

    printf("%p\n", (void *)&c);
    printf("%p\n", (void *)&money);
    printf("%p\n", (void *)&num);
    printf("%p\n", (void *)&pi);
    printf("%p\n", (void *)&big);
}
```

### Output

```text
0x7ffc4b4026c7
0x7ffc4b4026c8
0x7ffc4b4026cc
0x7ffc4b4026d0
0x7ffc4b4026d8
```

### Address Mapping

```text
0x7ffc4b4026c7   --> char (c)

0x7ffc4b4026c8   --> float (money)
0x7ffc4b4026c9
0x7ffc4b4026ca
0x7ffc4b4026cb   <-- end float

0x7ffc4b4026cc   --> int (num)
0x7ffc4b4026cd
0x7ffc4b4026ce
0x7ffc4b4026cf   <-- end int

0x7ffc4b4026d0   --> double (pi)
0x7ffc4b4026d1
0x7ffc4b4026d2
0x7ffc4b4026d3
0x7ffc4b4026d4
0x7ffc4b4026d5
0x7ffc4b4026d6
0x7ffc4b4026d7   <-- end double

0x7ffc4b4026d8   --> long long int (big)
0x7ffc4b4026d9
0x7ffc4b4026da
0x7ffc4b4026db
0x7ffc4b4026dc
0x7ffc4b4026dd
0x7ffc4b4026de
0x7ffc4b4026df   <-- end long long
```

### Visualized by Size

```text
Address ↑

0x...6d8  ┌────────────────────────┐
          │ long long : 8 bytes    │
0x...6df  └────────────────────────┘

0x...6d0  ┌────────────────────────┐
          │ double    : 8 bytes    │
0x...6d7  └────────────────────────┘

0x...6cc  ┌────────────────┐
          │ int : 4 bytes  │
0x...6cf  └────────────────┘

0x...6c8  ┌────────────────┐
          │ float : 4 bytes│
0x...6cb  └────────────────┘

0x...6c7  ┌────────┐
          │ char   │
          │ 1 byte │
          └────────┘
```

এখানে **কোনো obvious padding gap দেখা যাচ্ছে না**। Address-গুলো প্রত্যেক object-এর size অনুযায়ী ধারাবাহিকভাবে এগিয়েছে।

---

# Main Observation

দুইটি experiment তুলনা করলে একটি interesting pattern দেখা যায়:

### Experiment 01

```text
Observed:

[ double 8 ]
[ int    4 ]
[ padding 3 ]
[ char   1 ]
```

এখানে padding দেখা গেছে।

### Experiment 02

```text
Observed:

[ char       1 ]
[ float      4 ]
[ int        4 ]
[ double     8 ]
[ long long  8 ]
```

এখানে কোনো obvious padding gap দেখা যায়নি।

অর্থাৎ এই particular layout-এ variable-গুলোকে বড় size/alignment requirement থেকে ছোট দিকে arrange করার কারণে **padding কম বা শূন্য হতে পারে**।

---

# Why Does Alignment Matter?

প্রতিটি data type-এর একটি alignment requirement থাকতে পারে। উদাহরণ হিসেবে সাধারণ x86-64 environment-এ প্রায়ই দেখা যায়:

```text
char       → 1-byte alignment
int        → 4-byte alignment
float      → 4-byte alignment
double     → 8-byte alignment
long long  → 8-byte alignment
```

Compiler object-গুলো এমন address-এ রাখতে চেষ্টা করে যাতে তাদের alignment requirement satisfy হয়। Alignment maintain করতে প্রয়োজন হলে মাঝখানে unused bytes যোগ হতে পারে — সেটাই padding।

---

# Important Correction / Limitation

এই experiment থেকে **এটা বলা যাবে না** যে:

```text
Large → Small
      ↓
Always less padding
```

এটা C language-এর কোনো universal rule নয়।

বরং precise conclusion হলো:

> **কিছু layout-এর ক্ষেত্রে variable-গুলো বড় size/alignment requirement থেকে ছোট দিকে সাজালে padding কম হতে পারে।**

Local variables-এর actual arrangement নির্ভর করতে পারে:

- Compiler
- Optimization level (`-O0`, `-O2`, etc.)
- Target architecture
- ABI
- Stack-frame layout
- Register allocation
- Compiler optimization decisions

Compiler চাইলে কোনো local variable stack-এর বদলে register-এও রাখতে পারে, অথবা source declaration order-এর সাথে না মিলিয়ে অন্যভাবে layout করতে পারে।

---

# Most Important Mental Model

```text
C source code
     ↓
Compiler
     ↓
Optimization
     ↓
ABI + Architecture constraints
     ↓
Stack / Register allocation
     ↓
Actual memory addresses
```

তাই:

```text
Variable declaration order
        ≠
Guaranteed memory order
```

এবং:

```text
Alignment = object কোন address-এ শুরু হওয়া উচিত তার requirement

Padding   = alignment/layout satisfy করতে ব্যবহৃত unused space
```

---

# Next Experiment

এই experiment-কে আরও strong করার জন্য একই program তিনভাবে compare করা যেতে পারে:

```bash
gcc -O0 experiment.c -o experiment_O0

gcc -O2 experiment.c -o experiment_O2

gcc -O3 experiment.c -o experiment_O3
```

তারপর প্রতিটির address compare করলে দেখা যাবে optimization level local variable layout-কে কীভাবে প্রভাবিত করতে পারে।

### Experiment Update — Optimization Levels & Memory Pattern

এই experiment-এ একই C program বিভিন্ন GCC optimization level দিয়ে compile করে local variable-গুলোর memory address compare করা হয়েছে।

```bash
gcc -O0 03.c -o 03_exp
gcc -O2 03.c -o 03_exp
gcc -O3 03.c -o 03_exp
gcc -Os 03.c -fno-omit-frame-pointer -o 03_exp6
```

### Observation

সবগুলো build-এই observed memory pattern একই ছিল:

```text
char
 ↓
float
 ↓
int
 ↓
double
 ↓
long long
```

এবং কোনো **visible padding gap** পাওয়া যায়নি।

```text
-O0 → same pattern
-O2 → same pattern
-O3 → same pattern
-Os → same pattern
```

### Important Conclusion

Optimization level পরিবর্তন করলেও এই নির্দিষ্ট program, compiler, architecture, ABI এবং build configuration-এ local variable-এর observed layout পরিবর্তন হয়নি।

এর মানে:

```text
-O0 / -O2 / -O3 / -Os
          ↓
same observed stack layout
          ↓
no visible padding gap
```

তবে এটাকে C-এর universal rule হিসেবে ধরা যাবে না। Local variable-এর exact memory layout compiler implementation, target architecture, ABI এবং optimization-এর উপর নির্ভরশীল।

> **Source declaration order এবং actual local-variable memory layout একই জিনিস নয়।**

এই experiment থেকে আরও একটি গুরুত্বপূর্ণ observation পাওয়া গেছে: **optimization থাকলেই variable layout অবশ্যই বদলাবে—এমনও নয়।**

## Next Leason 
### পরবর্তীতে আমরা শিখব:
```
_Alignof (C11)
_Alignas
alignas
packed
__attribute__((aligned))
```
এখন এগুলো শুধু নাম হিসেবে মনে রাখলেই যথেষ্ট।