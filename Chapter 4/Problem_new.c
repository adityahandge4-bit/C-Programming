// Write a program to print first 'n' natural numbers using do-while loop
// #include<stdio.h>
// // by using while loop
// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     int i=1;
//     while (i<n+1)
//     {
//        printf("%d\n",i);
//        i+=1;
//     }
    

//     return 0;
// }
#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int i=1;
    do
    {
        printf("%d\n", i);
        i += 1;

    } while (i<n+1);
    

    return 0;
}
