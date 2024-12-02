/*guessnumber.c
 * is a game that prompts the user
 * to guess a number generated at random.*/
#include<stdio.h>
#include<stdlib.h> // Enables use of rand()
#include<time.h> // Enables use of time()	   

int main(void) {
	srand((int)time(0)); // Unique seed
	// creates a number between 0-99.
	int random_number = rand() % 100;
	// new rando time seed, trying to keep it
	// between 0-99.
	int user_guess;
	int i;
	// this line prints the max value of rand().
	printf("~~guess the number between 0-99~~\n");
	printf("you have 10 attempts, enter a letter\n\
	and lose.\n");
	// the below line is for use by developers only
	// to know what the winning number is for test reasons.
	// remove or comment out before compiling or deploying.
	//printf("%d", random_number);
	printf("<3 ");
	scanf("%d", &user_guess);
	i = 1;
	while (user_guess != random_number) {
		printf("%d/10\n", i);
		i += 1;
		if (i == 11) {
			printf("game over.");
			return 1;
		}
		if (user_guess < random_number) { 
		printf("too low.\n$ ");
		scanf("%d", &user_guess);
		continue;		
		}
		printf("too high\n$ ");
		scanf("%d", &user_guess);
	}
	printf("You win!\n the number was %d", random_number);
	return 0;
}
