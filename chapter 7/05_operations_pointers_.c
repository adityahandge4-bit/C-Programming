// #include<stdio.h>
// // for addition of number in pointer
// int main(){
//     int a[5]={12,34,55,56,67};
//     int*ptr=&a[0];
//     for (int i = 0; i <5; i++)
//     {
//         printf("The values inside the arrays are : \n%d\n",a[i]);
//     }
//     printf("The current address of ptr is %u\n",ptr);
//     ptr=ptr+1;
//     printf("The address now is shifted to %u\n",ptr);
//     return 0;
// }
// #include <stdio.h>
// // // for subtraction of number in pointer
// int main()
// {
//     int a[5] = {12, 34, 55, 56, 67};
//     int *ptr = &a[3];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The values inside the arrays are %d\n", a[i]);
//     }
//     printf("The current address of ptr is %u\n", ptr);
//     ptr = ptr - 1;
//     printf("The address now is shifted to %u\n", ptr);

// // output is:
// // The current address of ptr is 6422288
// // The address now is shifted to 6422284
//     return 0;
// }

// #include<stdio.h>
// // // subtraction of one pointer from another

// int main(){

//     int a[7]={12,34,21,55,67,78,90};
//     int*ptr=&a[4];
//     int*ptr1=&a[1];

//     for (int i = 0; i <7; i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     printf("The address of 4th element is the array is %u\n",ptr);
//     printf("The address of 1st element is the array is %u\n",ptr1);

//     printf("The difference is %td\n", ptr - ptr1);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a[7] = {12, 34, 56, 77, 65, 11, 22};

    int *ptr = &a[6];
    int *ptr1 = &a[5];

    printf("The address of ptr is %u\n", ptr);
    printf("The address of ptr1 is %u\n", ptr1);

    if (ptr == ptr1)
    {
        printf("Yes the addresses are same!\n");
        
    }
    else if (ptr < ptr1)
    {
        printf("True ptr points number early than ptr1\n");
    }
    else if(ptr>ptr1)
    {
        printf("true ptr points number after ptr1\n");
    }


    return 0;
}