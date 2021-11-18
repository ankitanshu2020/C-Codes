#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("Please enter a number for table :: ");
    scanf("%d", &n);
    printf("Table of %d is\n",n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n,i,n*i);
    }
    return 0;
}