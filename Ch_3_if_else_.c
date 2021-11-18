#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number to check even/odd \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("The number you entered is even");
    }
    else{
        printf("The entered number is odd");
    }
      return 0;

}