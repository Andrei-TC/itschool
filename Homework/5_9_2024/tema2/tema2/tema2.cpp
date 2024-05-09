#include <iostream>
using namespace std;

// Returnez aceiasi functie in timp ce conditia nu este indeplinita
// Exemplu: daca "nr" ales de user este 5, functia va fii chemata de 5 ori in timp ce se calculeaza si numarul dorit

int factorial(int nr) { // Exemplu: 5
	if (nr <= 1) // 5 < 1 (fals)
		return 1;
	return nr * factorial(nr - 1);  //Find fals, 5 * (unde se reia funcita pt 4 (unde se reia functia pentru 3 (etc)))
}

int main()
{
	int x;
	cout << "Introdu numarul: ";
	cin >> x;
	cout << x << "! = " << factorial(x) << endl;
}
