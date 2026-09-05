/*
Snake, Water, Gun (or Rock, Paper, Scissors) is a game that most of us have played during our school
days. It is a simple game where the player competes against the computer.
Write a C program capable of playing this game with the user.
The program should accept the user's choice and then randomly generate the computer's choice
before displaying the result.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int player,computer=(rand() % 3);

    printf("Choose 0 for Snake, 1 for Water,2 for Gun \n");
    scanf("%d",&player);
    printf("Computer choice %d\n",computer);

    if (player==0 && computer==1)
    {
        printf("Player wins!");
    }

    else if (player==0 && computer==2)
    {
        printf("Computer wins!");
    }

    else if (player==0 && computer==0)
    {
        printf("It's a tie!");
    }

    else{
        if (player == 1 && computer == 0)
        {
            printf("Computer wins!");
        }

        else if (player == 1 && computer == 2)
        {
            printf("player wins!");
        }

        else if (player==1 && player==1)
        {
            printf("It's a tie!");
        }
        
        else{
            if (player == 2 && computer == 0)
            {
                printf("Player wins!");
            }

            else if (player == 2 && computer == 1)
            {
                printf("Computer wins!");
            }

            else{
                printf("It's a tie!");
            }
        }
    }
    
    
    
    
    return 0;
}