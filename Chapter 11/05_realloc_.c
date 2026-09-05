#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f=5;
    float *ptr;


    ptr = (float *)malloc(f* sizeof(float));

    for (int i = 0; i < f; i++)
    {
        scanf("%f", &ptr[i]);
    }

    printf("The five float numbers are: \n");
    for (int i = 0; i < f; i++)
    {
        printf("%f\n", ptr[i]);
    }



    ptr=(float*) realloc(ptr,7*sizeof(float));
// Like how you can reallocate the ptr and can add more values inside it.



    for (int i = 0; i < 7; i++)
    {
        scanf("%f", &ptr[i]);
    }

    printf("The seven float numbers are: \n");
    for (int i = 0; i < 7; i++)
    {
        printf("%f\n", ptr[i]);
    }

    return 0;
}