#pragma once
#include <string>
using namespace std;

struct produs {
	string denumire;
	float pret;
	int cantitate;
	 string afisare() const {
		return "Produs: " + denumire + " | Pret: " + to_string(pret) + " | Cantitate: " + to_string(cantitate) + "\n";
	}
};