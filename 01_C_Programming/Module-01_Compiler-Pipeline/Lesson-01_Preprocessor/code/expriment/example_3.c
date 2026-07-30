#include <stdio.h>

int test(int arg)
{
    int temp = arg;
    int restul = arg * arg;
    int result3 = temp * temp;
    return restul;
}

int main()
{
    int x = 5;
    x++;
    x++;
    printf("%d", test(x++));
}