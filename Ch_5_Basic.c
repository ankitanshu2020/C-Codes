#include<stdio.h>

void display();

int main()
{
    int a;
    printf("Initialising display function\n");
    display(); // control goes to function definition
    printf("Display function finished its work\n");
    return 0;
}

void display()
{
    printf("I am display\n");
}