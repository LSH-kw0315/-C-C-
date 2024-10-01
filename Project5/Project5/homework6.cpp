#include "Dice.h"
#include "LoadedDice.h"
#include <iostream>
using namespace std;
int rollTwoDice(const Dice& die1, const Dice& die2);
int main() {
	srand((unsigned int)(time(NULL)));
	Dice* dice1=new Dice();
	Dice* dice2=new Dice(12);
	for (int i = 0; i < 10; i++) {
		cout << rollTwoDice(*dice1,*dice2)<<endl;
	}
	cout << endl << endl;
	Dice* dice3 = new LoadedDice();
	Dice* dice4 = new LoadedDice(12);
	for (int i = 0; i < 10; i++) {
		cout << rollTwoDice(*dice3, *dice4) << endl;
	}
}
int rollTwoDice(const Dice& die1, const Dice& die2) {
	return die1.rollDice() + die2.rollDice();
}