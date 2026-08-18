#include <stdio.h>

int main(void)
{
    double pi = 3.14;
    int age = 25;
    char c = 'A';

    printf("%p\n", (void *)&pi);
    printf("%p\n", (void *)&age);
    printf("%p\n", (void *)&c);
}