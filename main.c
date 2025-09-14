#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
     srand(time(NULL));
     char playAgain = '\n';

     do
     {
          int guess = 0;
          int tries = 0;
          int min = 1;
          int max = 100;

          int answer = (rand() % (max - min + 1)) + min;

          printf("\n//*** NUMBER GUESSING GAME ***\\\\\n\n");

          do
          {
               printf("Guess a number between %d and %d: ", min, max);

               if (scanf("%d", &guess) != 1)
               {
                    printf("Please enter a valid number!\n");
                    while (getchar() != '\n');
                    continue;
               }

               tries++;

               if (guess < answer)
               {
                    printf("Try a higher number!\n");
               }
               else if (guess > answer)
               {
                    printf("Try a lower number!\n");
               }
               else
               {
                    printf("🎉 CORRECT! The answer is %d.\n", answer);
                    printf("It took you %d tries", tries);
               }

          } while (guess != answer);

          printf("\nDo you want to play again? (Y/n): ");
          scanf(" %c", &playAgain);

     } while (tolower(playAgain) == 'y');

     printf("Thanks for palying my game! BYEEE! :)\n");

     return 0;
}