#include<stdio.h>
#include<string.h>

// int main(){
//     typedef int Adi;
//     Adi a=90;
//     printf("The value of a is %d",a);

//     return 0;
// }
// like how you can define your own datatype
typedef struct employee 
{
    int code;
    char name[34];
    float salary;
}Emp;

int main(){
    // typedef struct employee Emp;  we can also make a typedef in main also.
    Emp e1;
    Emp *ptr=&e1;
    strcpy(e1.name,"Aditya Handge");
    e1.code=678;
    e1.salary=8900000;
    printf("The name of the employee is %s and the code assigned to the employee is %d whereas the salary given to employee is %f",ptr -> name,ptr -> code,ptr -> salary);

    return 0;

}

