#include "LoadedDice.h"
int LoadedDice::rollDice() const {
	int n = rand() % 2;
	if (n == 0) {
		return numSides;
	}
	return (rand() % numSides) + 1;
}