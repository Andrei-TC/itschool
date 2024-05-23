#include <iostream>

using namespace std;

long produs(int k) {
	int j = 1;
	long fact = 1; // Initializam cu 1 pentru ca daca inmultim cu 0 va fi mereu 0
	while (j <= k) {
		fact *= j++;
	}
	return fact;
}

int main()
{
	int numar;
	cout << "Introdu numarul dorit: ";
	cin >> numar;
	cout << "Factorialul numarului " << numar << " este " << produs(numar) << "." << endl;
}