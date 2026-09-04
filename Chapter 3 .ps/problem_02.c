/* Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user
*/
#include <stdio.h>

int main()
{
    int sub1;
    printf("The marks of student in sub1 is : ");
    scanf("%d", &sub1);
    int sub2;
    printf("The marks of student in sub2 is : ");
    scanf("%d", &sub2);
    int sub3;
    printf("The marks of student in sub3 is : ");
    scanf("%d", &sub3);

    float percentage = (sub1 + sub2 + sub3) / 3.0;
    printf("Percentage scored by student is %f\n",percentage);

    if (percentage >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("The student has passed his exam");
    }

    else
    {
        printf("The student is failed in his exam");
    }

    return 0;
}