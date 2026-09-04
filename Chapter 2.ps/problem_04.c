// Explain step by step evaluation of
//   3*x / y - z + k, where x=2,y=3,z=3,k = 1
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    float result = 3 * x / y - z + k;
    printf("The value of result is %f", result);
    return 0;
}
/*
the output will be
3 * x / y - z + k
(6/3)-3+1
2-3+1
0
*/
