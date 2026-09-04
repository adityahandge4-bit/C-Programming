// Write a program to count the occurrence of a given character in a string.
#include<stdio.h>
#include<string.h>

int main(){
    char str[]="aditya";
    int count=0;
    for (int i = 0; i <strlen(str); i++)
    {
        if (str[i]=='a')
        {
            printf("The character a is at index %d\n",i);
            count++;
        }
        
        
    }
    printf("The character is repeated for %d times",count);
    
    return 0;
}