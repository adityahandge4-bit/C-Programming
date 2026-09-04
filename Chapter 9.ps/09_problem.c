// Write a structure capable of storing date. Write a function to compare those dates
#include<stdio.h>
struct date
{
    int day;
    int month;
    int year;
};

void compare(struct date d1, struct date d2){
    if (d1.year<d2.year)
    {
        printf("The date 1 comes earlier that of date 2");
    }

    else if (d1.year>d2.year)
    {
        printf("The date 2 comes earlier that of date 1");
    }

    else{
        // This condition will be considered when both years are same
        if (d1.month>d2.month)
        {
            printf("The date 2 comes earlier that of date 1");
        }

        else if (d2.month>d1.month)
        {
            printf("The date 1 comes earlier that of date 2");
        }
        
        else{
            // This condition will run when both months are equal
            if (d1.day<d2.day)
            {
                printf("The date 1 comes earlier that of date 2");
            }

            else if(d1.day>d2.day){
                printf("The date 2 comes earlier that of date 1");
            }

            else{
                printf("Both dates are equal");
            }
            
        }
        
    }
    
    
}

    int main()
{
    struct date d1={6,9,2026};
    struct date d2={12,4,2018};
    compare(d1,d2);

    
    return 0;
}