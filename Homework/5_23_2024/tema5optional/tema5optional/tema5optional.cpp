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

void fact_prim(int nr) {
	int i = 2;
	int expo;
	if (nr > 3) {
		cout << "Factorii primi a lui " << nr << " sunt: ";
	}
	else cout << "Introdu un numar mai mare.";
	while (nr > 3) {
		if (nr % i == 0) {
			expo = 0;
			while (nr % i == 0) {
				++expo;
				nr /= i;
			}
			cout << i << "^" << expo << ", ";
		}
		++i;
	}
}

void nr_prim(int nr) {
	int expo;
	for (int i = 2; i <= nr; i++) {
		if (nr % i == 0) {
			expo = 0;
			while (nr % i == 0) {
				expo++;
				nr /= i;
			}
			cout << i << "^" << expo << " ";
		}
	}
}

int main()
{
	int numar;
	cout << "Introdu numarul dorit: ";
	cin >> numar;
	fact_prim(numar);
	cout << endl;
	//nr_prim(numar);
}