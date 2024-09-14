#pragma once
#include <Windows.h>
using namespace std;

int barEmpty = 177;
int barFull = 219;
void loadingBar() {
	std::cout << "\n\n\n\n\n\n\t\t\t\t\t\t\tLoading...";
	std::cout << "\n\n\n\t\t\t\t\t\t";
	for (int i = 0; i < 25; i++)
		std::cout << (char)barEmpty;
	std::cout << "\r";
	std::cout << "\t\t\t\t\t\t";
	for (int i = 0; i < 25; i++) {
		std::cout << (char)barFull;
		if (i < 10)
			Sleep(10);
		else if (i == 10)
			Sleep(300);
		else if (i > 10 && i < 15)
			Sleep(90);
		else if (i == 15)
			Sleep(120);
		else if (i > 15)
			Sleep(20);
	}
}

void normalBar(int currentLevel, int maxLevel) {
	int barlvl = currentLevel * 100 / maxLevel;
	int convertTo20 = barlvl * 20 / 100;
	for (int i = 0; i < 20; i++) {
		if (convertTo20 > i)
			cout << (char)barFull;
		if (convertTo20 < i)
			cout << (char)barEmpty;
	}
	
}

void loadingLine(int line) {
	for (int i = 0; i < line; i++) {
		cout << "#";
		Sleep(5);
	}
	cout << endl;
}