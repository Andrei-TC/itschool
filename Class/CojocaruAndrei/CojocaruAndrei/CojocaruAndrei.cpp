#include <iostream>
#include "string.h"
#include <string>

using namespace std;

void anotimp_old() {
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
void zombie() {
	string zombie = "Zombie";
	string om = "om";
	string question1, question2;

	cout << "Culoarea pielii neobisnuita? ";
	cin >> question1;
	cout << "Persoana se misca ciudat?";
	cin >> question2;
	if (question1 == "da" && question2 == "da") {
		cout << "Persoana este zombie";
	}
	else {
		cout << "Persoana nu este zombie";
	}
}
void bautura() {
	string bautura;
	cout << "Alegeti tipul de bautura: ";
	cin >> bautura;

	if (bautura == "cafea") {
		cout << "Recomand lapte";
	}
	else if (bautura.compare("ceai") == 0) {
		cout << "Recomand biscuiti";
	}
	else if (!bautura.compare("suc")) {
		cout << "Recomand apa";
	}
	else cout << "Stoc indisponibil";
}
void vocale() {
	char c;
	cout << "Introdu un caracter: ";
	cin >> c;
	switch (c) {
	case 'a':
		cout << "Este o vocala";
		break;
	case 'e':
		cout << "Este o vocala";
		break;
	case 'i':
		cout << "Este o vocala";
		break;
	case 'o':
		cout << "Este o vocala";
		break;
	case 'u':
		cout << "Este o vocala";
		break;
	default: cout << "Este o consoana";
	}
}
void anotimp() {
	int numar2;
	cout << "Introdu un numar 1-12: ";
	cin >> numar2;
	switch (numar2) {
	case 1:
	case 2:
		cout << "Iarna" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "Primavara" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "Vara" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "Toamna" << endl;
		break;
	case 12:
		cout << "Iarna" << endl;
		break;
	default: cout << "Introdu un numar valid" << endl;
	}
}
void saptamana() {
	int numar;
	cout << "Introdu un numar 1-7: ";
	cin >> numar;
	switch (numar) {
	case 1:
		cout << "Luni" << endl;
		break;
	case 2:
		cout << "Marti" << endl;
		break;
	case 3:
		cout << "Miecuri" << endl;
		break;
	case 4:
		cout << "Joi" << endl;
		break;
	case 5:
		cout << "Vineri" << endl;
		break;
	case 6:
		cout << "Sambata" << endl;
		break;
	case 7:
		cout << "Duminica" << endl;
		break;
	default: cout << "Introdu un numar valid" << endl;
	}
}

void bucla1(int i) {
	int x = 0;
	while (x <= i) {
		switch (x % 2) {
		case 0: cout << "Numarul este: " << x << endl; break;
		default: break;
		}
		++x;
	}
}
void bucla2(int h) {
	int x = 0;
	while (x <= h) {
		if (x % 2 == 0) {
			cout << "Numarul este: " << x << endl;
		}
		++x;
	}
}
void bucla3(int h) {
	int x = 0;
	while (x <= h) {
		cout << "Numarul este: " << x << endl;
		x += 2;
	}
}
int bucla4(int k) {
	int i = 1;
	int sum = 0;
	while (i <= k) {
		sum += i++;
	}
	return sum;
}
void each_nr(int x) {
	while (x > 0) {
		cout << x % 10 << endl;
		x /= 10;
	}
}
void reverse_nr(int x) {
	int nr_invers = 0;

	while (x > 0) {
		int ultima_cifra = x % 10;
		nr_invers = nr_invers * 10 + ultima_cifra;
		x /= 10;
	}
	cout << nr_invers;
}
int fibo() {
	int n;
	cin >> n;
	int nr_1 = 0;
	int nr_2 = 1;
	if (n == 1)
		return nr_1;
	if (n == 2)
		return nr_2;
	int i = 3;
	int nr_3 = 0;
	while (i <= n) {
		nr_3 = nr_1 + nr_2;
		nr_1 = nr_2;
		nr_2 = nr_3;
		i++;
	}
	return nr_3;
}

int putere(int baza, int exponent) {
	int produs = 1;
	while (exponent > 0) {
		produs *= baza;
		--exponent;
	}
	return produs;
}
int nr_exponent(int nr) {
	int number = 0;
	while (nr > 0) {
		nr /= 10;
		++number;
	}
	return number;
}
bool armstrong(int numar) {
	int cifre = nr_exponent(numar);
	int suma = 0;
	int copy_n = numar;
	while (numar > 0) {
		suma = suma + putere(numar % 10, cifre);
		numar /= 10;
	}
	if (suma == copy_n)
		return true;
	return false;
}
void nr_par() {
	int numar;
	do {
		cout << "Introdu numar: ";
		cin >> numar;
		if (numar == 5)
			//break;
			continue;
		if (numar % 2 == 0)
			cout << "Numarul este par" << endl;
		else cout << "Numarul este impar" << endl;
	} while (numar % 10 != 0);
}
void ma() {
	int a;
	int k = 0;
	float ma = 0;
	cout << "Pentru a oprii programul, introdu valoarea 0." << endl;
	do {
		cout << "Introdu numarul " << k + 1 << ": ";
		cin >> a;
		ma += a;
		++k;
		if (ma == 0)
			cout << "Programul se inchide.";
	} while (a != 0);
	--k;
	float media = (float)ma / k;
	cout << "Media aritmetica este " << media << endl;
}
int nr_cfr(int nr) {
	int number = 0;
	do {
		nr /= 10;
		++number;
	} while (nr > 0);
	cout << "Numar: " << number;
	return number;
}
void diviziori(int nr) {
	int i = 1;
	do {
		if (nr % i == 0)
			cout << "Divizor a lui " << nr << " este " << i << endl;
		i++;
	} while (i <= nr);
}
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
	do {
	cin >> nr;
	cout << prime(nr) << endl;
	} while (nr != 0);
}