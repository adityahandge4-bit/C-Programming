#include <stdio.h>

int main()
{
    int age;
    printf("Your age is : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can drive a car");
    }

    else if (age > 40)
    {
        printf("You can drive the car because you are an adult");
    }

    else if (age > 60)
    {
        printf("You can drive the car being a senior citizen");
    }

    else
    {
        printf("You cannot drive the car");
    }

    return 0;
}