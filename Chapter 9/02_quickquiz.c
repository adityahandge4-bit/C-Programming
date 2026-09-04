// Write a program to store the details of 3 employees from user defined data.Use the structure declared above.
#include <stdio.h>
#include <string.h>
struct Emplyee_Data
{
    char name[67];
    float salary;
    int bond;
};

int main()
{
    struct Emplyee_Data e1, e2, e3;

    printf("Enter the name of employee: \n");
    scanf("%s", &e1.name);
    printf("Enter the salary  of employee: \n");
    scanf("%f", &e1.salary);
    printf("Enter the bond of employee: \n");
    scanf("%d", &e1.bond);

   

    printf("Enter the name of employee: \n");
    scanf("%s", &e2.name);
    printf("Enter the salary  of employee: \n");
    scanf("%f", &e2.salary);
    printf("Enter the bond of employee: \n");
    scanf("%d", &e2.bond);


    printf("Enter the name of employee: \n");
    scanf("%s", &e3.name);
    printf("Enter the salary  of employee: \n");
    scanf("%f", &e3.salary);
    printf("Enter the bond of employee: \n");
    scanf("%d", &e3.bond);

    printf("The Name of the employee is %s, and the salary of employee is %f whereas the employee has signed the bond of %d years\n", e1.name, e1.salary, e1.bond);

    printf("The Name of the employee is %s, and the salary of employee is %f whereas the employee has signed the bond of %d years\n", e2.name, e2.salary, e2.bond);

    printf("The Name of the employee is %s, and the salary of employee is %f whereas the employee has signed the bond of %d years\n", e3.name, e3.salary, e3.bond);
    
    return 0;
}