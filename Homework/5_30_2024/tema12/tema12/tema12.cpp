#include <iostream>
using namespace std;

void elem_element(int v[], int n, int x) {
	int k = 0;
	int diff = 0;
	for (int i = 0; i < n; i++) {
		++k;
		if (v[i] == x) {
			v[i] = 0;
			++diff;
			for (int i = k - 1; i < n; ++i) {
				v[i] = v[i + 1];
			}
		}
	}
	cout << "Elementul " << x << " a fost eliminat.\nSirul este: ";
	for (int i = 0; i < n - diff; ++i) {
		cout << v[i] << " ";
	}
}
void afisare(int v[], int n) {
	cout << "Sirul: ";
	for (int i = 0; i < n; ++i) {
		cout << v[i] << " ";
	}
}

int main()
{
	int x[] = { 3, 4, 8, -10, -34, 0, 32 };
	int y[] = { 1,4,6,9,101,1000,4000 };
	int z[] = { 3, 4, 5, -22, -34, 0, 101, 4, 3, 102, 4, 15 };
	int n = sizeof(x) / sizeof(int);
	int m = sizeof(y) / sizeof(int);
	int o = sizeof(z) / sizeof(int);
	int numar;

	afisare(z, o);
	cout << endl;
	cout << "Introdu un numar din sirul de mai sus: ";
	cin >> numar;
	cout << endl;
	elem_element(z, o, numar);
}