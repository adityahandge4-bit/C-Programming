// Write a program containing functions which counts the number of positive integers in
// an array

#include<stdio.h>

int positive(int arr[],int n){

    printf("The positive numbers in array are:\n");

    int count = 0;
    for (int i = 0; i <n;i++)
    {
        if (arr[i]>0)
        {
            printf("%d\n",arr[i]);
            count++;
        }   
    }

    printf("There are %d positive numbers in the array\n", count);
}

int main(){
    int arr[]={-12,23,45,-90,-87,-54,32,-67,432,82};

    positive(arr,10);

    return 0;
}

