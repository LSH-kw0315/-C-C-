#ifndef DICE_H
#define DICE_H
#include <cstdlib>
class Dice
{
public:
	Dice() :numSides(6) {};
	Dice(int num) :numSides(num) {};
	virtual int rollDice()const;
	virtual ~Dice()
	{

	}
protected:
	int numSides;
};
#endif

