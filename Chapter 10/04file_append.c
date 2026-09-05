#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("Adi.txt","a");

    int star=100;
    fprintf(ptr,"%d",star);
    fclose(ptr);

    return 0;
}