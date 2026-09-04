// Write a function sumVector which returns the sum of two vectors passed to it.The vectors must be two -dimensional.

// #include <stdio.h>

struct vector
{
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main()
{
    struct vector v1 = {23, 67};
    struct vector v2 = {45, 89};
    struct vector v3 = sumVector(v1, v2);
    printf("The sum of v1 vector and v2 vector is %di+%dj", v3.i, v3.j);

    return 0;
}
// #include<stdio.h>
// struct vector
// {
//     int i;
//     int j;

// };

// int sumVector(struct vector v1,struct vector v2){
//     struct vector v3={(v1.i+v2.i),(v1.j+v2.j)};
//     printf("The sum of vector v1 and v2 is %di+%dj",v3.i,v3.j);
// }


// int main(){
//     struct vector v1={12,34};
//     struct vector v2={2,3};
    
//     sumVector(v1,v2);

    
    
//     return 0;
// }