#include <stdio.h>
int main()
{
    int n = 8, i, sum = 0;
    printf("Table of 8 is \n");
    for (i = 1; i <= 10; i++)
    {
        printf("8 X %d = %d\n",i,8*i);
        sum=sum+8*i;
    }
    printf("\n sum of the table is=%d\n",sum);
    return 0;
}