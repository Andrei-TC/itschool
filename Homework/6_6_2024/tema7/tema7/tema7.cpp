#include <iostream>
#include "string.h"
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	vector<int> vect = { 2,4,6,8,10 };
	int suma = 0;
	for (auto el = vect.begin(); el != vect.end(); el++) {
		suma += *el;
	}
	suma = accumulate(vect.begin(), vect.end(), 0);
	cout << "Suma este: " << suma;
}