#include "Dice.h"
int Dice::rollDice()const
{
	return (rand() % numSides) + 1;
}