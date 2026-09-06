// Write a C program to calculate the area of a rectangle:
// a.Using hard coded inputs.
// b.Using inputs supplied by the user.
#include <stdio.h>

int main()
{
    int length, breadth;
    // int length;  making use of hard core inputs
    // int breadth;
    printf("The length is: "); // Using the user inputs
    scanf("%d", &length);
    printf("The breadth is: ");
    scanf("%d", &breadth);
    printf("The area of rectangle is %d", length * breadth);
    return 0;
}