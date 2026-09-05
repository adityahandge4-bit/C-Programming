// Write a program to generate multiplication table of a given number in text format.Make sure that the file is readable and well formatted.
#include<stdio.h>

    int main(){
        FILE *fptr;
        fptr=fopen("table.txt","w");
        int n;
        printf("Enter the value of n: ");
        scanf("%d",&n);

        char carr[]="The table is: \n";
        fprintf(fptr,"%s",carr);

        for (int i = 0; i <10; i++)
        {
            fprintf(fptr,"%d x %d = %d\n",n,(i+1),n*(i+1));
        }

        fclose(fptr);
        
    return 0;
}