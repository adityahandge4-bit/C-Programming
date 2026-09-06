/*
Write a program to print natural numbers from 10 to 20 when initial loop counter is
initialized to 0
*/
// #include <stdio.h>

// int main()
// {

//     int i = 0;

//     while (i <= 20) // First you have to give such a condition so that loop will run hence we give i<=20 where 0 is less than 20,hence loop will run.
//     {
//         if (i >= 10)
//         {
//             printf("The value of i is %d\n", i);
//         }
//         i+=1;
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        printf("The natural numbers from 10 to 20 are %d\n", (i + 10));
        i++;
    }

    return 0;
}