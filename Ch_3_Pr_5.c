#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character :: ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("Entered character is lowercase");
    }
    else{
        printf("Entered character is uppercase");
    }
    return 0;
}