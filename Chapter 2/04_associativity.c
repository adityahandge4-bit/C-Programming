#include <stdio.h>

int main()
{
    int a = 45;
    int b = 5;
    int c = 21;

    printf("The value is %d\n", 3 * a / 4 * b + 7 * a);
    /* the output will be
    3*a/4*b+315
   ( 135/4)*b+315
    33*b+315  here the answer will be 35 because I have given %d so it will consider only integer value
    165+315
    480
    */

    printf("The value is %d", a / b * c + 45 - 67);
    /* the output is
    a/b*c+45-67
    (a/b)*c+45-67
    9*c+45-67
    (189+45)-67
    234-67
    167
    */

    return 0;
}