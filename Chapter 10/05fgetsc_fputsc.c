#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("Adi.txt","a");
    // char c=fgetc(ptr);
    // printf("%c",c);
    fputc('c',ptr);
    fclose(ptr);
    return 0;
}
