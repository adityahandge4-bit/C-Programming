/*
Write a function slice() to slice the string. It should change the string such that it is now a sliced string. Take m and n as start and end position for slice
*/
// #include<stdio.h>

// void *slice(char string[],int m,int n){

//     char* ptr1=&string[m];
//     char* ptr2=&string[n];

//     string=ptr1;
//     string[n]='\0';
//     return string;
    
// }

// int main(){
//     char string[9];
//     printf("Enter the string: \n");
//     fgets(string,sizeof(string),stdin);

    
//     printf("%s", slice(string, 1, 7));

//     return 0;
// }


// or
#include <stdio.h>

void slice(char str[], int m, int n)
{
    int i;

    for (i = 0; i < n - m; i++)
    {
        str[i] = str[m + i];
    }

    str[i] = '\0';
}

int main()
{
    char str[] = "Harris Ali Khan";

    slice(str, 1, 7);

    printf("Sliced string: %s", str);

    return 0;
}
// Dry run
/*
str[0]=str[1+0] i.e. position of A will be given to the d 
and now str[0]=d
 then 
str[1]=str[2] i.e. index of d will be given to the i
str[2]=str[3] i.e. index of i will be given to t
str[3]=str[4] i.e. index of t will be given to y
str[4]=str[5] i.e. index of y will be given to the a;
str[5]=str[6]  i.e. index of a will be given to ___(space)

like how slicing will happen
*/
