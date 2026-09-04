// Write a program to change the value of a variable to ten times its current value.
#include <stdio.h>

int ten_times(int *);

int ten_times(int *value)
{
    *value = 10 * (*value);
    return *value;
}

int main()
{
    int i;
    printf("Enter the value of variable: ");
    scanf("%d", &i);
    printf("The value of variable is %d\n", i);
    int *value = &i;

    printf("The value of variable i is %d", ten_times(value));
    return 0;
}

// or method
// #include<stdio.h>

// int ten_times(int*);

// int ten_times(int*x){
//     *x=10*(*x);

// }

// int main(){
//     int i=34;
//     printf("The variable of i is %d\n",i);

//     ten_times(&i);
//     printf("The value of variable i is %d\n",i);

//     return 0;
// }