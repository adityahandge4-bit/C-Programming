#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // Seed for random number generation

    int random_number = (rand() % 100) + 1;
    int no_guesses=0;
    int guessed;

    // printf("Random number: %d\n", random_number);

    do
    {
        printf("Guess the number: ");
        scanf("%d",&guessed);

        if (guessed<random_number)
        {
            printf("Higher number please!\n");
        }

        else if (guessed > random_number)
        {
            printf("Lower number please!\n");
        }

        else{
            printf("Congrats!\n");
        }
        no_guesses++;

    } while (guessed != random_number);

    printf("You guessed the number in %d guesses",no_guesses);

    return 0;
}