#include<stdio.h>

int main(){
    for (int i = 0; i < 20; i++)
    {
        if (i==6)
        {
            /*break; "Break statement completely exists the loop"
            this will give output as:
            0
            1
            2
            3
            4
            5
            */
            /*continue; "Continue statement skips the particular iteration of the loop"
            0
            1
            2
            3
            4
            5
            7
            8
            9
            10
            11
            12
            13
            14
            15
            16
            17
            18
            19*/
        }
        
        printf("%d\n",i);
    }
    
    
    return 0;
}