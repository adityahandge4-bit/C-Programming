// // Using for loop
// #include<stdio.h>

// int main(){
//     int sum=0;
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     for(int i=1;i<n+1;i++){
//         sum += i;
//     }
//     printf("The sum of first %d natural number is: %d\n",n,sum);

//     return 0;
// }

// Using do while loop
#include <stdio.h>

int main()
{

    int sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;

    do
    {
        sum += i;
        i++;
    } while (i < n + 1);

    printf("The sum of first %d natural number is: %d", n, sum);

    return 0;
}
