#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d",&n);
    // ptr=(int*) calloc(4,sizeof(int));
    ptr=calloc(n,sizeof(int));
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("The integers are: \n");
    for (int i = 0; i <n; i++)
    {
        printf("%d\n",ptr[i]);
    }

    free(ptr);  // memory of ptr is released
    

    return 0;
}