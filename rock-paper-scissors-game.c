#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int yourTurn, computerTurn;
    printf("Game Rules: 1 for Rock, 2 for Paper, 3 for Scissors\n\n");

    int yourWinCount = 0, computerWinCount = 0, tieCount = 0, invalidInputCount = 0;

    for (int i = 0; i < 6; i++)
    {
        computerTurn = rand() % 3 + 1; // Generate a random number between 1 and 3
        printf("Enter your choice (1-3): ");
        scanf("%d", &yourTurn);
        if (yourTurn < 1 || yourTurn > 3)
        {
            printf("Invalid Input!\n");
            invalidInputCount++;
            continue;
        }

        printf("Your choice: %d & Computer's choice: %d\n", yourTurn, computerTurn);
        if (yourTurn == computerTurn)
        {
            printf("It's a tie!\n\n");
            tieCount++;
        }
        else if ((yourTurn == 1 && computerTurn == 3) || (yourTurn == 2 && computerTurn == 1) || (yourTurn == 3 && computerTurn == 2))
        {
            printf("You win!\n\n");
            yourWinCount++;
        }
        else
        {
            printf("Computer wins!\n\n");
            computerWinCount++;
        }
    }

    printf("Your wins: %d\n", yourWinCount);
    printf("Computer wins: %d\n", computerWinCount);
    printf("Ties: %d\n", tieCount);
    printf("Invalid inputs: %d\n", invalidInputCount);
    if (yourWinCount > computerWinCount)
    {
        printf("You win!\n");
    }
    else if (computerWinCount > yourWinCount)
    {
        printf("Computer wins!\n");
    }
    else
    {
        printf("It's a tie!\n");
    }

    return 0;
}