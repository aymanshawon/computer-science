#include <stdio.h>

struct Example
{
    // double d;
    int x;
    char c;
};

int main(void)
{
    struct Example examp = {/*.d = 1.32, */ .x = 10, .c = 'A'};

    printf("Address Of Struct : %p\n", &examp);
    printf("Address Of Struct.x : %p\n", &examp.x);
    printf("Address Of Struct.c : %p\n", &examp.c);
    printf("Size Of Struct: %zu\n", sizeof(examp));
}