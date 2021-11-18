#include<stdio.h>
int main()
{
    int physics,chemistry,mathematics;
    float total;
printf("Enter the marks of Physics :: ");
scanf("%d",&physics);
printf("Enter the marks of Chemistry :: ");
scanf("%d",&chemistry);
printf("Enter the marks of Mathematics :: ");
scanf("%d",&mathematics);
    total=(physics+chemistry+mathematics)/3;
    if(total<40 || physics<33 ||chemistry<33 ||mathematics<33){
        printf("You are fail in the examination and your percentage is %f",total);
    }
    else{
        printf(" Congratulations, You are pass in the examination and your percentage is %f",total);
    }
    return 0;
}