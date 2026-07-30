# Mental Model — Lesson 01: Preprocessor

> **Think Like the Compiler**

---

# The Big Picture

```text
               Human
                 │
                 ▼
            Write C Code
                 │
                 ▼
              main.c
                 │
                 ▼
        ┌────────────────┐
        │ Preprocessor   │
        │ (Text Processor)│
        └────────────────┘
                 │
                 ▼
              main.i
                 │
                 ▼
        ┌────────────────┐
        │   Compiler     │
        └────────────────┘
                 │
                 ▼
              main.s
                 │
                 ▼
        ┌────────────────┐
        │   Assembler    │
        └────────────────┘
                 │
                 ▼
              main.o
                 │
                 ▼
        ┌────────────────┐
        │    Linker      │
        └────────────────┘
                 │
                 ▼
            Executable
                 │
                 ▼
                CPU
```

---

# What the Preprocessor Does

```text
main.c
   │
   ▼
Read Source Code
   │
   ▼
Process #include
   │
   ▼
Process #define
   │
   ▼
Expand Macros
   │
   ▼
Remove Comments
   │
   ▼
Generate main.i
```

---

# `#include` Mental Model

Before:

```c
#include <stdio.h>

int main(void)
{
    printf("Hello\n");
}
```

Conceptually:

```text
┌──────────────┐
│ stdio.h      │
└──────────────┘
        │
        ▼
Inserted Here
```

After Preprocessing:

```text
/* stdio.h content */

int main(void)
{
    printf("Hello\n");
}
```

**Remember:** `#include` মানে "লিংক করা" নয়, **Content Expand করা**।

---

# `#define` Mental Model

Before:

```c
#define PI 3.1416

printf("%f", PI);
```

Preprocessor:

```text
PI
 │
 ▼
3.1416
```

After:

```c
printf("%f", 3.1416);
```

**Remember:** `#define` = Text Replacement.

---

# Macro Mental Model

Macro:

```c
#define SQUARE(x) ((x) * (x))
```

Call:

```c
SQUARE(5)
```

Expansion:

```c
((5) * (5))
```

No Function Call.

No Stack.

No Return.

Only Text Expansion.

---

# Dangerous Macro

```c
SQUARE(i++)
```

Expansion:

```c
((i++) * (i++))
```

⚠️ Same variable modified multiple times in one expression.

Result:

```text
Undefined Behavior
```

---

# What the Preprocessor Knows

```text
Source Code
✓

Characters
✓

Words
✓

Lines
✓
```

---

# What the Preprocessor Does NOT Know

```text
Variable Values
✗

Memory
✗

CPU
✗

Runtime
✗

Pointers
✗

Function Calls
✗
```

---

# One-Line Memory Trick

```text
Preprocessor

=

Smart Text Editor

NOT

Compiler
```

---

# Final Mental Model

```text
Source Code
      │
      ▼
Preprocessor
(Text Processing)
      │
      ▼
Expanded Source Code
(main.i)
      │
      ▼
Compiler
(C Language)
      │
      ▼
Assembly
      │
      ▼
Machine Code
      │
      ▼
CPU
```

---

# Remember Forever

> **The Preprocessor never executes code. It only rewrites the source code before compilation begins.**
