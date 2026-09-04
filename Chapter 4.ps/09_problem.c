#include<stdio.h>

int main()
{
    int n;
    printf("The value of n is: ");
    scanf("%d", &n);
    // for beginners factorial is for e.g. if you want to find
    // 8! then multiply the numbers from 8 till 1 i.e. 8x7x6x5x4x3x2x1
    int product = 1;
    int i=1;

    while (i<n+1)
    {
        product*=i;
        i++;
    }
    printf("The factorial of %d is: %d",n,product);

    return 0;                    
}