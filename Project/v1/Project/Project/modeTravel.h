#pragma once
#include <iostream>
#include  <cstdlib>
#include "road_type.h"
#include "good_road.h"
#include "normal_road.h"
#include "bad_road.h"
#include "warrior.h"
#include "utils.h"
using namespace std;
#define RAND_MAX 3

class modeTravel {
private:
	int encounter_road;
	int encounter_event;
	unsigned int randLuck(int c) {
		int temp = ((c * 100) + (rand() % 100)) % 100;

		if (c <= 15) {
			// Good -> rarly
			if (temp < 35) {
				return 3;
			}
			if (temp >= 35 && temp < 90) {
				return 2;
			}
			if (temp >= 90) {
				return 1;
			}
		}
		if (c > 15 && c < 50) {
			// Normal -> often
			if (temp < 15) {
				return 3;
			}
			if (temp >= 15 && temp < 70) {
				return 2;
			}
			if (temp >= 70) {
				return 1;
			}
		}
		if (c >= 50) {
			// Bad -> rarly
			if (temp < 5) {
				return 3;
			}
			if (temp >= 5 && temp < 60) {
				return 2;
			}
			if (temp >= 60) {
				return 1;
			}
		}
	}
public:
	modeTravel() {
		encounter_road = 1;
		encounter_event = 0;
	}

	void switchChance(int lucky, Warrior& war) {
		switch (randLuck(lucky))
		{
		case 1:
			pickRoad_good(war);
			war.gainXP(20);
			break;
		case 2:
			pickRoad_normal(war);
			war.gainXP(10);
			break;
		case 3:
			pickRoad_bad(war);
			war.gainXP(25);
			break;
		default:
			std::cout << "What happended? ";
			break;
		}
	}

	void travel(int lucky, Warrior& war) {
		switch (1 + rand() % 3) {
		case normal_r:
			system("cls");
			std::cout << "There is only one road ahead." << endl;
			switchChance(lucky, war);
			break;
		case double_r:
			system("cls");
			std::cout << "There are two roads ahead." << endl;
			std::cout << "Pick left? Or right?" << endl;
			std::cout << "Action:   Left -> 1    Right -> 2" << endl;
			switch (pickNr(2)) {
			case 1:
				system("cls");
				std::cout << "You picked left, good luck traveler!" << endl;
				std::cout << endl;
				switchChance(lucky, war);
				break;
			case 2:
				system("cls");
				std::cout << "You picked right. This is the right path!" << endl;
				switchChance(lucky, war);
				break;
			}
			break;
		case triple_r:
			system("cls");
			std::cout << "There are three roads ahead." << endl;
			std::cout << "What are we picking?" << endl;
			std::cout << "Action:   Left -> 1    Forward -> 2   Right -> 3" << endl;
			switch (pickNr(3)) {
			case 1:
				system("cls");
				std::cout << "You picked left, good luck traveler!" << endl;
				std::cout << endl;
				switchChance(lucky, war);
				break;
			case 2:
				system("cls");
				std::cout << "You picked the middle path. Here we go!" << endl;
				switchChance(lucky, war);
				break;
			case 3:
				system("cls");
				std::cout << "You picked right. This is the right path!" << endl;
				switchChance(lucky, war);
				break;
			}
			break;
		default:
			std::cout << "Haolo";
			break;
		}
	};
};