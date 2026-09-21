// // Write a program to print multiplication table of a given number n
// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= 10; i += 1)
//     {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
//     return 0 ;
// }



#include <stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    
    printf("The table of %d is: \n",num);
    for (int i = 0; i <10; i++)
    {
        printf("%dx%d=%d\n",num,i+1,num*(i+1));
    }
    
    return 0;
}







