#ifndef ELF_H
#define ELF_H
#include "creature.h"
class Elf :
    public Creature
{
public:
	Elf() :Creature("Elf") {};
	Elf(int num1, int num2) :Creature("Elf", num1, num2) {};
	int attack(int damage);
	~Elf()
	{

	}
};
#endif

