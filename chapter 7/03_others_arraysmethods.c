#include<stdio.h>

int main(){
    int cgpa[3]={5,7,9};// Like how we can assigned the values of arrays which are at different array locations inside the array
    for (int i = 0; i <3; i++)
    {
        printf("The value of array at index %d is %d\n",i+1,cgpa[i]);
    }
    
    return 0;
}