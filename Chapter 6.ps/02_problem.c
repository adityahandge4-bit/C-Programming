/*
 Write a program having a variable i. Print the address of i and pass the variable to function and print its address. Are these addresses the same? Why?
*/
#include<stdio.h>

char address(int*); // This is a prototype

char address(int* var){
    printf("The value of address of var is %p\n",var);
    printf("The value of variable var is %d\n",*var);
    
}

int main(){
    int i=122;
    int*var=&i;
    printf("The address of i is %p\n",&i);
    address(var);
    return 0;
}

// yes the addresses are same.