// Write a program to check whether a given character is present in a string or not.
#include<stdio.h>
#include<string.h>

int main(){
    char string[] = "Nbnnjmb!qibs!mbwlbs!sbbh!zfup";

    int count=0;

    for (int i = 0; i <strlen(string) ; i++)
    {
        if (string[i]=='!')
        {
            printf("Yes, ! is present inside the string\n");
            count++;
            break;
        }  
    }
    return 0;
}