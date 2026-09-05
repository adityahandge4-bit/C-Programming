// Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;

    ptr=(int*) malloc(n*sizeof(int));

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

    ptr=(int*) realloc(ptr,10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The Ten integrs are: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", ptr[i]);
    }

    free(ptr);


    return 0;


}