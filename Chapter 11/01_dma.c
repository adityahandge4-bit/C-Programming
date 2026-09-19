#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int*ptr;
    scanf("%d",&n);

    ptr=(int*) malloc(n*sizeof(int));
    ptr[0]=3;
    ptr[1]=5;
    ptr[3]=90;
    ptr[4]=56;
    ptr[2]=40;
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
    printf("%d",ptr[4]);
    return 0;
}