#pragma once
#include "loadingBar.h"
#include "itemSystem.h"

using namespace std;

void pIntro() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                Hello ~person! Do you want to start your adventure?         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t1 -> Start game \t\t\t\t\t\t2 -> Exit\n";
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->> ";
}

void pWellcome() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#          Wellcome traveler! You have enter the gates of the Paradise!      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#              From now on, you can enjoy every wonder of this land.         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                   But be carefull and don't bite the apple!                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;

	cout << "\t\t\t\t\t\t{}__/}\n\t\t\t\t\t\t(•_•)\n\t\t\t\t\t\t( >HELLO YOU! <3";
	std::cout << endl;
}

void pActionBar(Warrior& war) {
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "# Life: ";
	normalBar(war.getCurrentHp(), war.getMaxHp());
	cout << war.getCurrentHp() << "/" << war.getMaxHp();
	cout << "  \t Experience: "
		<< war.getCurrentXP() << "/" << war.getXpToNextLvl() << " \tLevel: "
		<< war.getCurrentLevel() << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "1 -> CONTINUE  \t\t\t 2 -> CHARCTER \t\t\t 3 -> EXIT" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->> ";
}

void pBattleBar(Warrior& war, Enemy& eny) {
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "# Life: ";
	normalBar(war.getCurrentHp(), war.getMaxHp());
	cout << war.getCurrentHp() << "/" << war.getMaxHp();
	cout << "  \t Enemy: ";
	normalBar(eny.getCurrentHealth(), eny.getMaxHealth());
	cout << eny.getCurrentHealth() << "/" << eny.getMaxHealth();
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "1 -> ATTACK  \t\t\t 2 -> DODGE \t\t\t 3 -> RUN" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->> ";
	std::cout << endl;
}
void pBattleLife(Warrior& war, Enemy& eny) {
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "# Life: ";
	normalBar(war.getCurrentHp(), war.getMaxHp());
	cout << war.getCurrentHp() << "/" << war.getMaxHp();
	cout << "  \t Enemy: ";
	normalBar(eny.getCurrentHealth(), eny.getMaxHealth());
	cout << eny.getCurrentHealth() << "/" << eny.getMaxHealth();
}

void pressOne() {
	std::cout << "\n\t\t\t";
	std::cout << "#                              PRESS 1 TO CONTINUE                           #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->> ";
}
void itemMissing() {
	std::cout << "\n\t\t\t";
	std::cout << "#--------------------You don't have the requierd item!-----------------------#" << endl;
}
void battleHit() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                       You hit the enemy! Let's goo!                        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void battleEnHit() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                    The enemy got you.. don't give up!                      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void battleMissed() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                              The hit was a miss!                           #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void battleHeal() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                            Healed for 10% of life                          #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void battleEnRun() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                   The enemy got scared and runned away.                    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void battleWon() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                   You bleed the enemy to death. You won!                   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void battleLost() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                 The enemy got you good this time... you died               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void battleRun() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                       You chose to run away.. is ok..                      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               You took 5 damage.                           #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void battleScript() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#     You look at your opponent, scary looking monster... What do you do?    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void two_roads() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   The road is forking into 2 other roads. To the left seems ok, but the    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                   but the right path... has a mistirious aura.             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                             Which one do you choose?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Left \t\t\t\t\t\t2 -> Right";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void three_roads() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                     The road is forking into 3 other roads.                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    Left is glowing with   |   Middle: all the wild  |  The right one has   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    a redish color...      |   life seems alive here |  the clouds over it  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                             Which one do you choose?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Left \t\t\t2 -> Middle \t\t\t3 -> Right";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}

void bad_dog() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You encountered a purple dog. Is moving his tail uncontrolablly when he    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                        sees you. Do you pet him ?                          #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Pet him \t\t\t2 -> Walk away \t\t\t3 -> Attack him";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void bad_dog_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You moved slowly to pet him. The dog smiled at you and started to bite you.#" << endl;
	std::cout << "\t\t\t";
	std::cout << "#               You tried to run, but he catched you again.                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -3 Health points                             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_dog_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You turned around and runned as fast as you can... unfortunatly, he got    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#              you by your leg. You are tierd and in pain. :(                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                -7 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_dog_3(Enemy& dog) {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# ------------------Carefull! This enemy is a " << dog.getName() << " -----------------------#" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void bad_path() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      The path is cursed with a demonic script. You move extrmely slowly    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                             through it. What do you do?                    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Go through \t\t2 -> Wait to disapper\t\t3 -> Nothing";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void bad_path_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You tried to go through the cursed path. The more you go the slower     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  you are. You got exhausted and fainted to the ground. When you woke up,   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                     your skin is burned. You are in pain.                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                -4 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_path_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You waited for the curse to disapper. You got to sleep for some hours.     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#            The curse is still there, but the power is weaker.              #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                +4 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_path_3() {
	system("cls");
	std::cout << "\n\n\n";
	std::cout << "\t\t\t";
	std::cout << "-----*  You stood there and did nothing. Sundenly, a purple dog aproches you. *-----" << endl;
}
void bad_ivy(vector<Items*> list, Items& it) {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      On your way forward, there is poisoned ivy on the ground. You can     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#               cover it with some cloth or try to pass through it.          #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                            What do you choose to do?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Go through \t\t2 -> ";
	if (it.findItem(list, 11)) {
		cout << "Cover it";
	}
	else {
		cout << "*Missing item";
	}
	std::cout << "\t\t3-> ";
	if (it.findItem(list, 12)) {
		cout << "Use potion";
	}
	else {
		cout << "*Missing item";
	}
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void bad_ivy_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You pass through the poisoned ivy. Your legs are iching and you feel    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    them burn. You scratch yourself tring to recover from this, but the     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#           scratches are too deep and now you are bleeding.                 #" << endl; // Implement effect-> Bleeding effect
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_ivy_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You covered the poison ivy with a misterious cloth. From the ground a      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                  faceless monster rises. Prepare to fight!                 #" << endl; // Implement combat
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void bad_ivy_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "# You dropped a poison resistence potion on the ivy. The leafs begins to     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                melt. Now the path is clear and you can continue.           #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void bad_cursed_oasis() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      You stumble upon a shimmering oasis in the middle of a dead desert.   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   The air is thick with enchantment. There is an ancient temple, a dark    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#        cave, and a strange pool of water reflecting the blood moon.        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                       Where will you seek refuge or answers?               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Enter the Temple \t\t2 -> Explore the Cave \t\t3 -> Touch the Pool";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}

void bad_cursed_oasis_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You enter the ancient temple. Inside, the air is heavy, and your breath   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  echoes. Stone statues gaze at you with hollow eyes. Suddenly, the walls   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  shift, and you realize you've triggered a trap! Arrows shoot from all     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  directions. You manage to dodge some, but a few pierce your armor.        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -15 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void bad_cursed_oasis_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You cautiously enter the dark cave. It's cold, damp, and eerie, with the #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   sound of dripping water echoing through the stone walls. Suddenly, you   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   stumble upon an ancient chest. Inside, you find a cursed amulet that     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   glows with a dark energy. You take it, unsure of its power.              #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                             Item Found: Cursed Amulet                      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void bad_cursed_oasis_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You dip your hand into the pool. The moment your fingers touch the water, #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  the reflection changes. You see glimpses of the past, future, and possible#" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  fates. But something's wrong. Your hand feels heavy, and a burning pain   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  shoots up your arm. You've been cursed, and your vitality drains rapidly. #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -20 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void forsaken_ruins() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You find yourself at the edge of the Forsaken Ruins. Before you stand a  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   crumbling hall, a strange altar emitting a faint glow, and an old well.  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                          What will you choose to explore?                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Enter the Crumbling Hall \t2 -> Inspect the Altar \t3 -> Search the Well";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}

void forsaken_ruins_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You step into the crumbling hall. Shadows shift unnaturally around you.   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  Suddenly, a Dark Wraith emerges from the darkness, brandishing a cold     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  blade. Prepare yourself for battle!                                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void forsaken_ruins_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You approach the strange altar, which seems to hum with an ancient power. #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  Upon closer inspection, you find a mysterious relic that pulses with dark #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  energy. You decide to take it with you.                                   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                              Item Found: Relic                             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void forsaken_ruins_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You peer down into the abandoned well, hoping to find something useful.   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  Suddenly, the stones beneath your feet give way, and you fall into the    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  cold, dark water below. You manage to climb out, but not without injury.  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -10 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

///
///
///
///
void norm_normal_road() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#             This road seems suspiciosly normal. Continue...                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_fishing(vector<Items*> list, Items& it) {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      You found a river! The water is so clean you can see every fish.      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                  At the same time, seems good to drink from.               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                            What do you choose to do?                       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> ";
	if (it.findItem(list, 10)) {
		cout << "Fish";
	}
	else {
		cout << "*Missing item";
	}
	std::cout << " \t\t2->Drink \t\t3->Take a rest";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void norm_fishing_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You placed yourself besides the river, with the fishing rod in your     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    hands, ready to catch some fish. Finally, after a few minutes you got   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#           one! You made a fire to prepare the fish and got some sleep.     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               +15 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_fishing_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You drink a small amount of water. Is very salty... now your are even    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                              thirstier than before.                        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -2 Health points                             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_fishing_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#     You laid down under a tree and took a nap. Refreshing and not bodered  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                   by anyone.                               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               +5 Health points                             #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void norm_sun() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      The sun is shinning so bright and hot, you feel your body melting.    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#           There is a tree, an wooden house and a hole in the ground.       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                         How do you choose to cover?                        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Tree \t\t2 -> Wooden house \t\t3 -> Hole";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void norm_sun_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You pick to cover under a tree. Right away the leafs are bursting into  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    fire. The is no shade no more. You skin is boiling and full of burning  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#              marks. You are in much pain and needing aid kit.              #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -10 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_sun_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You entered the house. There are a lot of stuff throwed around, but it   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#         seems that no one is home. You are desgusted by all the rats       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                    and bugs that are climbing on you.                      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                    You found an item! A misterious cloth.                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void norm_sun_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#     As soon as you tried to enter the hole, a creature grabs you by the    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#         hand and pulls you in. You tried to escape, but no succes.         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#         You wake up after a while with sever cuts and broken bones.        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -10 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

// Good outcome ----------------------

void good_witch() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#      You walk apon a witch. She needs help with the grave that is digging. #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                            Do you help her?                                #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Yes \t\t\t\t\t2 -> No thank you";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void good_witch_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    You choose to help the witch. After digging the grave, she throwed      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#    inside her unalive cat. The witch thank you for your help and gifted    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#             a green potion, that she said it will cure any poison.         #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                                                                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                     Item recived: Poison resistent potion x1               #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}
void good_witch_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                        She will remember that...                           #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

// More encounters:: bad
void mysterious_figure() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# You come across a shadowy figure cloaked in dark robes, standing silently  #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# with an eerie glow emanating from under its hood. It turns its head slowly,#" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# revealing only its glowing eyes. Do you approach it?                       #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Approach cautiously \t2 -> Keep your distance \t3 -> Confront it";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}
void mysterious_figure_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# You approached cautiously, trying to make out the figure's features.       #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# As you drew nearer, the figure suddenly lunged towards you, its eyes       #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# glowing with an intense light. You feel a surge of energy draining         #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# from you.                                                                  #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "#                           -5 Health points                                 #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
}

void mysterious_figure_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# You kept your distance, watching the figure from afar. The figure seemed   #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# to lose interest and slowly faded into the darkness. However, you feel an  #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# unsettling presence lingering around you.                                  #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "#                            -2 Health points                                #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
}

void mysterious_figure_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "#                                Prepare to fight!                           #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
}
void cursed_statue() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# You find yourself in front of an ancient, cursed statue. Its eyes seem to  #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# follow your every move, and you feel an ominous chill in the air. Do you   #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# try to interact with it?                                                   #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Touch the statue \t\t2 -> Examine from a distance \t\t3 -> Ignore it";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}

void cursed_statue_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# You touched the statue, and it felt cold and lifeless. Suddenly, the ground#" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# beneath you shakes violently, and you're engulfed by a dark force.         #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "#                              -8 Health points                              #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
}

void cursed_statue_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# You examined the statue from a safe distance. The eyes of the statue seem  #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# to follow you, and you feel a growing unease. You suddenly feel a sharp    #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# pain in your head.                                                         #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "#                               -4 Health points                             #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
}

void cursed_statue_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# You chose to ignore the statue and continue on your way.                   #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# Although you avoid direct interaction, you still feel a lingering sense of #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "# unease as if the statue's curse has touched you in some way.               #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "#                             -3 Health points                               #" << std::endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << std::endl;
}
void whispering_glade() {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You enter a serene glade, filled with the soft whispers of ancient trees.#" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   Ethereal spirits dance between the branches, beckoning you closer.       #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                  How will you interact with this magical place?            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";
	std::cout << "1 -> Offer a Prayer \t\t2 -> Dance with the Spirits \t\t3 -> Share a Story";
	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}

void whispering_glade_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You kneel before the ancient trees and offer a heartfelt prayer.          #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  A warm light envelops you, restoring your spirit and healing your wounds. #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               +15 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void whispering_glade_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You begin to dance, moving gracefully with the forest spirits.            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  The energy of the glade fills you with joy, making you feel confident.    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void whispering_glade_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You share a tale from your adventures, captivating the spirits around you.#" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  They nod in approval, bestowing upon you ancient wisdom.                  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  This knowledge will help you in future challenges.                        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void sacred_spring(vector<Items*> list, Items& it) {
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You arrive at the Sacred Spring, its crystal-clear water radiating a     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   gentle glow. The air around it is serene, and you feel a sense of peace. #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#   You sense the water holds ancient powers that can restore and heal.      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                         How will you interact with the spring?            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\n\n\n\t\t\t";
	loadingLine(78);
	std::cout << "\t\t\t";

	std::cout << "1 -> ";
	if (it.findItem(list, 15)) {  // Check if the player has an Empty Jar (ID 15)
		std::cout << "Fill an Empty Jar";
	}
	else {
		std::cout << "*Missing item";
	}
	std::cout << " \t\t2 -> Meditate \t\t3 -> Drink from the Spring";

	std::cout << "\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "->>";
}

void sacred_spring_1() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You carefully fill the empty jar with the healing water from the spring.  #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  The water shimmers within the jar, transforming it into a Healing Potion. #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                           +1 Healing Potion (ID 16)                        #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void sacred_spring_2() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You sit by the water and close your eyes, entering a meditative state.    #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  The peaceful surroundings calm your mind, and you feel renewed strength   #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  flowing through you.                                                      #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}

void sacred_spring_3() {
	system("cls");
	std::cout << "\n\n\n\t\t\t";
	std::cout << "##############################################################################" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  You drink directly from the spring. The water is cool and refreshing,     #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#  instantly quenching your thirst and healing your minor wounds.            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "#                               +10 Health points                            #" << endl;
	std::cout << "\t\t\t";
	std::cout << "##############################################################################" << endl;
}