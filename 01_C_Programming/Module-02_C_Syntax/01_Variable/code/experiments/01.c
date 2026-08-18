#include <stdio.h>

int main(void)
{
    int age = 25;

    printf("Address: %p\n", &age);
    printf("Value  : %d\n", age);

    return 0;
}