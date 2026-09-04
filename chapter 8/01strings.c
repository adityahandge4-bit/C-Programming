#include<stdio.h>

int main(){
    char str[]={'a','b','c','\0'};
    printf("The first character in str array is %c",str[0]);
    for (int i = 0; i <3; i++)
    {
        printf("The character is %c\n",str[i]);
    }
    // or you can do also like this
    char st[]="Harry";
    for (int i = 0; i <=5; i++)
    {
        printf("The character is %c\n", st[i]);
    }
//  when you use a double quote then you don't have to add the null character or stopping point inside the code 
    return 0;
}


// string is 1-D character array terminated by the null character("\0")