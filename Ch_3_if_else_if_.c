#include<stdio.h>
int main()
{
    int age;
    printf("Please enter your age :: ");
    scanf("%d",&age);
    /*if(age>=90 || age<=18)
    {
        printf("you can't drive ");
    }
    else{
        printf("You can drive");
    } */
     if(age>=18 && age<90){
        printf("Your age is above 18 and below 90, you can drive");
    }
    else{
        printf("You can't drive");
    }
    return 0;
}