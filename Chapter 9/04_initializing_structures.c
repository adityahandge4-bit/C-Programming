#include <stdio.h>

struct Employee
{
    int code;
    char name[67];
    float salary;
};

int main()
{
    struct Employee Information={456,"Aditya Handge",780000};

    printf("%d %s %f",Information.code,Information.name,Information.salary);

    return 0;
}