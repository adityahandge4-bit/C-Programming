#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    int num;
    fscanf(ptr, "%d", &num);
    printf("The integer is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The integer is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The integer is %d", num);

    fclose(ptr);
    return 0;
}