#include <stdio.h>

int sum(int n);

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("The sum of %d natural numbers is %d", num, sum(num));
    return 0;
}

int sum(int n)
{
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}