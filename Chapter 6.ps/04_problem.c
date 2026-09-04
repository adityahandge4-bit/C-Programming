// Write a function and pass the value by reference
#include <stdio.h>
int refer(int*);

int refer(int*x){
    return *x;
}
int main()
{
    int v = 56;
    int *var = &v;

    printf("The address of the variable v is %p\n", var);
    
    printf("The value of the variable v is %d\n", refer(var));
    
    return 0;
}
// This will give the variable which is as a pointer to the function but not being a pointer but as the variable storing the address of i and then function will make it as a pointer and then will return the value of the variable.