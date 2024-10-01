#include "creature.h"

int Creature::getDamage() {
	int damage;
	damage = (rand() % strength) + 1;
	cout << getSpicies() << " attacks for " << damage << " points!" << endl;
	damage=attack(damage);
	return damage;
	
}
