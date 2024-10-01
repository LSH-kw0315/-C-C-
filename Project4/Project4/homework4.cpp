
#include "Player.h"
#include "ComputerPlayer.h"
#include "HumanPlayer.h"

int checkForWin(int guess, int answer);
void play(Player& pl1, Player& pl2);
int main() {
	srand((unsigned int)(time(NULL)));
	Player* p1 = new ComputerPlayer();
	Player* p2 = new ComputerPlayer();
	Player* p5 = new ComputerPlayer();
	Player* p3 = new HumanPlayer();
	Player* p4 = new HumanPlayer();
	play(*p1, *p2);
	play(*p5, *p3);
	play(*p3, *p4);
}
int checkForWin(int guess, int answer) {
	if (answer == guess) {
		cout << "You win!" << endl;
		return EQUAL;
	}
	else if (answer > guess) {
		cout << "your guess is too low." << endl;
		return SMALL;
	}
	else {
		cout << "your guess is too high." << endl;
		return BIG;
	}
}
void play(Player& pl1, Player& pl2) {
	int answer = 0, guess = 0;
	answer = rand() % 100;
	int state = -1;
	while (state!=EQUAL) {
		cout << "Player 1's turn!" << endl;
		guess = pl1.getGuess();
		state = checkForWin(guess, answer);
		if (state==EQUAL) {
			break;
		}
		pl1.getMyClue(guess, state);
		pl2.getOpClue(guess, state);
		cout << "Player 2's turn!" << endl;
		guess = pl2.getGuess();
		state = checkForWin(guess, answer);
		pl1.getOpClue(guess, state);
		pl2.getMyClue(guess, state);
	}
}