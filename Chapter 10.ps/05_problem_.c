// Write a program to modify a file containing an integer to double its value.

#include<stdio.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    ptr=fopen("file4.txt","r");
    

    int num;
    fscanf(ptr,"%d",&num);
    printf("%d",num);

    ptr1=fopen("file4.txt","w");
    fprintf(ptr1,"%d",num*2);

    return 0;
}