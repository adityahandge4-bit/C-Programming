// Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if (year%400==0 ||(year%4==0 && year%10!=0))
    {
       printf("Yes the given year is a leap year");
    }

    else{
        printf("The given year is not a leap year");
    }
    
    return 0;
}