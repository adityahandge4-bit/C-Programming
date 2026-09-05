// Write a program to read a text file character by character and write its content twice in separate file
#include <stdio.h>

int main()
{
    FILE *fptr;
    FILE *fptr1;

    fptr = fopen("file1.txt", "r");
    fptr1 = fopen("file2.txt", "a");
    char carr;
    while (1)
    {
        carr = fgetc(fptr);

        if (carr == EOF)
        {
            break;
        }

        else
        {
            fprintf(fptr1, "%c", carr);
            fprintf(fptr1, "%c", carr);
            printf("%c", carr);

        }
    }

    return 0;
}