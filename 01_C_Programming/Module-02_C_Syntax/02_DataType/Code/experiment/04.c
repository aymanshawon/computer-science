#include <stdio.h>

int main(void)
{
    char c1;
    char c2;
    int age;
    char c3;
    double pi;

    printf("c1  : %p\n", (void *)&c1);
    printf("c2  : %p\n", (void *)&c2);
    printf("age : %p\n", (void *)&age);
    printf("c3  : %p\n", (void *)&c3);
    printf("pi  : %p\n", (void *)&pi);

    return 0;
}