#include <iostream>
#include "string.h"
#include <string>
#include <vector>
#include <set>
#include <numeric>
#include <functional>
#include <algorithm>
#include <map>
#include <math.h>
#include <fstream>
#include <conio.h>
#include <stdexcept>
using namespace std;

struct Nod {
	int data;
	Nod* urm;
	Nod(int val) {
		data = val;
	}
};

int getLength(Nod* head) {
	int lung = 0;
	while (head != nullptr) {
		lung++;
		head = head->urm;
	}
	return lung;
}
Nod* concat(Nod* head, Nod* h2) {
	Nod* temp;
	while (head->urm != nullptr) {
		head = head->urm;
	}
	head->urm = h2;
	return temp;
}

bool isPalindrom(Nod* head) {
	vector<int> elemente;
	while (head != nullptr) {
		elemente.push_back(head->data);
		head = head->urm;
	}
	for (int i = 0; i < elemente.size() / 2; i++) {
		if (elemente[i] != elemente[elemente.size() - i - 1])
			return false;
	}
	return true;
}

int main()
{
	Nod* head = nullptr;
	head = new Nod(10);
	Nod* sec = new Nod(12);
	head->urm = sec;
	Nod* th = new Nod(14);
	sec->urm = th;
	Nod* frh = new Nod(15);
	th->urm = frh;
	Nod* fit = new Nod(19);
	frh->urm = fit;
	cout << isPalindrom(head);
}