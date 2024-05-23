#include <iostream>
using namespace std;

int expon(int b, int e) {
	int suma = 1;
	int copy_e = e;
	if (e == 0) // In cazul in care exponentul este 0, rezultatul va fi 1
		return suma;
	do {
		suma *= b;
		copy_e--;
	} while (copy_e > 0);
	return suma;
}

int main()
{
	int baza, expo;
	cout << "Introdu numarul baza: ";
	cin >> baza;
	cout << "Introdu numarul exponential: ";
	cin >> expo;
	cout << "Rezultatul: " << expon(baza, expo);

}
