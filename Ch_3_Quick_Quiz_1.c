// #include <stdio.h>
// int main()
// {
//     int score;
//     printf("Enter your score(0-100):: ");
//     scanf("%d", &score);
//     switch (score / 10)
//     {
//     case 10:
//     case 9:
//         printf("Your grade is A");
//         break;
//     case 8:
//         printf("Your grade is B");
//         break;
//     case 7:
//         printf("Your grade is C");
//         break;
//     case 6:
//         printf("Your grade is D");
//         break;
//     case 5:
//         printf("Your grade is E");
//         break;
//     default:
//         printf("Your grade is F");
//         break;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int score;
    printf("Enter your score(0-100):: ");
    scanf("%d", &score);
    if (score >= 90 && score <= 100)
        printf("Your grade is A");

    else if (score >= 80)
        printf("Your grade is B");

    else if (score >= 70)
        printf("Your grade is C");

    else if (score >= 60)
        printf("Your grade is D");

    else if (score >= 50)
        printf("Your grade is E");

    else
        printf("Your score is F");

    return 0;
}