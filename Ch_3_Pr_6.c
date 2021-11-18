#include<stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter the value of num1 :: ");
    scanf("%d",&num1);
    printf("Enter the value of num2 :: ");
    scanf("%d",&num2);
    printf("Enter the value of num3 :: ");
    scanf("%d",&num3);
    printf("Enter the value of num4 :: ");
    scanf("%d",&num4);
    if(num1>num2 && num1>num3 && num1>num4){
        printf("num1 is the greatest of four integers");
    }
    else if(num2>num1 && num2>num3 && num2>num4){
        printf("num2 is the greatest of four integers");
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        printf("num3 is the greatest of four integers");
    }
    else{
        printf("num4 is the greatest of four integers");
    }
    return 0;
}