#include <iostream>
#include "string.h"
#include <string>
#include <vector>
#include <set>
#include <numeric>
#include <functional>
#include <algorithm>
#include <map>
#include <fstream>

using namespace std;

bool closing = false;
void main_menu();

bool inchidere() {
	int question;
	cout << "Vrei sa inchizi programul? 1 - Da / 2 - Nu" << endl;
	cin >> question;
	switch (question) {
	case 1:
		cout << "Programul a fost inchis cu succes!";
		return closing = true;
		break;
	case 2:
		main_menu();
		break;

	default:
		return closing = false;
		break;
	}
}

void afisare() {
	fstream products("products.txt", ios::in);
	string lista;
	if (!products) {
		cout << "Fisierul 'products.txt' nu a fost gasit." << endl;
	}
	while (getline(products, lista)) {
		cout << lista << endl;
	}
	cout << endl;
	products.close();
}
void adauga_produs() {
	fstream products("products.txt", ios::app);
	string denumire, pret, cantitate;
	cout << "Denumirea produsului: ";
	cin >> denumire;
	cout << "Pretul produsului: ";
	cin >> pret;
	cout << "Cantitatea produsului: ";
	cin >> cantitate;
	string produsul_nou = denumire + ' ' + pret + ' ' + cantitate;
	products << endl << produsul_nou;
	cout << endl;
	products.close();
	fstream raport("raport.txt", ios::in | ios::out);
	string line;
	while (getline(products, line)) {
		raport >> line;//same
	}
	raport.close();
	main_menu();
}
void sterge_produs() {
	fstream products("products.txt", ios::in | ios::out);
	string denumire;
	string line;
	cout << "Denumirea produsului: ";
	cin >> denumire; // Blocat-ish

	products.close();
	main_menu();
}
void main_menu() {
	int menu;

	cout << "Ce doresti sa faci? \n 1 - Afisaza lista cu produse \n 2 - Adauga un produs nou \n 3 - Sterge un produs \n 4 - Inchide programul" << endl;
	cin >> menu;
	switch (menu) {
	case 1:
		afisare();
		break;
	case 2:
		adauga_produs();
		break;
	case 3:
		sterge_produs();
		break;
	case 4:
		inchidere();
		break;
	}
}

int main()
{
	while (!closing) {
		main_menu();
	}
}