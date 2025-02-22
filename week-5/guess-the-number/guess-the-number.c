/*
    * Author: Hunter Pope
    * Date: 2/22/25
    * Title: Guess the Number
    * Description: Allows a user to guess a number 1-50 and gives feedback on whether the guess is too high or too low.
*/

/* include statements */
#include <stdio.h> 
#include <stdlib.h> /* for random number */
#include <time.h> /* for seeding the random number generator */

/* main function */
int main() {
    int target, guess, attempts = 0;

    srand(time(0)); /* seed the random number generator */
    target = rand() % 50 + 1; /* generate a random number between 1 and 50 */

    printf("*** Guess the Number ***" "\n\n");
    printf("A random number has been chosen between 1 and 50. Try and guess it!" "\n\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target) {
            printf("Too low! Try again." "\n\n");
        } else if (guess > target) {
            printf("Too high! Try again." "\n\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break; 
        }
    }

    return 0;
}