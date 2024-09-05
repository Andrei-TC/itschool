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
	Warrior() : hp(BASEHP), Stats(BASEPower,BASELuck, BASERes) {};

	void showStats() {
		cout << "Warrior"
			<< "\n-Level: " << getCurrentLevel()
			<< "\n-Exp: " << getCurrentXP() << "/" << getXpToNextLvl()
			<< "\n-MaxHP: " << getMaxHp()
			<< "\n-CurrentHP: " << getCurrentHp()
			<< "\n-Power: " << getPower()
			<< "\n-Luck: " << getLuck()
			<< "\n-Resistance: " << getResistance()
			<< "\n" << endl;
	}

private:
	void LevelUp() override {
		setMaxHp(HPGrowth + getMaxHp());
		increaseStats(PowerGrowth, LuckGrowth, ResGrowth);
	}


};