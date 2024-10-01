#ifndef HUMAN_H
#define HUMAN_H
#include "creature.h"
class Human :
    public Creature
{
public:
	Human() :Creature("Human") {};
	Human(int num1, int num2) :Creature("Human", num1, num2) {};
	int attack(int damage) { return damage; }
	~Human()
	{

	}
};
#endif

