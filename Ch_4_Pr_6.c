#include<stdio.h>
int main()
{
    int n=10,i=0,sum=0;
     
    do{
        sum+=i;
        i++;
    }
    while(i<=10);
    printf("The sum of firs ten natural numbers is %d",sum);
    return 0;
}