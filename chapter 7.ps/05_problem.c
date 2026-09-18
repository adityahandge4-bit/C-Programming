// Write a program containing a function which reverses the array passed to it.
#include <stdio.h>

void print_array(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse_array(int arr[], int n)
{

    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
/*
Dry run:
arr[0]=arr[6-0-1]
arr[0]=arr[5] i.e. 1 replace by 6

arr[1]=arr[6-1-1]
arr[1]=arr[4] i.e. 2 replace by 5

arr[2]=arr[6-2-1]
arr[2]=arr[3] i.e. 3 will replace by 4

*/

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int carr[]={23,45,67,89,90,99,21};
    print_array(arr, 6);
    reverse_array(arr, 6);
    print_array(arr, 6);


    print_array(carr, 7);
    reverse_array(carr, 7);
    print_array(carr, 7);


    return 0;
}