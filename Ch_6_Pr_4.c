#include <stdio.h>

void sumANDavg(int a, int b, int *sum, float *avg);

int main()
{
    int x = 4, y = 5, sum;
    float avg;
    sumANDavg(x, y, &sum, &avg);
    printf("The value of Sum is %d and Average is %f", sum, avg);
    return 0;
}

void sumANDavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}