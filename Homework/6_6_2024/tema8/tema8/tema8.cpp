#include <iostream>
#include "string.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> vect = { 1,2,3,4,5 };
	reverse(vect.begin(), vect.end());
	for (auto el : vect) {
		cout << el << " ";
	}
}