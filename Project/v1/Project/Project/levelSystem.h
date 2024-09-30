#pragma once
#include <cstdint>
using namespace std;
typedef uint64_t xptype;
typedef uint16_t lvltype;

class LevelSystem {
public:
	static const xptype LEVEL2AT = 45;
	LevelSystem() {
		currentLevel = 1;
		currentXP = 0;
		xpToNextLvl = LEVEL2AT;
	}
	void gainXP(xptype gained_xp) {
		currentXP += gained_xp;
		while (check_if_level());
	}
	lvltype getCurrentLevel() {
		return currentLevel;
	}
	void makeLevel(int lvl) {
		currentLevel = lvl;
	}
	xptype getCurrentXP() {
		return currentXP;
	}
	xptype getXpToNextLvl() {
		return xpToNextLvl;
	}
	virtual void LevelUp() = 0;

protected:
	lvltype currentLevel;
	xptype currentXP;
	xptype xpToNextLvl;
	bool check_if_level() {
		static const lvltype LEVELSCALAR = 2;
		if (currentXP >= xpToNextLvl)
		{
			currentLevel++;
			currentXP = 0;
			LevelUp();
			xpToNextLvl *= LEVELSCALAR;
			return true;
		}
		return false;
	}
};