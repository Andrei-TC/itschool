#pragma once
#include <vector>
#include "warrior.h"
#include "utils.h"
using namespace std;

class Encounter {
private:
	vector<int> en_list;
	int selected_en;
public:
	Encounter(int number) : selected_en(number) {}
	void pickEncounter(int nr) {

	}

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



};