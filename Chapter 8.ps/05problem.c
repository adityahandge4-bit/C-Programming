// write your own version of strcpy() usinf string.h
#include<stdio.h>

int strlen(char str[])
{
    int i = 0;
    int count = 0;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;// i+1 is done because I don't want in length null character should also be included
    return count;
}

void mystrcpy(char target[],char source[] ){
    for (int i = 0; i <strlen(source); i++)
    {
        target[i]=source[i];
    }
    target[strlen(source)]='\0';
}

int main(){
    char source[]="Aditya Handge";
    char target[45];
    mystrcpy(target,source);
    printf("%s %s",source,target);

    
    return 0;
}