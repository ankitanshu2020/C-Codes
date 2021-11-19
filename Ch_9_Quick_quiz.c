#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e1, e2, e3;
    printf("Enter the value for ID of employee 1 : ");
    scanf("%d", &e1.id);
    printf("Enter the value for Name of employee 1 : ");
    scanf("%s", e1.name);
    printf("Enter the value for Salary for employee 1 : ");
    scanf("%f", &e1.salary);
    printf("Enter the value for ID of employee 2 : ");
    scanf("%d", &e2.id);
    printf("Enter the value for Name of employee 2 : ");
    scanf("%s", e2.name);
    printf("Enter the value for Salary for employee 2 : ");
    scanf("%f", &e2.salary);
    printf("Enter the value for ID of employee 3 : ");
    scanf("%d", &e3.id);
    printf("Enter the value for Name of employee 3 : ");
    scanf("%s", e3.name);
    printf("Enter the value for Salary for employee 3 : ");
    scanf("%f", &e3.salary);
    return 0;
}