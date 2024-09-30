#pragma once
#include "hp.h"
#include "stats.h"
#include "levelSystem.h"

class Warrior : public hp, public Stats, public LevelSystem {
public:
	static const int BASEHP = 16;
	static const stype BASEPower = 3;
	static const stype BASELuck = 2;
	static const stype BASERes = 4;

	static const int HPGrowth = 19;
	static const stype PowerGrowth = 2;
	static const stype LuckGrowth = 1;
	static const stype ResGrowth = 3;
	Warrior() : hp(BASEHP), Stats(BASEPower, BASELuck, BASERes), name("Warrior") {};

	void showStats() {
		std::cout << "\n\n\n\t\t\t";
		std::cout << "\tWarrior"
			<< "\n\t\t\t #################### "
			<< "\n\t\t\t-Level: " << getCurrentLevel()
			<< "\n\t\t\t->Exp: " << getCurrentXP() << "/" << getXpToNextLvl()
			<< "\n\t\t\t->MaxHP: " << getMaxHp()
			<< "\n\t\t\t->Power: " << getPower()
			<< "\n\t\t\t->Luck: " << getLuck()
			<< "\n\t\t\t->Resistance: " << getResistance()
			<< "\n" << endl;
		std::cout << "\t\t\t####################" << endl;
		std::cout << endl;
	}
	string getName() {
		return name;
	}

private:
	void LevelUp() override {
		setMaxHp(HPGrowth + getMaxHp());
		increaseStats(PowerGrowth, LuckGrowth, ResGrowth);
	}
	string name;
};