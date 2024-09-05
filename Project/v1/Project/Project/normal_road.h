#pragma once
#include <iostream>
#include "warrior.h"
#include "utils.h"
using namespace std;

void pickRoad_normal(Warrior& war) {
	int picked = 1 + (rand() % 3);
	switch (picked) {
	case 1:
		cout << "You picked first normal road" << endl;
		break;
	case 2:
		cout << "You picked second normal road" << endl;
		break;
	case 3:
		cout << "You picked third normal road" << endl;
		break;
	default:
		cout << "Somehow default normal." << endl;
	}
}