/* Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user
*/
// #include <stdio.h>

// int main()
// {
//     int sub1;
//     printf("The marks of student in sub1 is : ");
//     scanf("%d", &sub1);
//     int sub2;
//     printf("The marks of student in sub2 is : ");
//     scanf("%d", &sub2);
//     int sub3;
//     printf("The marks of student in sub3 is : ");
//     scanf("%d", &sub3);

//     float percentage = (sub1 + sub2 + sub3) / 3.0;
//     printf("Percentage scored by student is %f\n",percentage);

//     if (percentage >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
//     {
//         printf("The student has passed his exam");
//     }

//     else
//     {
//         printf("The student is failed in his exam");
//     }

//     return 0;
// }

#include <stdio.h>
int main(){
    int sub1;
    printf("Enter the marks of student in 1st subject: ");
    scanf("%d",&sub1);
    int sub2;
    printf("Enter the marks of student in 2nd subject: ");
    scanf("%d",&sub2);
    int sub3;
    printf("Enter the marks of student in 3rd subject: ");
    scanf("%d",&sub3);

    float percentage=(sub1+sub2+sub3)/3.0;
    printf("The student has scored %f percenatge\n",percentage);

    if (percentage >= 40 && sub1 >= 33 && sub2 >= 33, sub3 >= 33)
    {
        printf("The student has passed the exam!");
    }

    else{
        printf("The student has failed in exam!");
    }

    return 0;
    

}