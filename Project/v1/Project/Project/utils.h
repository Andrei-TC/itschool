#pragma once
#include <iostream>
using namespace std;

int pickNr(int max) {
	int nr;
	cin >> nr;
	if (nr > max || nr < 1) {
		return pickNr(max);
	}
	return nr;
}