// Write a program to find greatest of four numbers entered by the user
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    printf("Enter the value of d: ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("a is greatest of all");
    }

    else if (b > a && b > c && b > d)
    {
        printf("b is greatest of all");
    }

    else if (c > b && c > a && c > d)
    {
        printf("c is greatest of all");
    }

    else if (d > b && d > c && d > a)
    {
        printf("d is greatest of all");
    }

    return 0;
}