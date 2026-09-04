/*
write your own version of strlen function from <string.h>
// */
// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[56];
//     printf("Enter the string: \n");
//     fgets(str,sizeof(str),stdin);

//     printf("The length of the string is %d",strlen(str));
//     return 0;
// }

// or
// #include<stdio.h>
// #include <string.h>

// int main(){
//     char string[6];
//     printf("Enter the string: \n");
//     for (int i = 0; i<5; i++)
//     {
//         scanf("%c",&string[i]);
//     }
//     string[5]='\0';
//     printf("The length of the string is %d", strlen(string));

//     return 0;
// }
// or
#include<stdio.h>

int strlen(char str[]){
    int i = 0;
    int count = 0;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main(){
    char str[]="Harry";

    printf("%d",strlen(str));
    return 0;
}