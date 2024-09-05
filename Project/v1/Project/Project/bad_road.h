#pragma once
#include <iostream>
#include "warrior.h"
#include "utils.h"
using namespace std;

void en_dog(Warrior& war) {
	cout << "#####################################################################################" << endl;
	cout << "# You encountered a purple dog. Is moving his tail uncontrolablly when he sees you. #" << endl;
	cout << "#                                   Do you pet him ?                                #" << endl;
	cout << "#####################################################################################" << endl;
	cout << endl;
	cout << endl;
	cout << "####################################################################" << endl;
	cout << "Actions:      1 -> Pet him     2 -> Walk away   3 -> Attack him   ---> ";
	switch (pickNr(3)) {
	case 1:
		system("cls");
		cout << "###############################################################################" << endl;
		cout << "# You moved slowly to pet him. The dog smiled at you and started to bite you. #" << endl;
		cout << "#               You tried to run, but he catched you again.                   #" << endl;
		cout << "#                         You lost 3 health.                                  #" << endl;
		cout << "###############################################################################" << endl;
		war.takeDamage(3);
		break;
	case 2:
		system("cls");
		cout << "###############################################################################" << endl;
		cout << "# You turned around and runned as fast as you can... unfortunatly, he got you #" << endl;
		cout << "#               by your leg. You are tierd and in pain. :(                    #" << endl;
		cout << "#                         You lost 7 health.                                  #" << endl;
		cout << "###############################################################################" << endl;
		war.takeDamage(7);
		break;
	case 3:
		system("cls");
		cout << "###############################################################################" << endl;
		cout << "# -------------Not implemented yet :( try again later------------------------ #" << endl;
		cout << "###############################################################################" << endl;
		break;
	}
}
void en_path(Warrior& war) {
	cout << "#####################################################################################" << endl;
	cout << "# The path is cursed with a demonic script. You move extrmely slowly through it.    #" << endl;
	cout << "#                                   What do you do?                                 #" << endl;
	cout << "#####################################################################################" << endl;
	cout << endl;
	cout << endl;
	cout << "###############################################################################" << endl;
	cout << "Actions:      1 -> Go through     2 -> Wait to disapper   3 -> Nothing   ---> ";
	switch (pickNr(3)) {
	case 1:
		system("cls");
		cout << "#######################################################################################" << endl;
		cout << "#    You tried to go through the cursed path. The more you go the slower you are.     #" << endl;
		cout << "# You got exhausted and fainted to the ground. When you woke up, your skin is burned. #" << endl;
		cout << "#                         You are in pain. Lost 5 hp.                                 #" << endl;
		cout << "#######################################################################################" << endl;
		war.takeDamage(5);
		break;
	case 2:
		system("cls");
		cout << "###############################################################################" << endl;
		cout << "# You waited for the curse to disapper. You got to sleep for some hours.      #" << endl;
		cout << "#            The curse is still there, but the power is weaker.               #" << endl;
		cout << "#                               You healed 4.                                 #" << endl;
		cout << "###############################################################################" << endl;
		war.heal(4);
		break;
	case 3:
		system("cls");
		cout << "###############################################################################" << endl;
		cout << "#     You stood there and did nothing. Sundenly, a purple dog aproches you.   #" << endl;
		en_dog(war);
		break;
	}
}

void pickRoad_bad(Warrior& war) {
	int picked = 1 + (rand() % 3);
	switch (picked) {
	case 1:
		en_dog(war);
		break;
	case 2:
		en_path(war);
		break;
	case 3:
		cout << "You picked third bad road" << endl;
		break;
	default:
		cout << "Somehow default bad." << endl;
	}
}