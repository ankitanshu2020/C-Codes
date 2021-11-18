#include <stdio.h>
#include <string.h>

int main()
{
    char ptr1[40] = "Aello";
    char *ptr2 = "Hello";
    int val = strcmp(ptr1, ptr2);
    printf("Now the val is %d", val);
    return 0;
}