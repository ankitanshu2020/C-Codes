#include <stdio.h>
#include <string.h>

int strlen(char *st)
{
    char *ptr = st;
    int len = 0;
    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char st[] = "Ankitanshu";
    int l = strlen(st);
    printf("The length of the string is %d", l);
    return 0;
}