// Write a program to sum first ten natural numbers using while loop

#include<stdio.h>

int main(){
    int n=10;

    int i=1;
    int sum=0;

    while (i<=n)
    {
        
        sum+=i;
        i++;
    }
    printf("The sum of first %d natural number is : %d",n,sum);
    
    return 0;
}