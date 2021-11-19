#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.545;
    strcpy(e1.name, "Ankitanshu");
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);

    return 0;
}