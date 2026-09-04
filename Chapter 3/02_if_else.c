#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);

    if (age > 10)
    {
        printf("The user is under the if \n");
        printf("The age of the person is %d and it is valid.", age);
    }

    else
    {
        printf("The age of the person is less than 10");
    }
    return 0;
}