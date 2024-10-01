#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include "Player.h"
class ComputerPlayer :
    public Player
{
public:
	ComputerPlayer() :Player() { myClue[0] = -1; myClue[1] = -1; opClue[0] = -1; opClue[1] = 1; };
	int getGuess();
	void getMyClue(int mynum, int state) { myClue[0] = mynum; myClue[1] = state; };
	void getOpClue(int opnum, int state) { opClue[0] = opnum; opClue[1] = state; }
		~ComputerPlayer()
	{

	};
private:
	int myClue[2];
	int opClue[2];
};
#endif
