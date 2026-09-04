#include<stdio.h>

int main(){
    char name[6]="Rohan";
    printf("%s\n",name);

    char*ptr=&name[0];
    for (int i = 0; i <6; i++)
    {
        printf("%u\n", ptr);
        ptr++;
    }
    

    return 0;
}