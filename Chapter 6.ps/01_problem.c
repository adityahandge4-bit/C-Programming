/*
 Write a program to print the address of a variable. Use this address to get the value of the variable
*/

#include <stdio.h>

int main()
{
    int v = 56;
    int *var = &v;

    printf("The address of the variable v is %p\n", var);
    printf("The value of the variable v is %d\n", *var);
    return 0;
}