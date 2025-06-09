#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char start;
    int random_no, no_of_guesses = 10, ans;
    printf("########## Welcome To Guess The Number Game ##########\n");
    while (1)
    {
        printf("Start Game?\n(Y/N)\n");
        scanf("%c", &start);
        while (getchar() != '\n')
            ;
        if (tolower(start) == 'y')
        {
            srand(time(0));
            random_no = (rand() % 100) + 1;
            while (ans != random_no && no_of_guesses != 0)
            {
                printf("You have %d guesses left\n", no_of_guesses);
                printf("Guess the random number generated:\n");
                scanf("%d", &ans);
                if (ans == random_no)
                {
                    printf("You won!\n");
                    break;
                }
                else if (ans < random_no)
                {
                    printf("Guess higher\n");
                }
                else
                    printf("Guess lower\n");
                no_of_guesses--;
                if (no_of_guesses == 0)
                {
                    printf("You Lost!");
                }
            }
            break;
        }
        else if (tolower(start) == 'n')
        {
            printf("Thankyou!\n");
            break;
        }
        else
            printf("Enter valid input!\n");
    }

    return 0;
}