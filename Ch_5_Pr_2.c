#include <stdio.h>

float cel_to_far(float cel);

int main()
{
    float celsius;
    printf("Enter the value of Celsius ");
    scanf("%f", &celsius);
    printf("The converted temperature is %f degree farenheit", cel_to_far(celsius));
    return 0;
}

float cel_to_far(float cel)
{
    float farenheit;
    farenheit = (cel * 9) / 5 + 32;
    return farenheit;
}