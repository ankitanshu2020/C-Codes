#include <stdio.h>

int countPositiveNumbers(int *arr, int n)
{
    int pos_count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos_count++;
    }
    return pos_count;
}
int countNegativeNumbers(int *arr, int n)
{
    int neg_count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            neg_count++;
    }
    return neg_count;
}

void printArray(int *arr, int n)
{
    int i;
    printf("Array :  ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2, -1, 5, 6, 0, -3};
    int n;
    n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);

    printf("Count of positive elements = %d\n", countPositiveNumbers(arr, n));
    printf("Count of negative elements = %d\n", countNegativenumbers(arr, n));
    return 0;
}
