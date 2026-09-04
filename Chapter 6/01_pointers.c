#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i;                            // j is a pointer pointing to i and storing the address of the variable i
    printf("The address of i is %p\n", &i); // %p is used for printing character value of memory location  (j is an integer pointer)

    printf("The address of i is %u\n", &i); // %u is used for printing the integer value of memory location

    printf("The address of i is %p\n", j);

    printf("The value at address j is %d\n", *j); // you got the output directly as 72 becuase j is storing the address of the i hence it is as *(&i)

    printf("The value at address j is %d\n", *(&i));

    return 0;
}
