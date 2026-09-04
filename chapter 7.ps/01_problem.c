/*
Create an array of 10 numbers. Verify using pointer arithmetic that(ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.
*/

#include <stdio.h>

int main()
{
    int arr[10] = {12, 34, 56, 78, 98, 76, 54, 32, 28, 14};
    int *ptr = &arr[0];

    printf("The address of the element at index 0 is %p\n", ptr);
    printf("The value of the element at index 0 is %d\n", *(ptr));
    printf("The value of the element at index 2 is %d", *(ptr + 2));

    return 0;
}
