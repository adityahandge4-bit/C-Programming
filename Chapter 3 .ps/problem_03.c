/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
*/
#include <stdio.h>

int main()
{
    int Income;
    printf("Enter your annual income: "); // To be noted all values are in lakhs
    scanf("%d", &Income);

    if (Income < 250000)
    {
        printf("You are exempt to pay tax");
    }

    else if (Income <= 500000)
    {
        printf("You have to pay 5 percent tax as %f to the government", (0.05) * (Income - 250000));
    }

    else if (Income <= 1000000)
    {
        printf("You have to pay 20 percent tax as %f to the government", (0.05) * (500000 - 250000) + (0.2) * (Income - 500000));
    }

    else if (Income > 1000000)
    {
        printf("You have to pay 30 percent tax as %f to the government", (0.05) * (500000 - 250000) + (0.2) * (1000000 - 500000) + (0.3) * (Income - 1000000));
    }

    return 0;
}