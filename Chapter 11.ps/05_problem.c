// Create an array of multiplication table of 7 up to 10 (7 × 10 = 70). Use realloc so that it can store the multiplication table up to 15(7 × 15 = 105)
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=7;
    int num=10;
    int *ptr;
    ptr=(int*) malloc(num*sizeof(int));

    
    for (int i = 0; i < num; i++)
    {
        ptr[i]=n*(i+1);
    }

    printf("The table of 7 is: \n");
    for (int i = 0; i <num; i++)
    {
        printf("%d x %d = %d\n",n,(i+1),ptr[i]);
    }

    ptr=(int*) realloc(ptr,15*sizeof(int));

    for (int i = 0; i <15; i++)
    {
        ptr[i] = n * (i + 1);
    }

    printf("The table of 7 is: \n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d x %d = %d\n", n, (i + 1), ptr[i]);
    }

    free(ptr);

    return 0;
}