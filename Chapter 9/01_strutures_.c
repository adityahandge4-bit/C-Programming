#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[56];
};

int main(){
    struct employee e1,e2;
    e1.code=4500;
    e2.salary=2300000;
    strcpy(e1.name, "Aditya");

    printf("The code is %d,the salary of employee is %f and the name of the employee is %s",e1.code,e2.salary,e1.name);
    
    
    return 0;
}