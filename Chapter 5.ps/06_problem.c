// Write a recursive function to calculate the sum of first 'n' natural numbers
#include<stdio.h>


int sum(int);

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    

    return sum(n-1) + n;
  
}

int main(){

    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);

    printf("Sum of first %d natural numbers is: %d",num,sum(num));
    
    return 0;
}