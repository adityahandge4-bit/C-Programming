/*
Write a program to take string as an input from the user using %c and %s and confirm that the strings are equal.
*/
#include<stdio.h>

int main(){
    char string[7];
    printf("Enter the string: \n");
    for (int i = 0; i<6; i++)
    {
        scanf("%c",&string[i]);
       
    }
    string[6]='\0';



    
    // gets(string);

    printf("The string is %s",string);

    return 0;
}
