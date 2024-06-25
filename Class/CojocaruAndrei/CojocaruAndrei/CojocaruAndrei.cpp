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
#include "elev.h"

void afisare(int v[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << v[i][j] << ' ';
		}
		cout << endl;
	}
}

bool simetrica(int m[3][3], int n[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (n[i][j] != m[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int m[3][3];
	int n[3][3];
	fstream f("matrice.txt", ios::in);
	if (!f) {
		cout << "Eroare fisier" << endl;
		return 1;
	}
	int el;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			f >> m[i][j];
			n[j][i] = m[i][j];
		}
	}
	afisare(m);
	cout << endl;
	afisare(n);
	cout << endl;
	if (simetrica(m, n)) {
		cout << "Simetrica";
	}
	else {
		cout << "Nu este";
	}
	int produs = 1;
	for (int i = 0; i < 3; ++i) {
		produs *= m[i][i];
	}
	cout << "\nProdus dig. principala: " << produs;
	produs = 1;
	for (int i = 0; i < 3; i++) {
		produs *= m[i][3 - 1 - i];
	}
	cout << "\nProdus dig. sec.: " << produs;
}

//
//void citire() {
//	/*fstream file("input.txt", ios::in | ios::app);
//	if (!file) {
//		cout << "Nu s-a deschis fisierul." << endl;
//		return;
//	}
//	vector<int> numere;
//	int nr;
//	while (file >> nr) {
//		numere.push_back(nr);
//	}
//	file.close();
//	sort(numere.begin(), numere.end());
//	file.open("input.txt", ios::out | ios::trunc);
//	for (const int& i : numere) {
//		file << i << " ";
//	}
//	file.close();*/
//
//	//ifstream input_file("input.txt");
//	//if (!input_file) {
//	//	cout << "Eroare la citirea fisierului." << endl;
//	//	return;
//	//}
//	//else
//	//	cout << "Fisierul s-a deschis cu succes!" << endl;
//	//string line;
//	//ofstream output_file("output.txt", ios::trunc);
//	//if (!output_file) {
//	//	cout << "Eroare la citirea fisierului." << endl;
//	//	return;
//	//}
//	//else
//	//	cout << "Fisierul s-a deschis cu succes!" << endl;
//	//while (input_file >> line) {
//	//
//	//	reverse(line.begin(), line.end());
//	//	output_file << line << endl;
//	//}
//	//input_file.close();
//	//output_file.close();
//}
////typedef struct elev {
////	string nume_prenume;
////	string nr_matricol;
////	int clasa;
////	struct nota {
////		string materie;
////		float valoare;
////		void afisare() const {
////			cout << "Materie: " << materie << " " << valoare << endl;
////		}
////	};
////	nota note[5];
////	void afisare() const {
////		cout << "Elev: " << nume_prenume << " " << nr_matricol << " clasa: " << clasa << endl;
////		for (int i = 0; i < 5; i++) {
////			note[i].afisare();
////		}
////	}
////	bool operator<(const elev& e) const {
////		return nume_prenume < e.nume_prenume;
////	}
////	float media_notelor() const{
////		int suma = 0;
////		for (int i = 0; i < 5; i++) {
////			suma += note[i].valoare;
////		}
////		return static_cast<float>(suma) / 5;
////	}
////};
////
////int main()
////{
////	set<elev> e;
////	e.insert({
////		"Andrei Tiberius",
////		"NM3559929",
////		3,
////		{
////			{"mate", 9},
////			{"romana", 2},
////			{"sport", 10},
////			{"engleza", 7},
////			{"bio", 3}
////		}
////		});
////	e.insert({
////		"Gigi Hagi",
////		"NM4359234",
////		6,
////		{
////			{"mate", 5},
////			{"romana", 7},
////			{"sport", 10},
////			{"engleza", 3},
////			{"bio", 5}
////		}
////		});
////	e.insert({
////		"Ionescu Popescu",
////		"NM5153323",
////		7,
////		{
////			{"mate", 3},
////			{"romana", 7},
////			{"sport", 10},
////			{"engleza", 4},
////			{"bio", 8}
////		}
////		});
////	for (const auto& el : e) {
////		el.afisare();
////		cout << "Media elevului este: " << el.media_notelor()<< endl;
////		cout << endl;
////	}
////}