#include<stdio.h>
int main()
{
    int age;
    int vipPass=0;
    printf("Please enter your age :: ");
    scanf("%d",&age);
    if((age<=70 && age>=18) || vipPass==1){
        printf("You are above 18 and below 70 so, you can drive \n");
    }
    else{
        printf("You cannot drive\n");
    }
    return 0;
}