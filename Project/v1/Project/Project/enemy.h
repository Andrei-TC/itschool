#pragma once
#include "warrior.h"
#include "archer.h"
#include "wizard.h"
#include "utils.h"
#include <cstdint>

class Enemy {
public:
	Archer eny;
	Enemy(Warrior& war) {
		int nr = 1 + rand() % 3;
		if (nr == 1) {
			Warrior eny;
		}
		else if (nr == 2) {
			Archer eny;
		}
		else if (nr == 3) {
			Wizzard eny;
		}
		eny.makeLevel(war.getCurrentLevel());
		setMaxHealth(war.getMaxHp() - war.getCurrentHp() * 0.20);
	}
	void setMaxHealth(int hp) {
		eny.setMaxHp(hp);
	}
	string getName() {
		return eny.getName();
	}
	void takeDamage(int dmg) {
		eny.takeDamage(dmg);
	}
	int getMaxHealth() {
		return eny.getMaxHp();
	}
	int getCurrentHealth() {
		return eny.getCurrentHp();
	}
	int getPower() {
		return eny.getPower();
	}
	void heal(int heal) {
		eny.heal(heal);
	}
};