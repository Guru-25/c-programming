/* Guess the Number */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, guess;
    time_t t;

    srand((unsigned) time(&t));
    randomNumber = rand() % 21;

    printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess.\n\n");

    for (int i = 1; i <= 5; ++i)
    {
        for (;;)
        {
            printf("You have %d tries left.\n", (5-i)+1);
            printf("Enter a guess: ");
            scanf("%d", &guess);
            if (guess >= 0 && guess <= 20)
                break;
            else
            {
                printf("Hey you can only enter number between 0 to 20\n\n");
                continue;
            }
        }

        if (guess > randomNumber)
        {
            printf("Sorry, %d is wrong. My number is less than that.\n\n", guess);
            continue;
        }
        else if (guess < randomNumber)
        {
            printf("Sorry, %d is wrong. My number is greater than that.\n\n", guess);
            continue;
        }
        else
        {
            printf("\nCongratulations, You guessed it!");
            break;
        }
    }

    if (guess != randomNumber)
        printf("You had five tries and failed. The number was %d", randomNumber);

    return 0;
}