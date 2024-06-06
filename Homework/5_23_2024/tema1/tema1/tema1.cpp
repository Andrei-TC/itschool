#include <iostream>
using namespace std;


int suma(int x) {
	int suma = 0;
	do {
		int cifre = x % 10;
		suma = suma + cifre; // suma = 0 + x
		x /= 10;
	} while (x > 0);
	return suma;
}
int produs(int x) {
	int produs = 1;
	do {
		int cifre = x % 10;
		produs = produs * cifre; // produs = 1 * x
		x /= 10;
	} while (x > 0);
	return produs;
}

int main()
{
	int numar;
	cout << "Introdu numarul dorit: ";
	cin >> numar;
	suma(numar);
	produs(numar);
	cout << "Produsul cifrelor este: " << produs(numar) << " ,iar suma lor este: " << suma(numar);
}
