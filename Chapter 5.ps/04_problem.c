//  Write a program using recursion to calculate nth  element of Fibonacci series

#include<stdio.h>

int fib(int);

int fib(int n){
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n-2) + fib(n-1);
}

int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);

    printf("nth element of  Fibonacci series is %d",fib(num));


    
    return 0;
}
