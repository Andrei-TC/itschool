#include <iostream>
using namespace std;

bool prime(int nr) {
	int i = 2;
	do {
		if (nr % i == 0)
			return false;
		i++;
	} while (i <= nr - 1);
	return true;
}

int main()
{
	int nr;
		cout << "Pentru a oprii aplicatia, introdu valoarea 0." << endl;
	do {
		cout << "Introdu numarul dorit: ";
		cin >> nr;
		if (nr == 0) {
			cout << "Aplicatie oprita.";
			break;
		}
		if (prime(nr)) {
			cout << "Numarul " << nr << " este prim." << endl;
		} else cout << "Numarul " << nr << " NU este prim." << endl;
	} while (nr != 0);
}