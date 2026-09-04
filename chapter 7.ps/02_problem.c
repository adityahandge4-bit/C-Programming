/*
If
S[3]
 is a 1-D array of integers then
*(S+3)
 refers to the third element:
i. True.
ii. False.
iii. Depends
*/

#include<stdio.h>

int main(){
    int s[3];

    printf("Enter the elements inside the array s: \n");

    for (int i = 0; i <3; i++)
    {
        scanf("%d",&s[i]);
    }

    printf("The element at s+1 position is %d\n",*(s+1)); // 2
    printf("The element at s+3 position is %d\n",*(s+3)); // This will give wromg answer because there are only three element and you are asking the value at 4th position


  
    
    return 0;
}