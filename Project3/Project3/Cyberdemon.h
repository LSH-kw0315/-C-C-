#ifndef CYBERDEMON_H
#define CYBERDEMON_H
#include "demon.h"
class Cyberdemon :public Demon
{
public:
	Cyberdemon() :Demon("Cyberdemon") {};
	Cyberdemon(int num1, int num2) :Demon("Cyberdemon", num1, num2) {};
	int attack(int damage);
	~Cyberdemon()
	{

	}
};
#endif


