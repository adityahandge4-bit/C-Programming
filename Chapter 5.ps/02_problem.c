// Write a function to convert Celsius temperature into Fahrenheit
#include<stdio.h>

float temp(float);

float temp(float c){
    return ((9.0*c)/5.0)+32;
}

int main(){
    float c;
    printf("Enter the value of temperature in degree celsius: ");
    scanf("%f",&c);

    printf("The value of temperature in degree fahrenheit is %.2f", temp(c));

    return 0;
}


// Here %.2f is used for rounding up your output value in two values .