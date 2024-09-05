#pragma once
#include "warning.h"
using namespace std;

void pIntro() {
	cout << "#######################################################" << endl;
	cout << "# Hello ~person! Do you want to start your adventure? #" << endl;
	cout << "#######################################################" << endl;
	cout << endl;
	cout << endl;
	cout << "########################################################" << endl;
	cout << "Actions:    1 -> Start game    2 -> Exit    -->  ";
}

void pWellcome() {
	system("cls");
	cout << "################################################################" << endl;
	cout << "# Wellcome traveler! You have enter the gates of the Paradise! #" << endl;
	cout << "#   From now on, you can enjoy every wonder of this land.      #" << endl;
	cout << "#      But be carefull and don't bite the apple!               #" << endl;
	cout << "################################################################" << endl;
	cout << endl;
}

void pActionBar(Warrior& war) {
	cout << endl;
	cout << endl;
	cout << "##############################################################################" << endl;
	cout << "# Life: " << war.getCurrentHp() << "/" << war.getMaxHp() << "              Experience: "
		<< war.getCurrentXP() << "/" << war.getXpToNextLvl() << "             Level: "
		<< war.getCurrentLevel() << endl;
	cout << "##############################################################################" << endl;
	cout << "# ACTIONS:    # 1 # CONTINUE #     # 2 # CHARCTER #      # 3 # EXIT #        #" << endl;
	cout << "##############################################################################" << endl;
	cout << "->> ";
}