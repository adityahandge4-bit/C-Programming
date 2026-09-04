#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = n; i; i--)// here if value of i is non-zero then for loop will definitely print that value
    {
        printf("%d\n", i);
    }

    return 0;
}
/*
This for loop will keep on running until i becomes 0.
The loop runs in following steps:
1. 'i' is initialized to 5.
2. The condition "i" (0 or none) is tested.
3. The code is executed.
4. 'i' is decremented.
5. Condition 'i' is checked & code is executed if it's not 0.
6. And so on until 'i' becomes 0
*/