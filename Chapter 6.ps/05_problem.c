/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main()
*/
// #include<stdio.h>

// int* sum(int,int);
// float* average(int,int);

// int* sum(int x, int y){
//     int s=x+y;
//     int*ptr=&s;
//     printf("The sum is %d\n",s);
//     return ptr;
// }

// float* average(int x, int y){
//     float avg=(x+y)/2.0;
//     float*ptr= &avg;
//     printf("The average is %f\n",avg);
//     return ptr;

// }

// int main(){
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d",&a);

//     int b;
//     printf("Enter the value of b: ");
//     scanf("%d", &b);

//     int* ptr1=sum(a,b);
//     float* ptr2=average(a,b);

//     printf("The address of the sum is %u and the address of average is %u",ptr1,ptr2);
    


//     return 0;
// }

#include<stdio.h>

int sum(int*,int*);
float average(int*,int*);
char address(int *, int *);

int sum(int *x, int *y)
{
    printf("The sum of %d and %d is: %d\n",*x,*y,(*x+*y));
}

float average(int* x, int* y){
    printf("The average of %d and %d is %f\n",*x,*y,(*x+*y)/2.0);

}

char address(int *x, int *y)
{
    printf("The address of a is %p and the address of b is %p\n",x,y);
}

int main(){
    int a;
    int b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    sum(&a,&b);
    average(&a,&b);
    address(&a, &b);

    return 0;
}