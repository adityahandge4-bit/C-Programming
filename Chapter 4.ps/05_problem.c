// Write a program to sum first ten natural numbers using while loop


#include<stdio.h>

int main(){
    int sum=0;
    int n;
    printf("The value of n is: ");
    scanf("%d",&n);

    int i=1;
    while (i<n+1)
    {
        sum+=i;
        i++;
    }
     
    printf("The sum of first %d natuarl number is: %d ",n,sum);
    
    return 0;
}