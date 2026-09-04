// #include <stdio.h>
// // if you want to enter the strings with spaces and till the long interval so use gets

// int main()
// {
//     char str[30];
//     gets(str); // this acts as a scanf and take the input

//     printf("%s", str);
//     // input: Harry is a good coder
//     // output: Harry is a good coder
//     // puts(str); // Prints the string & places the cursor on the next line


//     return 0;
// }

#include <stdio.h>

int main()
{
    char str[30];
    gets(str);

    puts(str); // puts prints the string & places the cursor on the next line

    printf("He is fine!");
    /* output is:
    Hey how he is
    I am fine!

    so "puts" give the enter character on new line
    this output comes when your put(str) is not in comments
    */

    return 0;
}