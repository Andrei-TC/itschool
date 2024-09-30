#pragma once

class BattleSystem {
public:
	BattleSystem() : runE(false), runP(false) {};
	void resetBattle() {
		runE = false;
		runP = false;
	}
	bool endFight(Warrior& war, Enemy& eny) {
		if (!playerTurn(war, eny) && !runP)
			return false;
		else if (!enemyTurn(war, eny) && !runE)
			return false;
		else
			return true;
	}
	bool playerTurn(Warrior& war, Enemy& eny) {
		system("cls");
		if (eny.getCurrentHealth() < 1) {
			return true;
		}
		battleScript();
		pBattleBar(war, eny);
		switch (pickNr(3)) {
		case 1:
			system("cls");
			eny.takeDamage(war.getPower() + (eny.getMaxHealth() * 0.14));
			battleHit();
			pressOne();
			pickNr(1);
			break;
		case 2:
			break;
		case 3:
			war.takeDamage(5);
			runP = true;
			pressOne();
			pickNr(1);
			return true;
			break;
		}
	}
	bool enemyTurn(Warrior& war, Enemy& eny) {
		if (war.getCurrentHp() < 1) {
			return true;
		}
		int random = 1 + rand() % 4;
		switch (random) {
		case 1:
			war.takeDamage(eny.getPower() + (war.getMaxHp() * 0.14));
			battleEnHit();
			pBattleLife(war, eny);
			pressOne();
			pickNr(1);
			return false;
			break;
		case 2:
			battleMissed();
			pBattleLife(war, eny);
			pressOne();
			pickNr(1);
			return false;
			break;
		case 3:
			eny.heal(eny.getMaxHealth() * 0.40);
			battleHeal();
			pBattleLife(war, eny);
			pressOne();
			pickNr(1);
			return false;
			break;
		case 4:
			if (eny.getCurrentHealth() < eny.getMaxHealth() * 0.14) {
				if (random > 2) {
					runE = true;
					battleEnRun();
					return true;
					break;
				}
			}
			break;
		default:
			return false;
		}
	}
	void battleTime(Warrior& war, Enemy& eny) {
		while (true) {
			if (war.getCurrentHp() < 1 || runP == true) {
				system("cls");
				if (runP == true)
					battleRun();
				else
					battleLost();
				break;
			}
			else if (eny.getCurrentHealth() < 1 || runE == true) {
				system("cls");
				if (runE == true)
					battleEnRun();
				else
					battleWon();
				break;
			}
			else
				endFight(war, eny);
		}
	}
private:
	bool runE = false;
	bool runP = false;
};