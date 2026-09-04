#include <stdio.h>

int change_value(int *);

int change_value(int *ptr)
{
    *ptr = 23;
    return *ptr;
}

int main()
{
    int marks[] = {12, 34, 56, 76, 89, 99, 100};
    int *ptr = &marks[1];

    printf("The value at index 1 is %d", change_value(ptr));
    return 0;
}

// Like how we can change the value at any index inside the array by value by reference method