#include <stdio.h>
int main()
{
    int i, n = 10, sum = 0;
    // for (i = 0; i <= n; i++)
    // {
    //     sum+=i;
    // }
    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("The sum of first ten naturals numbers %d", sum);
    return 0;
}
