#include <stdio.h>

int main(void)
{
    int x;

    printf("Address = %p\n", (void *)&x);
    printf("Value   = %d\n", x);
    printf("Address = %p\n", (void *)&x);
    printf("Value   = %d\n", x);
    printf("Address = %p\n", (void *)&x);
    printf("Value   = %d\n", x);

    return 0;
}