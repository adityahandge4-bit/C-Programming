#include <stdio.h>

int main()
{
    char str[4]; // this will include the four character including null character at last
    printf("Enter the string: \n");
    scanf("%s", &str); // here scanf automatically adds the null character inside the string.

    printf("%s", str);

    return 0;
}