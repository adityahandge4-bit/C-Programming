// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function.The values must be taken as an input from the user.

#include<stdio.h>

struct complex
{
    int real;
    int imaginary;
};

void display(struct complex str[5]){
    for (int i = 0; i <5; i++)
    {
        scanf("%d" "%d",&str[i].real,&str[i].imaginary);
    }

    for (int i = 0; i <5; i++)
    {
        printf("The complex numbers is %d+%di\n",str[i].real,str[i].imaginary);
    }   
}


int main(){
    struct complex complex[5];

    display(complex);

    
    return 0;
}

// or method
// #include<stdio.h>

// typedef struct complex
// {
//     int real;
//     int imaginary;
// } C;

// void display(C c1){
//     printf("The complex number is %d + %di\n",c1.real,c1.imaginary);
// }


// int main(){
//     C carr[67];
//     for (int i = 0; i <5; i++)
//     {
//         printf("Enter the real part: \n");
//         scanf("%d",&carr[i].real);
//         printf("Enter the imaginary part: \n");
//         scanf("%d",&carr[i].imaginary);
//         display(carr[i]);
//     }

    

//     return 0;
// }