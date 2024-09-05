#include <iostream>
#include <string>
#include <vector>
#include "warrior.h"
#include "wizard.h"
#include "archer.h"
#include "modeTravel.h"
#include <conio.h>
#include "script.h"
#include "utils.h"

using namespace std;


int main()
{
	srand((unsigned)time(NULL));
	Warrior war1;
	modeTravel map;
	pIntro();
	switch (pickNr(2))
	{
	case 1:
		break;
	case 2:
		return 0;
		break;
	}
	pWellcome();
	while (war1.getCurrentHp() > 0)
	{
		pActionBar(war1);
		switch (pickNr(3)) {
		case 1: 
			map.travel(war1.getLuck(), war1);
			break;
		case 2:
			system("cls");
			war1.showStats();
			break;
		case 3:
			return 0;
		default:
			system("cls");
			break;
		}
		
	}
	cout << endl;
	cout << "------------------------" << endl;
	cout << "-------GAME OVER--------" << endl;
	cout << "------------------------" << endl;
}