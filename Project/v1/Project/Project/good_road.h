#pragma once
#include <iostream>
#include "warrior.h"
#include "utils.h"
using namespace std;

void pickRoad_good(Warrior& war) {
	int picked =1 + (rand() % 3);
	switch (picked) {
	case 1:
		std::cout << "You picked first good road" << endl;
		break;
	case 2:
		std::cout << "You picked second good road" << endl;
		break;
	case 3:
		std::cout << "You picked third good road" << endl;
		break;
	default:
		std::cout << "Somehow default good." << endl;
	}
}