#include <stdio.h>

int main(void)
{
    int age = 25;

    printf("Address: %p\n", &age);
    printf("Value  : %d\n", age);

    age = 30;

    printf("Address: %p\n", (void *)&age);
    printf("Value  : %d\n", age);

    return 0;
}