//  Write a program to print the value of a variable i by using a pointer to pointer method
#include<stdio.h>

int main(){
  int i=23;
  int*j=&i;
  int**k=&j;

  printf("Value of i is: %d\n",i);
  printf("Value of i is: %d\n",*j);
  printf("Value of i is: %d", **k); /*this would be like this as :
  *(*k)
    ↓
  *(*(&j))
    ↓
  *(j)
    ↓
    i
The short summary
    */
  return 0;
}