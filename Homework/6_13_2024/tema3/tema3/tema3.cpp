#include <iostream>
#include "string.h"
#include <string>
#include <vector>
#include <set>
#include <numeric>
#include <functional>
#include <algorithm>
#include <map>

using namespace std;

bool prim(int numar, int i) {
	if (numar <= 2)
		return false;
	if (numar % i == 0)//////
		return false;
	if (i > numar / 2) {
		return true;
	}
	return prim(numar, i + 1);
}

int main()
{
	int numar;
	int i = 1;
	cout << "Introdu un numar: ";
	cin >> numar;
	if (prim(numar, i)) {
		cout << "Numarul este prim.";
	}
	else
		cout << "Numarul nu este prim.";
}