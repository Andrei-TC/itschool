#include <iostream>
#include "string.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> vect = { 2,4,6,8,10 };
	int suma = 0;
	for (auto el : vect) {
		suma += el;
	}
	cout << "Suma este: " << suma;
}