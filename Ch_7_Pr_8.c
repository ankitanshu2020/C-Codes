#include <stdio.h>

void printTable(int *mulTable, int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("\n\n");
}

int main()
{
    int a;
    printf("Enter the number for multiplication table : \n");
    scanf("%d", &a);
    int mulTable[1][10];
    printTable(mulTable[0], a, 10);

    return 0;
}
