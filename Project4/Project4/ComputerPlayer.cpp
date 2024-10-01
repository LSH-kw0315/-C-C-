#include "ComputerPlayer.h"
int ComputerPlayer::getGuess() {
	if (myClue[1] == BIG && opClue[1] == BIG) {
		if (myClue[0] >= opClue[0]) {
			return rand() % (opClue[0]);
		}
		else {
			return rand() % (myClue[0]);
		}
	}
	else if (myClue[1] == SMALL && opClue[1] == SMALL) {
		if(myClue[0]>=opClue[0]){
			return (rand() % (100 - myClue[0])) + myClue[0];
		}
		else {
			return (rand() % (100 - opClue[0])) + opClue[0];
		}

	}
	else if(myClue[1]<0 && opClue[1]<0) {
		return rand() % 100;
	}else if(myClue[1]<0 && opClue[1]>0 || myClue[1]>0 && opClue[1]<0) {
		if (opClue[1] > 0) {
			if (opClue[1] == BIG) {
				return (rand() % opClue[0]);
			}
			else {
				return (rand() % (100 - opClue[0])) + opClue[0];
			}
		}
		else {
			if (myClue[1] == BIG) {
				return (rand() % myClue[0]);
			}
			else {
				return (rand() % (100 - myClue[0])) + myClue[0];
			}
		}
	}
	else {
		if (myClue[0] >= opClue[0]) {
			return (rand() % (myClue[0] - opClue[0]) + opClue[0]);
		}
		else {
			return (rand() % (opClue[0] - myClue[0]) + myClue[0]);
		}
	}
}