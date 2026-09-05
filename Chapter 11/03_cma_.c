#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));

    ptr[0]=89;
    printf("The integer value is %d",ptr[0]);
    return 0;
}