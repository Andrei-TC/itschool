#include <iostream>
using namespace std;

int toZecimal(int x) {
	int baza = 1;
	int suma = 0;
	while (x != 0) {
		int ultima_cifra = x % 10;
		x /= 10;
		suma += ultima_cifra * baza;
		baza *= 2;
	}
	return suma;
}

int main()
{
	int numar;
	cout << "Introdu numarul binar: ";
	cin >> numar;
	cout << "Conververtit la zecimal = " << toZecimal(numar);
}