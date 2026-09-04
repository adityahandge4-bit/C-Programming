#include<stdio.h>

int factorial(int);

int factorial(int n){
    if (n == 0 || n == 1) // this is called as a base case;
    {
        return 1;
    }
    

    return factorial(n-1)*n;
  
}

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("The factorial of %d is %d",a,factorial(a));


    
    return 0;
}

/*
key points:
           1.when you write a prototype it gives the best way of approaching towards the function
           2.then you gave function defination and the terms that are inside it
           3.Give a base condition for a recursion then return 1 and also return 
           factorial(n-1)*n

           then give a main function and then take a input from the user and then with
           
           */