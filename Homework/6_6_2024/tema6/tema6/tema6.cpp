#include <iostream>
#include "string.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> vect = { 10,20,30,40,50 };
	vect.insert(vect.begin() + 2, 25);

	for (auto el : vect) {
		cout << el << " ";
	}

}