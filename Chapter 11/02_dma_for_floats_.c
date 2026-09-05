// Write a program to create a dynamic array of 5 floats using malloc().
#include<stdio.h>
#include<stdlib.h>

    int main(){
    float f;
    float*ptr;
    scanf("%f",&f);

    ptr=(float*) malloc(f*sizeof(float));

    for (int i = 0; i < f; i++)
    {
        scanf("%f",&ptr[i]);
    }

    printf("The five float numbers are: \n");
    for (int i = 0; i < f; i++)
    {
        printf("%f\n",ptr[i]);
    }
    
    
    return 0;
}