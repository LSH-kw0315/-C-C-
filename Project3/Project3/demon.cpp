#include "demon.h"
int Demon::attack(int damage) {

	if (rand()%100 < 5) {
		damage += 50;
		cout << "Demonic attack inflicts 50:" << " additional damage points!" << endl;
	}
	return damage;
	
}