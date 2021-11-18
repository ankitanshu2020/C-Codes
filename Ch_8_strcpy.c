#include <stdio.h>
#include <string.h>

int main()
{
    char *sourse = "Ankitanshu";
    char target[30];
    strcpy(target, sourse);
    printf("Now the target is %s", target);
    return 0;
}