#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i;
    float k = 12.45;
    float *h = &k;
    char c = 'A';
    char *d = &c;
    printf("The address of i is %p\n", &i);
    printf("The address of k is %p\n", h);
    printf("The address of c is %p\n", d);

    printf("The value at address j is %d\n", *j);

    printf("The value at address h is %f\n", *h); // since h stores the float value
    printf("The value at address d is %c\n", *d);
    return 0;
}