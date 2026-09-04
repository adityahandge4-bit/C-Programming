#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("The value of i is %d\n", i);
        i++;  // Whatever the language is, the point to be noted that you should keep i+=1 or i++ inside the loop only
    }
    
    return 0;
}