#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the total marks of student %d out of 1000 : ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Entered marks of student %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}