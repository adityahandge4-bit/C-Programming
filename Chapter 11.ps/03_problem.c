// Solve Problem 1 using calloc()
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;

    ptr = (int *) calloc(n , sizeof(int));
    ptr[0] = 12;
    ptr[1] = 23;
    ptr[2] = 45;
    ptr[3] = 56;
    ptr[4] = 78;
    ptr[5] = 99;

    printf("The value of 1st integer is %d\n", ptr[0]);
    printf("The value of 2nd integer is %d\n", ptr[1]);
    printf("The value of 3rd integer is %d\n", ptr[2]);
    printf("The value of 4th integer is %d\n", ptr[3]);
    printf("The value of 5th integer is %d\n", ptr[4]);
    printf("The value of 6th integer is %d\n", ptr[5]);

    free(ptr);

    return 0;
}