#include <stdio.h>

int fib(int n);

int main()
{
    int nth;
    printf("Enter the nth term which you want to print : ");
    scanf("%d", &nth);
    printf("The %dth term of fibonacci series is %d", nth, fib(nth));

    return 0;
}

int fib(int n)
{
    int result;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        result = fib(n - 1) + fib(n - 2);
        return result;
    }
}