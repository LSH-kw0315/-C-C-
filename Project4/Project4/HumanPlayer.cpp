#include "HumanPlayer.h"
int HumanPlayer::getGuess() {
	int n=-1;
	do {
		cout << "please input integer between 0 ~ 99:";
		cin >> n;
		cin.clear();
	} while (n < 0 || n>99);
	return n;
}
