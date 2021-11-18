#include<stdio.h>
int main()
{
    float celsius,farenheit;
     printf("Enter the value of degree Celsius\n");
    scanf("%f",&celsius);
    farenheit=(celsius*9/5)+32;
    printf("The value of temperature given in Celsius in Farenheit is %f\n",farenheit);
    return 0;
}