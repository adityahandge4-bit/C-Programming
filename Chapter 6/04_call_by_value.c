#include <stdio.h>

int sum(int, int);

int sum(int x, int y)
{
    x = 6; // even though you mentioned here that value of x is 6 but it is just the copy of the value of variable it will never change the existing value of x
    return x + y;
}
int main()
{

    int a = 34;
    int b = 23;
    printf("The sum of %d and %d is: %d\n", a, b, sum(a, b)); // This is called as function by call
    printf("The value of x is %d", a);
    // the output will be 34 not 6 even though you assigned the value of x as 6

    return 0;
}