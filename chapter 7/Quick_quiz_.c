/*
Write a program to accept marks of five student in an array and print them on sreen
*/

#include<stdio.h>

int main(){
    int marks[5]={12,34,56,78,99};

    printf("The marks of students are: \n");
    int i;
    for (i = 0; i <5; i++)
    {
        printf("%d\n",marks[i]);
    }

    return 0;
}