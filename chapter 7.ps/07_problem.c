//  Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and 9 respectively
#include <stdio.h>

int main()
{
    int arr[3][10];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 && j < 10)
            {
                arr[i][j] = 2*(j+1);
                printf("%d ", arr[i][j]);
            }

            if (i==1 && j<10)
            {
                arr[i][j]=7*(j+1);
                printf("%d ", arr[i][j]);
            }

            if (i==2 && j<10)
            {
                arr[i][j]=9*(j+1);
                printf("%d ", arr[i][j]);
            }   
            
        }
        printf("\n");
    }


    return 0;
}
// Or method

// #include<stdio.h>

// int main(){
//     int arr[3][10];
//     int mul[]={2,7,9};

//     for (int i = 0; i <3; i++)
//     {
//         for (int j = 0; j <10; j++)
//         {
//             arr[i][j]=mul[i]*(j+1);
//         }
        
//     }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             printf("The value of arr[%d][%d] is: %d\n",i,j,arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }