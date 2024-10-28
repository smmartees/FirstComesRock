// samp - CSCN71020 - fall24 - section 1

#include "WhoWon.h"
#include <stdio.h>
#include <string.h>

#define INVALID		0

int whoWon(char* playerOne, char* playerTwo) {
	int firstHand = 0;
	int secondHand = 0;
	int winner = 0;

	// validating first player's choice
	int rockCheck = strcmp(playerOne, "Rock");
	if (rockCheck == 0)
		firstHand = 1;

	int paperCheck = strcmp(playerOne, "Paper");
	if (paperCheck == 0)
		firstHand = 2;

	int scissorsCheck = strcmp(playerOne, "Scissors");
	if (scissorsCheck == 0)
		firstHand = 3;

	// validating second player's choice
	rockCheck = strcmp(playerTwo, "Rock");
	if (rockCheck == 0)
		secondHand = 1;

	paperCheck = strcmp(playerTwo, "Paper");
	if (paperCheck == 0)
		secondHand = 2;

	scissorsCheck = strcmp(playerTwo, "Scissors"); 
	if (scissorsCheck == 0)
		secondHand = 3;

	if (firstHand == 0 || secondHand == 0)
		return INVALID;

	// switch case to determine winner.
	switch (firstHand) {
	case 1:
		if (secondHand == 1)
			printf("Draw\n");
		else if (secondHand == 2) {
			printf("Player2");
			winner = 2;
		}
		else if (secondHand == 3) {
			printf("Player1\n");
			winner = 1;
		}
		break;
	case 2:
		if (secondHand == 1) {
			printf("Player1\n");
			winner = 1;
		}
		else if (secondHand == 2) {
			printf("Draw\n");
		}
		else if (secondHand == 3) {
			printf("Player2\n");
			winner = 2;
		}
		break;
	case 3:
		if (secondHand == 1) {
			printf("Player2\n");
			winner = 2;
		}
		else if (secondHand == 2) {
			printf("Player1\n");
			winner = 1;
		}
		else if (secondHand == 3) {
			printf("Draw\n");
		}
		break;
	}

	return winner;
}