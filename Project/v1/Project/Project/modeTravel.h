#pragma once
#include <iostream>
#include  <cstdlib>
#include "road_type.h"
#include "warrior.h"
#include "utils.h"
#include "encounters.h"
using namespace std;

class modeTravel {
private:
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
		else if (c > 15 && c < 50) {
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
		else if (c >= 50) {
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
		return 0;
		std::cout << "Error";
	}
public:
	unsigned int randEnc(vector<Encounters*> list) {
		int random = rand() % list.size();
		return random;
	}

	void switchChance(int lucky, Warrior& war) {
		vector<Encounters*> encListbad;
		Encounters* dog = new enc_dog;
		encListbad.push_back(dog);
		Encounters* path = new enc_path;
		encListbad.push_back(path);
		Encounters* ivy = new enc_ivy;
		encListbad.push_back(ivy);
		Encounters* cursed_statue = new enc_cursed_statue;
		encListbad.push_back(cursed_statue);
		Encounters* mysterious_figure = new enc_mysterious_figure;
		encListbad.push_back(mysterious_figure);
		Encounters* ruins = new enc_forsaken_ruins;
		encListbad.push_back(ruins);
		Encounters* oasis = new enc_cursed_oasis;
		encListbad.push_back(oasis);

		vector<Encounters*> encListNorm;
		Encounters* normal = new enc_normal;
		encListNorm.push_back(normal);
		Encounters* fishing = new enc_fishing;
		encListNorm.push_back(fishing);
		Encounters* sun = new enc_sun;
		encListNorm.push_back(sun);

		vector<Encounters*> encListGood;
		Encounters* witch = new enc_witch;
		encListGood.push_back(witch);
		Encounters* whisper = new enc_whispering_glade;
		encListGood.push_back(whisper);
		Encounters* spring = new enc_sacred_spring;
		encListGood.push_back(spring);

		switch (randLuck(lucky))
		{
		case 1:
			encListGood.at(randEnc(encListGood))->encounter(war);
			war.gainXP(20);
			break;
		case 2:
			encListNorm.at(randEnc(encListNorm))->encounter(war);
			war.gainXP(10);
			break;
		case 3:
			encListbad.at(randEnc(encListbad))->encounter(war);
			war.gainXP(25);
			break;
		default:
			std::cout << "What happended? ";
			break;
		}
		delete dog, ivy, normal, witch, sun, fishing, path, mysterious_figure, cursed_statue;
	}

	void travel(int lucky, Warrior& war) {
		switch (1 + rand() % 3) {
		case normal_r:
			system("cls");
			switchChance(lucky, war);
			break;
		case double_r:
			system("cls");
			two_roads();
			switch (pickNr(2)) {
			case 1:
				system("cls");
				switchChance(lucky, war);
				break;
			case 2:
				system("cls");
				switchChance(lucky, war);
				break;
			}
			break;
		case triple_r:
			system("cls");
			three_roads();
			switch (pickNr(3)) {
			case 1:
				system("cls");

				switchChance(lucky, war);
				break;
			case 2:
				system("cls");
				switchChance(lucky, war);
				break;
			case 3:
				system("cls");
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