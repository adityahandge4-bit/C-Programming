// #include<stdio.h>

// int main(){
//     int a=9;
//     int b=2;
//     float c=a/b;
//     int k=3.0/9; // if you assigned any float value inside the int or any wrong value under another type then the type demotion will happen and instead of returning value as 0.333 it will just give you 0 ,because k will store only integer value.
//     printf("The value of k is %d\n",k) ; 
//     printf("The value of a/b is %f",c);
//     return 0;
// }
// The output will be
/*The value of a/b is 4.000000 
 and it will not be 4.5 
 because any operation of integer with integer would yeild the integer not the float*/

#include <stdio.h>

int main()
{
    float c= 9.0;
    int d = 2;
    float e = c /d;
    printf("The value of c/d is %f", e);
    return 0;
}

// The output will be
/*The value of a/b is 4.500000
 and it will be 4.5
 because any operation of float with integer would yeild the float */

// To be noted at a time only one main function will run both  the main mentioned will not work if want to run comment one of c boilerpalte and then run the codes
