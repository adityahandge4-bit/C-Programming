// Write a program to print multiplication table of 10 in reversed order.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 10; i >= 1; i--)
    { // important thing is that if you want to print the table in reverse order then first initialized the value of i on 10

        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}