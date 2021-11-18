#include<stdio.h>

int main()
{
    char st[34];
    printf("Enter your favourite actor : ");
    gets(st);
    puts(st);
    printf("Your favourite actor is %s",st);
    return 0;
}