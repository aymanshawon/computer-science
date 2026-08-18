# Experiments — Lesson 01: Preprocessor (`gcc -E`)

> **Goal:** নিজের চোখে দেখা যে Preprocessor আসলে কী করে।

---

# Experiment 01 — Generate the Preprocessed File

## Objective

`main.c` থেকে `main.i` তৈরি করা।

## Command

```bash
gcc -E main.c -o main.i
```

## Expected Output

একটি নতুন File তৈরি হবে:

```text
main.i
```

## Observation

* `main.i` অনেক বড় হবে।
* কারণ Header File-এর Content এতে যোগ হয়ে গেছে।
* Source Code এখনও C Code-ই আছে।

## Conclusion

Preprocessor Source Code-কে Expand করে একটি নতুন C Source File তৈরি করে।

---

# Experiment 02 — Compare File Size

## Objective

`main.c` এবং `main.i`-এর পার্থক্য দেখা।

## Command

```bash
wc -l main.c main.i
```

## Expected Observation

```text
main.c     → খুব কম Line
main.i     → অনেক বেশি Line
```

## Why?

কারণ `stdio.h`-এর Content যোগ হয়েছে।

## Conclusion

Header File Expand হওয়ার কারণে `main.i` অনেক বড় হয়।

---

# Experiment 03 — Search for printf()

## Objective

দেখা যে `printf()` কোথা থেকে এসেছে।

## Command

```bash
grep -n "printf" main.i
```

## Observation

`printf()`-এর Declaration `main.i`-এর মধ্যে পাওয়া যাবে।

## Conclusion

`printf()` Compiler-এর Built-in Function নয়।

এটি `stdio.h` Header থেকে এসেছে।

---

# Experiment 04 — Verify #define Expansion

ধরি Program-এ আছে:

```c
#define PI 3.1416
```

এবং

```c
printf("%f\n", PI);
```

## Command

```bash
grep -n "3.1416" main.i
```

## Observation

`PI` আর থাকবে না।

তার জায়গায় `3.1416` থাকবে।

## Conclusion

`#define` শুধু Text Replace করে।

---

# Experiment 05 — View the Beginning of main.i

## Command

```bash
head -50 main.i
```

## Observation

অনেক Comment এবং Header-এর Code দেখা যাবে।

নিজের লেখা Code হয়তো অনেক নিচে থাকবে।

## Conclusion

Preprocessor প্রথমে Header Expand করে, তারপর আমাদের Code রাখে।

---

# Experiment 06 — Macro Expansion

Program

```c
#define SQUARE(x) ((x) * (x))

int result = SQUARE(5);
```

## Preprocessor-এর পরে

```c
int result = ((5) * (5));
```

## Observation

Function Call হয়নি।

শুধু Text Replace হয়েছে।

## Conclusion

Macro কোনো Function নয়।

---

# Experiment 07 — Dangerous Macro

Program

```c
int i = 5;

int result = SQUARE(i++);
```

Expansion

```c
((i++) * (i++))
```

## Observation

একই Variable এক Expression-এ দুইবার Modify হচ্ছে।

## Conclusion

এটি **Undefined Behavior**।

---

# Commands Learned Today

```bash
gcc -E main.c -o main.i
```

```bash
head -50 main.i
```

```bash
grep -n "printf" main.i
```

```bash
grep -n "3.1416" main.i
```

```bash
wc -l main.c main.i
```

---

# Today's Learning

আজ আমি নিজের চোখে দেখেছি যে—

* `#include` Expand হয়।
* `#define` Replace হয়।
* `main.i` এখনও C Source Code।
* Macro Function নয়।
* Preprocessor কোনো Code Execute করে না।

---

# Final Observation

> **আমি বুঝতে পেরেছি যে Preprocessor-এর কাজ হলো Source Code-কে Compile করার জন্য প্রস্তুত করা, Compile করা নয়।**
