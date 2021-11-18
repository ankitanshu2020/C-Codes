#include <stdio.h>

int sum(int a, int b);

int main()
{
    int c;
    c = sum(5, 9);
    printf("The value of c is %d ", c);
    // sum(5,9);
    return 0;
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
    // printf("Sum id %d ",result);
}