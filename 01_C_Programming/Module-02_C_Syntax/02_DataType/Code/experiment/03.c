#include <stdio.h>

int main(void)
{
    double pi = 3.1416;
    long long int big = 1203721073091397123;
    float money = 10.45f;
    int num = 1;
    char c = 'A';

    printf("%p\n", (void *)&c);
    printf("%p\n", (void *)&money);
    printf("%p\n", (void *)&num);
    printf("%p\n", (void *)&pi);
    printf("%p\n", (void *)&big);
}

/*
0x7fff96ff1d8f  --> char
0x7fff96ff1d90  --> double
0x7fff96ff1d91
0x7fff96ff1d92
0x7fff96ff1d93
0x7fff96ff1d94
0x7fff96ff1d95
0x7fff96ff1d96
0x7fff96ff1d97  <-- end double

0x7fff96ff1d98  --> padding
0x7fff96ff1d99  --> padding
0x7fff96ff1d9a  --> padding
0x7fff96ff1d9b  --> padding

0x7fff96ff1d9c  --> int
0x7fff96ff1d9d
0x7fff96ff1d9e
0x7fff96ff1d9f  <-- end int

*/