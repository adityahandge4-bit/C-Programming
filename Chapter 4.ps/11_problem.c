// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);

//     int i=2;
//     int not_prime=0;

//     if(n<=1){
//         printf("%d is not a prime number",n);
//     }

//     else{

//         while (i*i<=n )
//         {
//            if (n%i==0)
//            {
//             not_prime=1;
//             break;
//            }
//            i++;

           
//         }

//         if (not_prime)
//         {
//             printf("%d is not a prime number", n);
//         }
//         else
//         {
//             printf("%d is a prime number",n);
//         }
        
        
        
//     }
//     return 0;
// }

// if I want to check what's wrong with my code
// run this: printf("DEBUG: i = %d, n = %d\n", i, n);
// using do while loop

#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int i=2;
    int not_prime=0;

    if (n<=1)
    {
        printf("%d is not a prime number",n);
    }

    else{
        do
        {
            if (n%i==0 && n!=2)
            {
                not_prime = 1;
                break;
            }
            i++;
        } while (i*i<=n);
        

        if (not_prime)
        {
            printf("%d is not a prime number", n);
        }

        else{
            printf("%d is a prime number", n);
        }
        

        
    }
    

    return 0;
}