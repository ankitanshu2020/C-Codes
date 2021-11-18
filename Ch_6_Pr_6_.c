#include <stdio.h>

int change(int a);

int main()
{
    int x = 4;
    printf("The value of x after change is %d", change(x));
    return 0;
}

int change(int a)
{
    a *= 10;
}