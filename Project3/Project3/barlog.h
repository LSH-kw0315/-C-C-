#ifndef BARLOG_H
#define BARLOG_H
#include "demon.h"
class Barlog:public Demon 
{
public:
	Barlog() :Demon("Barlog") {};
	Barlog(int num1, int num2) :Demon("Barlog",num1, num2) {};
	int attack(int damage);
	~Barlog()
	{

	}
};
#endif

