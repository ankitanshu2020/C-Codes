#include <stdio.h>
int main()
{
    int mul[10], n;
    printf("Enter the number for table : ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        mul[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n", n, i + 1, mul[i]);
    }
    return 0;
}