// Which of the following is invalid in C?
// a.int a = 1;
// int b = a;
// b.int v = 3 * 3;
// c.char dt = '21 dec 2020';

#include <stdio.h>

int main()
{
    int a = 1;              // This is valid
    int b = a;              // This is  valid because b stores the integer i.e. a
    int v = 3 * 3;          // This is valid and it stores the integer
    char dt = '21 dec 2020'; // This is invalid because it contains the blend of characters and the integers value.
    printf("The value of a is %d\n and the value of b is %d\n and the value of v is %d\n whereas the value of dt is %c", a, b, v, dt);
    return 0;
}