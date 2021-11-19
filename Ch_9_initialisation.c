#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[20];
    float salary;
};

int main()
{
    struct employee e1 = {100, "Ankitanshu Kumar", 9.7};
    printf("Code is : %d\n", e1.code);
    printf("Name is : %s\n", e1.name);
    printf("Salary is %f\n", e1.salary);

    return 0;
}