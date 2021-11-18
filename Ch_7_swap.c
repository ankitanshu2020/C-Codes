#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()

{
    int x = 3, y = 4;
    printf("%d, %d", x, y);
    swap(&x, &y);
    printf("%d,%d", x, y);
    return 0;
}