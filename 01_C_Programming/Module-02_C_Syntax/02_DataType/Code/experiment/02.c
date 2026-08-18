#include <stdio.h>

int main(void)
{
    char c = 'A';
    int age = 25;
    double pi = 3.14;

    printf("Address of c   : %p\n", (void *)&c);
    printf("Address of age : %p\n", (void *)&age);
    printf("Address of pi  : %p\n", (void *)&pi);

    printf("\n");

    printf("Size of c   : %zu\n", sizeof(c));
    printf("Size of age : %zu\n", sizeof(age));
    printf("Size of pi  : %zu\n", sizeof(pi));

    return 0;
}