/*
 What will be the output of this program?
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11")
*/
// Obviously it will give the output as "I am 11".
// Because in if bracket you have given an assignment operator not a relational operator as == hence It will consider the value as 11 and print I am 11.
#include <stdio.h>

int main()
{
    int a = 10;

    if (a = 11)
    {
        printf("I am 11");
    }

    else
    {
        printf("I am not 11");
    }
    return 0;
}