#include "creature.h"
#include "demon.h"
#include "barlog.h"
#include "Cyberdemon.h"
#include "Elf.h"
#include "Human.h"
void battleArena(Creature& cr1, Creature& cr2);
int main() {
	Creature* cr[4] = { new Human(25,200),new Barlog(25,200),new Elf(25,200),new Cyberdemon(25,200) };
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 3; i++) {
		while (true) {
			battleArena(*cr[i], *cr[i + 1]);
			if (cr[i]->getHitpoints() <= 0 && cr[i + 1]->getHitpoints() <= 0) {
				cout << "draw game!" << endl;
				break;
			}
			else if (cr[i]->getHitpoints() > 0 && cr[i + 1]->getHitpoints() <= 0) {
				cout << cr[i]->getSpicies() << " win!" << endl;
				break;
			}
			else if (cr[i]->getHitpoints() <= 0 && cr[i + 1]->getHitpoints() > 0) {
				cout << cr[i + 1]->getSpicies() << " win!" << endl; 
				break;
			}
		}
		cr[i + 1]->setHitpoints(200);
		cout << "\n\n";
	}
}
void battleArena(Creature& cr1, Creature& cr2) {
	int cr1_hp = cr1.getHitpoints();
	int cr2_hp = cr2.getHitpoints();
	int cr1_deal = cr1.getDamage();
	int cr2_deal = cr2.getDamage();
	cr1_hp -= cr2_deal;
	cr2_hp -= cr1_deal;
	cr1.setHitpoints(cr1_hp);
	cr2.setHitpoints(cr2_hp);

}