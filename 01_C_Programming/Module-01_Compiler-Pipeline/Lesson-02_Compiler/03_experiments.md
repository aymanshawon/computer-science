## Experiment 

এই খানে আমরা দেখব যে কোড টা অপটিমাইজ হবে কিনা । এইটার আউটপুট কি আসবে তা দেখার জন্য 

```c
#include <stdio.h>

int main(void)
{
    printf("Hello");
    return 0;
}
```
এর পরে আমরা Terminal এইভাবে Optimize করে দেখব কি হচ্ছে ।
```sh
gcc -S -O2 main.c -o main.s
```
--- 
## Optimized 
আমি `Optimized` করে দেখলাম যে এই খানে অনেক গুলা কোড কমে গেছে এই খানে আমি `diffrance` গুল দেখলাম এই খানে কি যুক্ত হইসে আর কি রিমুভ হইসে তা দেখলাম 

```diff
--- main_O0.s   2026-07-29 11:26:34.653256577 +0600
+++ main_O2.s   2026-07-29 11:27:15.321258255 +0600
@@ -1,28 +1,25 @@
        .file   "main.c"
        .text
-       .section        .rodata
+       .section        .rodata.str1.1,"aMS",@progbits,1
 .LC0:
        .string "Hello, Compiler!"
-       .text
+       .section        .text.startup,"ax",@progbits
+       .p2align 4
        .globl  main
        .type   main, @function
 main:
-.LFB0:
+.LFB11:
        .cfi_startproc
-       pushq   %rbp
+       subq    $8, %rsp
        .cfi_def_cfa_offset 16
-       .cfi_offset 6, -16
-       movq    %rsp, %rbp
-       .cfi_def_cfa_register 6
-       leaq    .LC0(%rip), %rax
-       movq    %rax, %rdi
+       leaq    .LC0(%rip), %rdi
        call    puts@PLT
-       movl    $0, %eax
-       popq    %rbp
-       .cfi_def_cfa 7, 8
+       xorl    %eax, %eax
+       addq    $8, %rsp
+       .cfi_def_cfa_offset 8
        ret
        .cfi_endproc
-.LFE0:
+.LFE11:
        .size   main, .-main
        .ident  "GCC: (Debian 14.2.0-19) 14.2.0"
        .section        .note.GNU-stack,"",@progbits
```