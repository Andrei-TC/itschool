#pragma once
#include "hp.h"
#include "stats.h"
#include "levelSystem.h"

class Wizzard : public hp, public Stats, public LevelSystem {
public:
	static const int BASEHP = 10;
	static const stype BASEPower = 6;
	static const stype BASELuck = 3;
	static const stype BASERes = 1;

	static const int HPGrowth = 11;
	static const stype PowerGrowth = 3;
	static const stype LuckGrowth = 1;
	static const stype ResGrowth = 2;
	Wizzard() : hp(BASEHP), Stats(BASEPower, BASELuck, BASERes), name("Wizzard") {};
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