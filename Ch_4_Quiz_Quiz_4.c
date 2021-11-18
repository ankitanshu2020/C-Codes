#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    for(i=n;i;i--)
    {
        printf("The natural number in reverse order is %d\n",i);
    }
    return 0;
}