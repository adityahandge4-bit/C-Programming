#include<stdio.h>

int main(){
    int a=1;int b=1;
    printf("The value of a and b is %d.\n",a&&b);
    printf("The value of a or b is %d.\n",a||b);
    printf("The value of not(a) is %d.\n",!a);

    if(a&&b){
        printf("The condition is true!\n"); // This will be executed whenthe a&&b will be true otherwise it will not print the statment under the condition of if.
    }
    // Both the statements mentioned will give the same output and like how we can write the codes in easier way without writing unnecessary code
    if(a){
        if(b){
            printf("The condition is true!");
        }
    }
    return 0 ;
}
// Making use of logical and the relational operators make our atsks easy and prevent from writing the bigger codes