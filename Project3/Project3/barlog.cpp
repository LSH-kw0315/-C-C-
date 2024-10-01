#include "barlog.h"
int Barlog::attack(int damage) {
	int result=Demon::attack(damage);

	int secondAttack = (rand() % getStrength()) + 1;
	cout << "Barlog speed attack inflicts " << secondAttack << "additinal damage points!" << endl;
	result += secondAttack;
	return result;
}