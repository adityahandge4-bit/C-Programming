#include<stdio.h>

int main(){
    int marks[6]={12,34,56,65,43,11};

    int*ptr=&marks[0];
    for (int i = 0; i < 6; i++)
    {
        // printf("The value at index %d is: %d\n",i,marks[i]);
        printf("The value at index %d is: %d\n",i,*ptr);
        ptr++;
        
    }

    return 0;
}

    