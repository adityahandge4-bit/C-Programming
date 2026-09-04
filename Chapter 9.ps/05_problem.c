// Write a program with a structure representing a complex number
#include<stdio.h>

struct complex
{
    int real;
    int imaginary;
};


int main(){
    struct complex e1={12,3};
    printf("The complex number is %d+%di", e1.real, e1.imaginary);

    return 0;
}