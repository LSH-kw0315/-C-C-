#ifndef LOADEDDICE_H
#define LOADEDDICE_H
#include "Dice.h"
class LoadedDice :
    public Dice
{
public:
	LoadedDice() :Dice() {};
	LoadedDice(int num) :Dice(num) {};
	int rollDice() const;
	~LoadedDice()
	{

	}
};
#endif
