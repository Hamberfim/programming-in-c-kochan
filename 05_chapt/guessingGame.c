#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
    srand(time(NULL));
    int randNum = (rand() % 9) + 1; // 1-10
    int userNum;
    int again = 1;
    printf("Guess the number game!\n");

    // loop here
    do
    {
        printf("Enter your guess: \n");
        scanf("%d", &userNum);
        if (randNum > userNum)
        {
            printf("Too low!\n");
        }
        else if (randNum < userNum)
        {
            printf("Too high!\n");
        }
        else if (randNum == userNum)
        {
            printf("You win!\n");
            again = 0;
        }
        else
        {
            printf("Input not recognized.");
        }
    } while (again != 0);

    return 0;
}