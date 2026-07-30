            main.c
               │
               ▼
      ┌────────────────┐
      │ Preprocessor   │
      │ Text Processor │
      └────────────────┘
               │
               ▼
            main.i
               │
               ▼
      ┌────────────────┐
      │   Compiler     │
      │ Understands C  │
      │ Checks Syntax  │
      │ Checks Types   │
      │ Generates ASM  │
      └────────────────┘
               │
               ▼
            main.s

---

## আজ থেকে আমার C language কে এই ভাবে দেখব ।

        main.i
           │
           ▼
        Compiler

     ১. C Language বুঝে

     ২. Syntax Check করে

     ৩. Type Check করে

     ৪. Optimization করতে পারে

     ৫. Assembly তৈরি করে
            │
            ▼
         main.s

---

## কম্পাইলার এই ভাবে চিন্তা করে যখন কোড Static হয় ।

         Compiler

         ↓

         printf("Hello\n")

         ↓

         এইখানে কি Formatting লাগছে?

         ↓

         না

         ↓

         puts() ব্যবহার করলে Output একই থাকবে?

         ↓

         হ্যাঁ

         ↓

         তাহলে puts ব্যবহার করো।