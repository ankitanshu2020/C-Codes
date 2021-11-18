#include <stdio.h>

float force(float mass);

int main()
{
    int m;
    printf("Enter the value of mass in kg :  ");
    scanf("%d", &m);
    printf("THe value of Force is %f Newton ", force(m));
    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}