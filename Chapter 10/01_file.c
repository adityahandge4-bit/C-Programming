#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("Adi.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);

    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);

    fclose(ptr);
    return 0;
}
/*
overview:
1.First make a pointer
2.open the file inside the pointer
3.whichever data type you want to be pasted write the data type accordingly
4.doing the scanning of opened file i.e. going in ptr then searching for integer value or any data type as you mentioned and then giving address of the variable which will store the data type
5.last print the data type
*/