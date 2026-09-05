// Attempt Problem 4 using calloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;

    ptr = (int *) calloc(n, sizeof(int));

    printf("Enter the integers: \n");

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The six integrs are: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }



    free(ptr);

    return 0;
}