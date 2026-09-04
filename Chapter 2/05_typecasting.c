#include <stdio.h>

int main()
{
    int a = 56;
    float m = 78.987;
    int n;
    n = (int)m; // Like how we can change the type of one variable into another type of variable
    char p;
    p= (char)n;
    printf("The value of p is %c\n",p); 
    // Here according to the ascii value the value stored in n is 78 which denotes the character N


    int c;
    c = 45;
    float d;
    d = (float)c;
    printf("The value of n is %d\n", n);
    printf("The value of d is %f", d);
    return 0;
}
// like this you can do typecasting