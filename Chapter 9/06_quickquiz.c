// Complete the show function to dispaly the content of the employee
#include<stdio.h>
#include<string.h>


struct employee
{
    char name[89];
    float salary;
    int code;
};

void show(struct employee e)
{

    printf("The name of the employee is %s and the salary of employee is %f and the code assigned to the employee is %d", e.name, e.salary, e.code);
}

int main(){
    struct employee e={"Aditya Handge",456789,678};


    show(e);
 

    return 0;
}