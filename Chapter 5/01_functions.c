#include <stdio.h>
// Function prototype
int sum(int, int);

// Function defination
int sum(int x, int y)
{
    // printf("The sum is %d\n",x+y);
    return x + y;
}
int main()
{
    int a = 45;
    int b = 56;
    // printf("The sum of %d and %d is %d",a,b,a+b);
    // sum(a,b);// function call
    int f = sum(a, b);
    printf("%d\n", f); // This is also called as a function call

    int c = 23;
    int d = 89;
    // sum(c,d); // function call
    int e = sum(c, d);
    printf("%d", e); // This is also called as a function call

    return 0;
}