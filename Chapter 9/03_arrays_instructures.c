#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[100];
};


int main(){
    struct employee facebook[100];

    printf("Enter the codes alloted to the employees: \n");
    for (int i = 0; i <10; i++)
    {
      scanf("%d",&facebook[i].code);
    }
    printf("Enter the name of employees: \n");
    for (int i = 0; i <10; i++)
    {
      scanf(" %99[^\n]",facebook[i].name); // This is being used to increase the capacity of the string;
    }

    printf("Enter the salaries of the employees: \n");
    for (int i = 0; i <10; i++)
    {
      scanf("%f",&facebook[i].salary);
    }

    printf("\\Employees details as follows: \n");

    for (int i = 0; i < 10; i++)
    {
        printf("The codes alloted to the employee is: %d\n", facebook[i].code);
        printf("The name of the employee is: %s\n", facebook[i].name);
        printf("The salary of the employee is: %f\n", facebook[i].salary);
    }

    printf("\n");
    
    
    

    
    

    // And so on
    return 0;
}