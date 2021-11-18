#include <stdio.h>
int main()
{
    int n, i=1;
    double factorial=1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", n, factorial);
    return 0;
}