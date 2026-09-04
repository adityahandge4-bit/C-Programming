#include<stdio.h>

int ten_times(int);

int ten_times(int x){
    x=10*(x);

}
int main(){
    int i=34;
    printf("The variable of i is %d\n",i);

    ten_times(i);
    printf("The value of variable i is %d\n",i);

   return 0;
}
// there will be no change in the value of i since you have just transfer the image of value of i but the actual value of i will never changed untill and unless you will not give the address of the variable to the function.