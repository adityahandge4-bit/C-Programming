// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int not_prime = 0;

    if (n <= 1)
    {
        printf("The %d is not a prime number\n", n);
    }
    else
    {
        for (int i = 2; i <= (n*(0.5)); i++)
        {
            if (n % i == 0)
            {
                not_prime = 1;
                break;
            }
        }

        if (not_prime)
        {
            printf("The %d is not a prime number\n", n);
        }
        else
        {
            printf("%d is a prime number\n", n);
        }
    }

    return 0;
}