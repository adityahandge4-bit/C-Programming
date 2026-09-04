//  Repeat problem 3 for a general input provided by the user using scanf
#include<stdio.h>

int main(){
    int tables[10];

    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for (int i = 0; i < 10; i++)
    {
        tables[i]=n*(i+1);
    }

    printf("The table of %d is : \n",n);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",n,i+1,tables[i]);
    }
    
    
    return 0;
}