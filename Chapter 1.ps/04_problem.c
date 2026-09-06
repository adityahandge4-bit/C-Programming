// Write a program to calculate simple interest for a set of values representing principal, number of years, and rate of interest.
#include <stdio.h>

int main()
{
    float principal;
    float n;
    float r;
    printf("The value of pricipal is: \n");
    scanf("%f", &principal);
    printf("The value of number of years is: \n");
    scanf("%f", &n);
    printf("The value of rate of intrest is: \n");
    scanf("%f", &r);
    printf("The simple intrest is %f", (principal * n * r) / 100.0);
    return 0;
}