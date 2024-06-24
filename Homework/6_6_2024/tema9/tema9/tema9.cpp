#include <iostream>
#include "string.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vect = { 1,2,2,3,4,4,5 };
	auto it = unique(vect.begin(), vect.end());
	vect.erase(it, vect.end());
	for (auto el : vect) {
		cout << el << " ";
	}
	
}