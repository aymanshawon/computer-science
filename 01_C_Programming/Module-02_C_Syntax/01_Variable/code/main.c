#include <stdio.h>

int main(void)
{
    int age = 25;

    printf("Value   : %d\n", age);
    printf("Address : %p\n", (void *)&age);

    return 0;
}