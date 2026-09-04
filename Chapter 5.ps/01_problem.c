//  Write a program using function to find average of three numbers
#include<stdio.h>

float average(int,int,int);

float average(int a, int b, int c){
    return( a+b+c)/3.0;
}

int main(){
    
    int n1;
    printf("Enter the value of n1: ");
    scanf("%d",&n1);
    int n2;
    printf("Enter the value of n2: ");
    scanf("%d",&n2);
    int n3;
    printf("Enter the value of n3: ");
    scanf("%d",&n3);

    printf("The average of numbers is %f",average(n1,n2,n3));


    
    return 0;
}