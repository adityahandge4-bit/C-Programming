// using typedef

#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
}c;

void display(c str[5])
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d" "%d",&str[i].real, &str[i].imaginary);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The complex numbers is %d+%di\n", str[i].real, str[i].imaginary);
    }
}

int main()
{
    c complex[5];

    display(complex);

    return 0;
}