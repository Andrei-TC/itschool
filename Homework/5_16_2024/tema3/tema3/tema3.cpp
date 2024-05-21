#include <iostream>
#include <string>

using namespace std;

int main()
{
	string iarna = "iarna", primavara = "primavara", vara = "vara", toamna = "toamna";
	int luna;
	cout << "Introdu luna: ";
	cin >> luna;
	if (luna <= 2 || luna == 12) {
		cout << "Anotimpul este " << iarna;
	}
	else if (luna >= 3 && luna <= 5) {
		cout << "Anotimpul este " << primavara;
	}
	else if (luna >= 6 && luna <= 8) {
		cout << "Anotimpul este " << vara;
	}
	else if (luna >= 9 && luna <= 11) {
		cout << "Anotimpul este " << toamna;
	}
	else if (luna > 12 || luna < 1) {
		cout << "Selecteaza o luna corecta";
	}
}
