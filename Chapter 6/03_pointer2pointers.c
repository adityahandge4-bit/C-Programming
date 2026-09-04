#include<stdio.h>

int main(){
    int i=6;
    int*j=&i;
    int**k=&j;

    printf("The value of i is %d\n",i); // this will directly give value of i
    printf("The address of j is %p\n",j); // j also have the address even though it stores the address of the i


    printf("The value of j is %d\n",*j); // This will give the value of i because * means to be the value and value of whom,"j" which stores the memory location of i and *j means it is actually *(&i) i.e.(value of memory location or address of i)

    printf("The value of i is %d\n",*(&i)); // This means once again the value i would be printed and just like 7/7 is 1 means 7 cancels the 7 thus (* cancels the &) and at last value as i remains.

    printf("The value of k is %d\n",**(&j)); // now as I said * cancels the & and at last it returns *j which means once again the value of address of i
    
    return 0;
}