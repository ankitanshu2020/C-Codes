//change value in ptr
#include <stdio.h>

int change(int *ptr);

int main()
{
    int a;
    printf("Enter the value of a : \n");
    scanf("%d", &a);
    int *ptr = &a;
    printf("The value of a before change is %d\n", a);
    change(ptr);
    printf("The value of a after change is %d\n", *ptr);
    return 0;
}

int change(int *ptr)
{
    (*ptr) *= 10;
}