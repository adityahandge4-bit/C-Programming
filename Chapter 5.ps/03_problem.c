/*  Write a function to calculate force of attraction on a body of mass
earth.Consider g = 9.8m /s2 */

#include<stdio.h>

float force(float);

float force(float m){
    return (9.8*m) ;
}

int main()
{
    float m;
    printf("Enter the value of mass of an object: ");
    scanf("%f",&m);

    printf("The force exerted on a body of mass %f kg is: %.2f N", m, force(m));

    return 0;
}