/*
Which of the following is used to appropriately read a multi-word string.
1. gets()
2. puts()
3. printf()
4. scanf()
*/


#include<stdio.h>

int main(){
    char str[] = {};
    printf("Enter the string: \n");
    gets(str);
    printf("The string is \"%s\" \n",str);

    return 0;
}

// Hence the answer is "gets".

