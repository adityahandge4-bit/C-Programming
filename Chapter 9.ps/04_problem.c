// Write a program to illustrate the use of arrow operator -> in c program
#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    char name[89];
    float salary;
};


int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;

    e1.code=567;
    strcpy(e1.name,"Aditya Handge");
    e1.salary=234455;

    printf("The code assigned to the eployee is %d and the name of employee is %s whereas the salary of the employee is %f",ptr->code,ptr->name,ptr->salary);

    

    
    
    return 0;
}