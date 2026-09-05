#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("Adi.txt","w");
    char str[]={"Harry Bhai is the best teacher"};

    fprintf(ptr,"%s",str);
    fclose(ptr);
    return 0;
}