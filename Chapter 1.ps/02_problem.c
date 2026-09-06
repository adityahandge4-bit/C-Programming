// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
// // for area of circle
#include <stdio.h>

int main()
{
    int radius;
    printf("The radius of circle is: ");
    scanf("%d", &radius);
    float area = 3.142 * radius * radius;
    printf("Area of the circle is %f\n", area);
    int height;
    printf("The height of the cylinder is : ");
    scanf("%d", &height);
    printf("The volume of the cylinder is %f", area * height);
    return 0;
}

// #include<stdio.h>

// int main(){
//     int radius,height;
//     printf("The radius of base of cylinder is : ");
//     scanf("%d",&radius);
//     printf("The height of cylinder is : ");
//     scanf("%d",&height);
//     float pi=3.142;
//     printf("The volume of cylinder is %f",pi*radius*radius*height);

// }