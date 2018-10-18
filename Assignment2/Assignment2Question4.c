/*
 ============================================================================
 Name        : Assignment q4
 Author      : Charles Zhang 400131890
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status { CONTINUE, WON, LOST };

int rollDice(void);
int playCraps(void);

//I only commented the sections of code I modified from the original
int main(void) {
	//intialized bank balance
	int bankBalance = 1000;

	//while loops keeps running until breaks
	while(1){
		int wager;

		printf("\n");
		printf("Your bank balance is %d \n", bankBalance);

		//while loops ends thus ending program if bankBalance reaches 0
		if (bankBalance <= 0){
			printf("Sorry. You Busted!");
			break;
		}

		//ask user to enter wager
		printf("Enter Wager in whole numbers: ");
		//saves wager in wager
		scanf("%d", &wager);

		//check if the wager is not bigger than the bankBalance
		if (wager > bankBalance){
			printf("You dont have enough! Enter a smaller amount!");
		}

		//run playCraps and change bankBalance based on results
		else {
			bankBalance = bankBalance + wager * playCraps();
		}
	}
	return EXIT_SUCCESS;
}

//playcraps is not the main function anymore because it's called over and over again
int playCraps(void) {

	//add phrases for chatter
	char winPhrases[][40] = {"Winner winner chicken dinner!", "Did you cheat man?", "Impressive!", "You think you're pretty good huh?"};
	char losePhrases[][40] = {"Are you sure you want to play again?", "Better luck next time!", "Everyone loses!", "Blah! Loser!"};
	srand(time(NULL));

	int myPoint;
	enum Status gameStatus;
	int sum = rollDice();

	switch(sum){

	case 7:
	case 11:
		gameStatus = WON;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = LOST;
		break;

	default:
		gameStatus = CONTINUE;
		myPoint = sum;
		printf("Point is %d\n", myPoint);
		break;
	}

	while (CONTINUE == gameStatus){
		sum = rollDice();

		if (sum == myPoint){
			gameStatus = WON;
		}
		else{
			if (7 == sum){
				gameStatus = LOST;
			}
		}
	}

	if (WON == gameStatus){
		puts("Player wins");
		//chatter
		printf("%s \n", winPhrases[(rand() % 4)]);
		//return 1 (this affects the calculation of the new bankBalance in main:)
		return 1;
	}
	else{
		puts("Player loses");
		//chatter
		printf("%s \n", losePhrases[(rand() % 4)]);
		//return 1 (this affects the calculation of the new bankBalance in main:)
		return -1;
	}
}

int rollDice(void){
	int die1 = 1 + (rand() % 6);
	int die2 = 1 + (rand() % 6);

	printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
	return die1 + die2;
}
