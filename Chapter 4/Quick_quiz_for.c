// write a program to print first n natural numbers by using for loop
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i < n + 1; i++)
    {
        printf("%d\n", i);
    }
    // explanation
    /*
    first thing when i=1 and for e.g. n=12 then 
    1st step: entering the value of n
    2nd step: after initializing checking whether the initializing value satisfy the condition or not i.e. i<n+1
    3rd step: If satisfies i=1 i.e. 1 will be printed and if not satisfy then loop will break as you gave a false value inside the for loop to run
    4th step: then i++ this section will be in action and will do increament in value of i 
    5th step: then the increament value will be checked whether the value is satisfying the condition or not 
    6th step: If satisfies the condition then the increament value will be printed and if not loop will break
    7th step: again i++ will be in action, will bring increament in the value of i and then will check it satisfy the condition or not if satisfy then a new increamnet value will be printd and if not he loop will end at that point.
    and this step goes on running until the value will not become false or out of the range given inside the condition

    */
    return 0;
}