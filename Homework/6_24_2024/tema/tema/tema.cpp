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
#include "produs.h"

using namespace std;

bool closing = false;
int citire = 0;
vector<produs> p;
void main_menu();
void afisare_produse(vector<produs>& p);

bool citire_produse(vector<produs>& p) {
	fstream f("products.txt", ios::in);
	if (!f) {
		cout << "Eroare la deschiderea fisierului!";
		return false;
	}
	string denumire;
	float pret;
	int cant;
	while (!f.eof()) {
		f >> denumire;
		f >> pret;
		f >> cant;
		produs temp = { denumire , pret , cant };
		p.push_back(temp);
	}
	f.close();
	return true;
}
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

void afisare_produse(vector<produs>& p) {
	for (const auto& el : p) {
		cout << el.afisare();
	}
	cout << endl;
}
void raport_produse(vector<produs>& p) {
	fstream raport("raport.txt", ios::out);
	if (!raport) {
		cout << "Eroare raport!";
		return;
	}
	float suma = 0;
	for (const auto& el : p) {
		suma += el.cantitate * el.pret;
		raport << el.afisare();
	}
	raport << "Valoarea totala a produselor este: " << suma;
	raport.close();
}
void adauga_produs(vector<produs>& p) {
	string denumire;
	float pret;
	int cant;
	cout << "Denumirea produsului: ";
	cin >> denumire;
	cout << "Pretul produsului: ";
	cin >> pret;
	cout << "Cantitatea produsului: ";
	cin >> cant;
	produs temp = { denumire, pret, cant };
	p.push_back(temp);
	cout << endl;
}
void sterge_produs(vector<produs>& p) {
	string denumire;
	cout << "Denumirea produsului: ";
	cin >> denumire;
	for (auto itr = p.begin(); itr != p.end(); ++itr) {
		if (itr->denumire == denumire) {
			itr = p.erase(itr);
		}
	}
	cout << "Produsul " << denumire << " a fost sters! \n";
}
void main_menu() {
	int menu;

	cout << "Ce doresti sa faci? \n 1 - Citeste produsele \n 2 - Afisaza lista cu produse \n 3 - Adauga un produs nou \n 4 - Sterge un produs \n 5 - Raport \n 0 - Inchide programul" << endl;
	cin >> menu;
	
	switch (menu) {
	case 1:
		if (citire == 0) {
			if (!citire_produse(p)) {
				cout << "Eroare";
				break;
			}
			else {
				citire = 1;
				cout << "Produsele au fost citite! \n";
				break;
			}
		}
		cout << "Ai citit deja datele" << endl;
		break;
	case 2:
		if (citire != 0) {
			afisare_produse(p);
			break;
		}
		else
			cout << "Te rog citeste datele (1)" << endl;
		break;
	case 3:
		adauga_produs(p);
		break;
	case 4:
		sterge_produs(p);
		break;
	case 5:
		raport_produse(p);
		break;
	case 0:
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