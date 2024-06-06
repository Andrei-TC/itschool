#include <iostream>
#include "string.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> vect = { 1,2,2,3,4,4,5 };
	int prevEl = vect[0];
	for (auto el : vect) {
		prevEl++;
		if (el == prevEl) {
			vect.erase(vect.begin() + el);
		}
		cout << el << " ";
	}
}