#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guess(int N){
	int number, guess, numberguess = 0;
    //Random number generator
	srand(time(NULL));
    // Generate a random number
	number = rand() % N;

	printf("Guess a number between 1 and %d\n", N);

	//Work until user guesses the correct number
	do {
        if (numberguess > 15) {
			printf("\nYou Loose! Please Try Again\n");
			break;
		}
        // Input by user
		scanf("%d", &guess);

		// When user guesses lower than actual number
		if (guess > number){
			printf("Please Enter Lower number...\n");
			numberguess++;
		}

		// When user guesses higher than actual number
		else if (number > guess){
			printf("Please Enter Higher number...\n");
			numberguess++;
		}
		else
			printf("You guessed the number in %d attempts!\n", numberguess);

	} while (guess != number);
}
// Driver Code
int main()
{
	int N = 100;
    // Function call
	guess(N);
    return 0;
}
