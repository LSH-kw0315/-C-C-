#ifndef DEMON_H
#define DEMON_H
#include "creature.h"
class Demon :public Creature {
public:
	Demon() :Creature() {};
	Demon(int num1, int num2) :Creature(num1, num2) {};
	Demon(string type) :Creature(type) {};
	Demon(string type, int num1, int num2) :Creature(type, num1, num2) {};
	int attack(int damage);
	~Demon() {};
};

#endif
