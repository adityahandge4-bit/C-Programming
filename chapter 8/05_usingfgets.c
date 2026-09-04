#include <stdio.h>

int main()
{

    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    /*
    1. Name of the string (name);
    2. Size of the string(sizeof(name));
    3. Standard input.(stdin);
    */
    // if input: Aditya Handge
    // output: Aditya Handge

    
    // scanf("%s",name);
    /*but if you use the scanf then as input: Aditya Handge
    output: Aditya 
    it will not print the further text why so because scanf can't detect the space and will not consider the space will print just Aditya excluding Handge
    */
    printf("Your name is: %s", name);

    return 0;
}