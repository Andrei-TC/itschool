#include <iostream>
using namespace std;

void media_ar(int v[], int n) {
	float suma = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		suma += v[i];
	}
	suma /= n;
	for (int i = 0; i < n; i++) {
		if (v[i] > suma)
			++k;
	}
	cout << "Sunt " << k << " numere mai mari decat media aritmetica (" << suma << ") a sirului de mai sus.";
}
void afisare(int v[], int n) {
	cout << "Sirul: ";
	for (int i = 0; i < n; ++i) {
		cout << v[i] << " ";
	}
}

int main()
{
	int x[] = { 3, 4, 8, 3, 1, 0, 5 };
	int y[] = { 1,4,6,9,101,1000,4000 };
	int z[] = { 3, 4, 5, -22, -34, 0, 101, 4, 3, 102, 4, 15 };
	int n = sizeof(x) / sizeof(int);
	int m = sizeof(y) / sizeof(int);
	int o = sizeof(z) / sizeof(int);

	afisare(x, n);
	cout << endl;
	media_ar(x, n);
}