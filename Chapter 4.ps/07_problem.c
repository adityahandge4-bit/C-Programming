// Write a program to calculate the sum of the numbers occurring in the multiplication
// table of 8(consider 8x1 to 8x10)
#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int sum=0;
    for (int i = 1; i <=10; i++)
    {
        sum+=n*i;  // This will add the results of the multiplication of given input number as n
    }
    printf("The sum of numbers in table of %d is %d",n,sum);
    
    return 0;
}