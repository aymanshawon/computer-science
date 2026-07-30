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