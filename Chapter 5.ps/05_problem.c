//  What will the following line produce in a C program?
#include<stdio.h>
int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
    // output will be 6 6 4
    // but what we thought is 4 5 5 
    // here evluation order is not mentioned hence compiler decides on its own that from which side do I start the evaluation so compiler goes on evaluating no.s from right to left hence
    // ans was 6 6 4 
    // and we goes on evaluating from left to right hence our ans becomes 4 5 5
}
