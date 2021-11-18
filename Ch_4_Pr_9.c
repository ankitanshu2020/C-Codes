#include <stdio.h>
int main()
{
    int n, i = 1, factorial = 1;
    printf("Please enter an integer : ");
    scanf("%d", &n);
    while (i <= n)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d is %d", n, factorial);
    return 0;
}
