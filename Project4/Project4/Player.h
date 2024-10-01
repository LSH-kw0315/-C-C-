#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#define EQUAL 0
#define BIG 1
#define SMALL 2
using namespace std;
class Player
{
public:
	virtual int getGuess() { return 0; }
	virtual void getMyClue(int mynum, int state) {};
	virtual void getOpClue(int opnum, int state) {};
	virtual ~Player()
	{

	}
};

#endif