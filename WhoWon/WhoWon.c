// samp - CSCN71020 - fall24 - section 1

#include "WhoWon.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


char* whoWon(char* playerOne, char* playerTwo) {
	char validHands[3][9] = {"Rock","Paper","Scissors"};
	int checkPlayer;
	bool playerOneValid = false;
	int firstHand;
	bool playerTwoValid = false;
	int secondHand;
	
	// loops to validate input against array containing acceptable input.
	for (int i = 0; i < 3; i++) {
		checkPlayer = strcmp(playerOne, validHands[i]);
		if (checkPlayer == 0) {
			playerOneValid = true;
			firstHand = i;
		}
	}
	for (int j = 0; j < 3; j++) {
		checkPlayer = strcmp(playerTwo, validHands[j]);
		if (checkPlayer == 0) {
			playerTwoValid = true;
			secondHand = j;
		}
	}
	if (!playerOneValid || !playerTwoValid) {
		return "Invalid";
	}

	// switch case to determine winner.
	switch (firstHand) {
	case 0:
		if (secondHand == 0)
			return "Draw";
		else if (secondHand == 1)
			return "Player2";
		else if (secondHand == 2) 
			return "Player1";
		break;
	case 1:
		if (secondHand == 0)
			return "Player1";
		else if (secondHand == 1)
			return "Draw";
		else if (secondHand == 2)
			return "Player2";
		break;
	case 2:
		if (secondHand == 0)
			return "Player2";
		else if (secondHand == 1)
			return "Player1";
		else if (secondHand == 2)
			return "Draw";
		break;
	default:
		return "Invalid";
		break;
	}
	return "Invalid";
}