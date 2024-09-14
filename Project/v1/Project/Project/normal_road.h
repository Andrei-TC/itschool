#pragma once
#include <iostream>
#include "warrior.h"
#include "utils.h"
#include "script.h"
using namespace std;



void en_normal_road(Warrior& war) {
	norm_normal_road();
}
void en_fishing(Warrior& war) {
	norm_fishing();
	switch (pickNr(3)) {
	case 1:
		norm_fishing_1();
		war.heal(15);
		break;
	case 2:
		norm_fishing_2();
		war.takeDamage(2);
		break;
	case 3:
		norm_fishing_3();
		war.heal(5);
		break;
	}
}
void pickRoad_normal(Warrior& war) {
	int picked = 1 + (rand() % 3);
	switch (picked) {
	case 1:
		en_normal_road(war);
		break;
	case 2:
		en_fishing(war);
		break;
	case 3:
		std::cout << "You picked third normal road" << endl;
		break;
	default:
		std::cout << "Somehow default normal." << endl;
	}
}