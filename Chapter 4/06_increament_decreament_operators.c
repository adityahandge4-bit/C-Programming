#include<stdio.h>

int main(){
    int i=5;
    printf("The value of i is %d\n",i);// 5

    i=i+5;
    printf("The value of i is %d\n",i); //10

    printf("The value of i is %d\n",i++);// 10
    printf("The value of i is %d\n",i); //11
    printf("The value of i is %d\n",++i); //12

    printf("The value of i is %d\n",i);// 12
    printf("The value of i is %d\n",i--); // 12
    printf("The value of i is %d\n", i); //11

    printf("The value of i is %d\n", --i);//10
    i+=2; // This is called as the compound operator
    printf("The value of i is %d\n", i); //12

    // i++ prints first and then increament i(Post Increament operator)
    // ++i increament first and then prints i(Pre increament operator)
    /*
    similarly --i operator is known as pre decreamnet operator which decrease first and then prints
    whereas i-- operator is known as post decreament operator which prints first and then dereases the value later
    */

    return 0;
}