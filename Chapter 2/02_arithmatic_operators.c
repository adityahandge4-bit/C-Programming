#include <stdio.h>

int main()
{
    int a = 45;
    int b = 3;
    int c = a + b;

    printf("The value of a is %d and the value of b is %d whereas the value of c is %d.\n", a, b, c);

    // Modulus operator

    printf("The remainder when a is divided by b is :%d.\n", a % b);

    return 0;
}
// This does not work for exponentiation in C
// int d = a^b; for this <math.h> is being used

/*
01
Subtraction
/
Division
Operands can be int/float. + - * / are arithmetic
operators. Result must be assigned to a
variable.
int z = b * c; // legal
b * c = z; // illegal
*/

/*
02
% is the modular division operator.
→
returns the remainder
→
cannot be applied on float
→
sign follows the numerator
Result-5 % 2 = -1
*/

/*
No operator is assumed between two
operands.
int i = ab; // invalid
int i = a * b; // valid
*/

/*
No exponentiation operator in C. Use pow(x, y)
from <math.h> instead (more later)
*/