#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum board_inputs = { X = 'x', O = 'o', EMPTY = 0 }
enum menu_inputs = { PLAY, CHECK_STATS, QUIT }

int main() {

	srand(time(NULL));
	int random_var = rand();
	printf("this is a random test to see if var works: %d \n", random_var);

	struct entity {
		int win, lose, draw;
		char letter_choice;
	};

	struct entity player;
	struct entity comp;

	char board[3][3] = { EMPTY, EMPTY, EMPTY
						EMPTY, EMPTY, EMPTY
						EMPTY, EMPTY, EMPTY
					}

	printf("which letter do you want to be today my boi? X(x) or O(o)");

	char char_choice;
	fgets("%c", &char_choice);

	printf("you are %c this game so your enemy is %c", char_choice, char_choice);

menu:

	printf("start game? (p) check stats? (s) quit game? (q)");

	switch(input):
		case PLAY
		case CHECK_STATS
		case QUIT
	default:

game_start:

		printf("welcome to the game :D lets coin flip to see who goes first~\n\n");
		int x;
		x = rand() % 2;
		if ( x > 0 ) {
			printf("it's your turn :D");
		} else {
			Printf("it's the computers turn :D"); 
		}

game_run:

		int turn_counter = 0

		int player_choice;
		fgets("%d", &player_choice);

		switch(turn_counter)
	case 0:
		//playerturn
			switch(player_choice) {
					case 
						board[0][0] = player.letter_choice
					case 
						board[0][1] = player.letter_choice
					case 
						board[0][2] = player.letter_choice
					case 
						board[1][0] = player.letter_choice
					case 
						board[1][1] = player.letter_choice
					case 
						board[1][2] = player.letter_choice
					case 
						board[2][0] = player.letter_choice
					case 
						board[2][1] = player.letter_choice
					case 
						board[2][2] = player.letter_choice
		//computerturn
				case 1:
						computer_play(computer);


quit:
	printf("thanks for playing :D \n\n if you liked the game please tell me a feature you'd like to add :D \n\n");
	return 0;
}

void board_checker() {

	int counter;

	switch (board):
		case VERTICAL
		case HORIZONTAL
		case DIAGONAL
		case DRAW

}

void check_stats( struct entity ) {}
int computer_play( struct entity ) {

	int x  = rand() % 10;

}


