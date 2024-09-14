#pragma once
#include "warrior.h"
#include "utils.h"
#include "script.h"
using namespace std;

void en_dog(Warrior& war) {
	bad_dog();
	switch (pickNr(3)) {
	case 1:
		bad_dog_1();
		war.takeDamage(3);
		break;
	case 2:
		bad_dog_2();
		war.takeDamage(7);
		break;
	case 3:
		bad_dog_3();
		break;
	}
}
void en_path(Warrior& war) {
	bad_path();
	switch (pickNr(3)) {
	case 1:
		bad_path_1();
		war.takeDamage(5);
		break;
	case 2:
		bad_path_2();
		war.heal(4);
		break;
	case 3:
		bad_path_3();
		en_dog(war);
		break;
	}
}
void en_ivy(Warrior& war) {
	bad_ivy();
	switch (pickNr(3)) {
	case 1:
		bad_ivy_1();
		war.takeDamage(2);
		break;
	case 2:
		bad_ivy_2();
		break;
	case 3:
		bad_ivy_3();
		break;
	}
}

////////////////////////////////
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
		en_ivy(war);
		break;
	default:
		std::cout << "Somehow default bad." << endl;
	}
}