// Quick Quiz: Use the library function to calculate the area of a square with side a

#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the length of the side of square: ");
    scanf("%d",&side);

    printf("The area of square is %f",pow(side,2));  // If it returns the double then it wants the double i.e. pow function gices the float hence you have to store it in float.
    return 0;
}

