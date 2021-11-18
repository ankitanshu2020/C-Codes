#include <stdio.h>
int main()
{
    int a = 2, b = 3;
    int disp[2][3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value for display[%d][%d] : ", i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    printf("Two dimentional array elements are :- ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", disp[i][j]);
            if (j == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}