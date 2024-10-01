#ifndef CREATURE_H
#define CREATURE_H
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class Creature {
private:
	string type;
	int strength;
	int hitpoints;
	
public:
	Creature():type("none"),strength(10),hitpoints(100) { };
	Creature(int num1, int num2):type("none"), strength(num1), hitpoints(num2) {};
	Creature(string nType) :type(nType), strength(10), hitpoints(100) {};
	Creature(string nType, int nStrength, int nHitpoints) :type(nType), strength(nStrength), hitpoints(nHitpoints) {};
	virtual int getDamage();
	virtual int attack(int damage)=0;
	virtual ~Creature() {};
	void setStrength(int num) { strength = num; }
	void setHitpoints(int num) { hitpoints = num; }
	int getStrength() { return strength; }
	int getHitpoints() { return hitpoints; };
	virtual string getSpicies() { return type; };
};


#endif

