#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include "main.h"

#define DRAW "DRAW"
#define INVALID "INVALID"
#define PLAYER1 "Player1"
#define PLAYER2 "Player2"
#define ROCK "rock"
#define PAPER "paper"
#define SCISSORS "scissors"

char* rockPaperScissors(char player1_choice[], char player2_choice[]);

int main() {
	return 0;
}

char* rockPaperScissors(char player1_choice[], char player2_choice[]) {
	if (player1_choice[0] == NULL || player2_choice[0] == NULL) {
		return "INVALID";
	}

	int i;
	int lim1 = sizeof(player1_choice) / sizeof(player1_choice[0]);
	int lim2 = sizeof(player2_choice) / sizeof(player2_choice[0]);
	for (i = 0; i < lim1; i++) {
		char temp = tolower(player1_choice[i]);
		player1_choice[i] = temp;
	}
	for (i = 0; i < lim2; i++) {
		char temp = tolower(player2_choice[i]);
		player2_choice[i] = temp;
	}

	if (strcmp(player1_choice, player2_choice) == 0) {
		return DRAW;
	}
	
	else if ((strcmp(player1_choice, ROCK) == 0 && strcmp(player2_choice, PAPER) == 0) || (strcmp(player1_choice, PAPER) == 0 && strcmp(player2_choice, SCISSORS) == 0) || (strcmp(player1_choice, SCISSORS) == 0 && strcmp(player2_choice, ROCK) == 0)) {
		return PLAYER2;
	}
	else if ((strcmp(player1_choice, PAPER) == 0 && strcmp(player2_choice, ROCK) == 0) || (strcmp(player1_choice, SCISSORS) == 0 && strcmp(player2_choice, PAPER) == 0) || (strcmp(player1_choice, ROCK) == 0 && strcmp(player2_choice, SCISSORS) == 0)) {
		return PLAYER1;
	}
	else {
		return INVALID;
	}
}

