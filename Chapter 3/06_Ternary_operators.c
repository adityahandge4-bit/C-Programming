// condition ? expression-if-true : expression-if-false // "?" and ":" this is called ternary operators
// #include<stdio.h>

// int main(){
//     int a=900; int b=123;
//     a<b?printf("The a is smaller than b"):printf("The a is greater than b");
//     return 0;
// }

#include<stdio.h>

int main(){
    int num;
    printf("Enter the integer: ");
    scanf("%d",&num);
    int num1;
    printf("Enter the integer: ");
    scanf("%d", &num1);

    num<num1?printf("The num is smaller than num1"):printf("The num1 is smaller than num");

    return 0;
}