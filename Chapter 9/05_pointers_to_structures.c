#include<stdio.h>

struct Employee
{
    int code;
    char name[890];
    float salary;
};


int main(){

    struct Employee e1;
    struct Employee *ptr;

    ptr=&e1;
    e1.code=789;

    printf("The code alloted to the employee is %d\n",(*ptr).code); // * star symbol should be under parenthesis.
    printf("The code alloted to the employee is %d", ptr -> code);
    // This is also known as arrow operator. i.e. ->

    return 0;
}