#include <stdio.h>

int sum(int*, int*);

int sum(int* x, int* y) // int*x and int*y will store the memory address of a and b
{
    *x=90;  // here thus to change the value of existing  variable you can give the address of the variable and by which the sum fuction can change the value of existing variable a and perform the neccessary functions
    return *x + *y;
}
int main()
{

    int a = 34;
    int b = 23;
    printf("The sum of %d and %d is: %d\n", a, b, sum(&a, &b)); // This is called as function by call
    printf("The value of x is %d", a);

    return 0;
}