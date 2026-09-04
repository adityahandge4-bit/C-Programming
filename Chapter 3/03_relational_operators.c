#include <stdio.h>

int main()
{

    if (23)
    {
        printf("The value is valid inside if\n");
    }
    if (900)
    {
        printf("The value is valid inside if\n");
    }

    if (123)
    {
        printf("The value is valid inside if\n");
    }

    if (0)
    {
        printf("The value is invalid inside if\n");
    }

    return 0;
}
// Here the if statement is printed whenever the value present inside the if statement is non zero
// output will contain only the those conditions which are under non zero conditions
