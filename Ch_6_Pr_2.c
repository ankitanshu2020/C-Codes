#include <stdio.h>

void printAdd(int a);

int main()
{
    int i = 4;
    printf("The value of variabe i is %d \n", i);
    printAdd(i);
    printf("The address of variable i is %u \n", &i);

    return 0;
}

void printAdd(int a)
{
    printf("The address of variable a is %u \n", &a);
}