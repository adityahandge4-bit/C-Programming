// Write a program to check whether a number is divisible by 97 or not.
#include <stdio.h>

int main()
{
    int a;
    printf("The value of a is : ");
    scanf("%d", &a);

    printf("The value of remainder when a/97 is %d", a % 97);
    return 0;
}
// If it gives the output as 0 then it is completely divisible by 97 if not then it is not divisible by 97