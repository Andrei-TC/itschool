#include <iostream>
using namespace std;

void produs() {
	int nr;
	int prod = 1;
	do {
		cout << "Introdu numarul dorit: ";
		cin >> nr;
		if (nr == 0)
			break;
		prod *= nr;
	} while (nr != 0);
	cout << "Produsul numerelor alese este: " << prod;
}

int main()
{
	cout << "Aplicatia se opreste la introducerea valorii 0" << endl;
	produs();
}