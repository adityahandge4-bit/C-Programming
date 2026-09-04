// Write a program to convert Celsius(Centigrade) temperature to Fahrenheit
#include<stdio.h>

    int main(){
        float celsius;
        printf("The value of temperature in Celsius is : ");
        scanf("%f",&celsius);  // to add & is very necessary when you are taking input
        printf("The value of temperature in Fahrenheit is %f",((9.0/5.0)*celsius) + 32);
        return 0;
}