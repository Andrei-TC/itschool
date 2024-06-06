#include <iostream>
using namespace std;

void produs() {
	int nr, n, i = 0;
	int prod = 1;
	cout << "Introdu numarul de iteratii: ";
	cin >> n;
	do {
		cout << i + 1 << " - Introdu numarul dorit: ";
		cin >> nr;
		prod *= nr;
		++i;
	} while (i < n);
	cout << "Produsul numerelor alese este: " << prod;
}

int main()
{
	produs();
}