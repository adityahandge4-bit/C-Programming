#include<stdio.h>

int main(){
    int a;
    printf("The value of a is : ");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("You entered the 1");
        break;

    case 2:
        printf("You entered the 2");
        break;

    case 3:
        printf("You entered the 3");
        break;

    case 4:
        printf("You entered the 4");
        break;

    case 5:
        printf("You entered the 5");
        break;

    default:
       printf("You enetered something different value");
    }
    return 0;
}