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
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101; and ptr->code=101 are equal,you can write any
    ptr->code = 101;
    printf("Code = %d\n", e1.code);
    strcpy((*ptr).name, "Ankitanshu Kumar");
    printf("Name is %s\n", e1.name);
    (*ptr).salary = 9.8;
    printf("Salary = %f\n", e1.salary);
    return 0;
}