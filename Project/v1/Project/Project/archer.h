#pragma once
#include "hp.h"
#include "levelSystem.h"
#include "stats.h"

class Archer : public hp, public Stats, public LevelSystem {
public:
	static const int BASEHP = 15;
	static const stype BASEPower = 4;
	static const stype BASELuck = 4;
	static const stype BASERes = 1;

	static const int HPGrowth = 9;
	static const stype PowerGrowth = 2;
	static const stype LuckGrowth = 3;
	static const stype ResGrowth = 1;
	Archer() : hp(BASEHP), Stats(BASEPower, BASELuck, BASERes), name("Archer") {};
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