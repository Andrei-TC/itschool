#pragma once

class hp {
public:
	int getMaxHp() {
		return maxHP;
	}
	int getCurrentHp() {
		return currentHP;
	}
	// Returns true if set succefully
	bool setMaxHp(int new_maxHP) {
		if (new_maxHP < 1)
			return false;
		maxHP = new_maxHP;
		if (currentHP > maxHP)
			currentHP = maxHP;
		return true;
	}
	// Taking damage logic
	void takeDamage(int damage) {
		if (damage > currentHP) {
			currentHP = 0;
			return;
		}
		currentHP -= damage;
	}
	// Healing logic
	void heal(int amount) {
		if (amount + currentHP > maxHP) {
			currentHP = maxHP;
			return;
		}
		currentHP += amount;
	}

	hp() { currentHP = 1; maxHP = 1; };
	hp(int mHP) {
		setMaxHp(mHP);
		currentHP = mHP;
	}

private:
	int currentHP;
	int maxHP;
};