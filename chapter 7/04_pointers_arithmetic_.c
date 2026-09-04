// #include<stdio.h>

// int main(){

//     int a=45;
//     int *b=&a;
//     printf("The address of the a is %u\n",&a);
//     printf("The address of the a is %u\n",b);
//     b++;
//     printf("The address of the a is %u\n", b);
   

//     return 0;
// }
/*
as you do increament inside the address of b and as its type is integer so here Integer stores the 4 bytes hence output comes as :
The address of the a is 6422296
The address of the a is 6422296 here there is increament of 4 because integer stores 4 bytes hence there occurs increamnet of 4
The address of the a is 6422300⤶

*/

#include<stdio.h>

int main(){
    char c='A';
    char*d=&c;
    printf("The address of the character %c is %u\n",c,&c);
    printf("The address of the character %c is %u\n",c,d);
    d++; // like how you can do increament inside the address of the variable
    printf("The address of the character %c is %u\n", c, d);
    

    return 0;
}

/*
as you do increament inside the address of d and as its type is character so here character stores the 1 bytes hence output comes as :
The address of the character A is 6422299
The address of the character A is 6422299 here the character stores the 1 bytes hence increamnet of 1 byte occur
The address of the character A is 6422300⤶

*/