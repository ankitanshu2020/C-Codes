                     // Execution by single multiple calling function

// #include<stdio.h>

// void goodMorning();
// void goodAfternoon();
// void goodNight();

// int main()
// {
//     int a;
//     goodMorning();
//     goodAfternoon();
//     goodNight();
//     return 0;
// }

// void goodMorning()
// {
//     printf("Good Morning Ankitanshu\n");
// }
// void goodAfternoon()
// {
//     printf("Good Afternoon Ankitanshu\n");
// }
// void goodNight()
// {
//     printf("Good Night Ankitanshu\n");
// }

                        // Execution by single calling function

#include<stdio.h>

void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    int a;
    goodMorning();
    return 0;
}

void goodMorning()
{
    printf("Good Morning Ankitanshu\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("Good Afternoon Ankitanshu\n");
    goodNight();
}
void goodNight()
{
    printf("Good Night Ankitanshu\n");
}
