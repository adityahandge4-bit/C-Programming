#include<stdio.h>
#include<string.h>


int main(){
    char str[50];
    printf("Enter the string: \n");
    fgets(str,sizeof(str),stdin);

    printf("The length of string is %d\n",strlen(str));
    // // strlen is use for knowing the length of the string.

    char target[45];
    strcpy(target,str);
    // strcpy is used for copying a content of one string under different string
    printf("%s %s\n",str,target);
   

    char s1[50]="Harry";
    char s2[50]=" Bhai";
    strcat(s1,s2);
    // strcat is used for concatinating the two strings.
    printf("%s\n",s1);

    int a=strcmp("far","high");
    printf("%d\n",a);
    // output will be -1 because f in far comes first according to ascii value hence number used for denoting is negative
    int b = strcmp("Kavita", "Aditya");
    printf("%d\n",b);
// now output will be 1 since the A in Aditya comes earlier than K in Kavita hence if content in second string comes earlier then strcmp prints the positive value.
    return 0;
}