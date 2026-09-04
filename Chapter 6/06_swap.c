#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp; // for changing or swaping the value of a and b first we make the temporary files and then assigned the value of first variable to it andd then will put the value of second variable at place of first variable and then put the a in place of b and assigning it in temporary file.
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 34;
    int y = 56;
    swap(&x, &y);
    printf("The value of a is %d and the value of b is %d", x, y);

    return 0;
}