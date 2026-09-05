// Take name and salary of two employees as input from the user and write them to a text file in the following format: i.  Name1, 3300 ii.Name2, 7700
#include<stdio.h>

    int main(){

        char name1[34];
        char name2[34];
        int salary1;
        int salary2;

        FILE *ptr;
        ptr=fopen("file3.txt","w");

        printf("Enter the name of employee 1: ");
        scanf("%s",name1);
        printf("Enter the salary of employee 1: ");
        scanf("%d",&salary1);

        printf("Enter the name of employee 2: ");
        scanf("%s",name2);
        printf("Enter the salary of employee 1: ");
        scanf("%d", &salary2);

        fprintf(ptr,"%s",name1);
        fprintf(ptr,"%c",',');
        fprintf(ptr,"%d",salary1);
        fprintf(ptr,"%c",'\n');
        fprintf(ptr, "%s", name2);
        fprintf(ptr, "%c", ',');
        fprintf(ptr, "%d", salary2);

        return 0;
}