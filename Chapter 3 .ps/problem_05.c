// Write a program to determine whether a character entered by the user is lowercase or not
// https://www.ascii-code.com/
#include<stdio.h>

int main(){
    char character;
    printf("Enter the character: ");
    scanf("%c",&character);
    printf("The value of character is %d\n",character);

    if (character>=97 && character<=122)
    {
        printf("The given character %c is in lowercase",character);
    }

    else{
        printf("The given character %c is not in lowercase", character);
    }
    
    return 0;
}