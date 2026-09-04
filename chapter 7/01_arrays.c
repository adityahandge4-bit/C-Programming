#include<stdio.h>

int main(){
    int marks[90]; // reserve space for 90 integers starting form zero to all the way till 89
    marks[0]=23;
    marks[1]=98;
    marks[4]=90;
    printf("Marks 0 and 1 are %d and %d\n",marks[0],marks[1]);
    printf("The marks at index 4 is %d\n",marks[4]);
    return 0;
}