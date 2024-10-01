#include "Elf.h"
int Elf::attack(int damage) {
	
	
	if ((rand()%100) < 10) {
		cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
		damage *= 2;
	}
	return damage;
}