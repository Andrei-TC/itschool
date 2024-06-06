#include <iostream>
using namespace std;

void frecv(int v[], int n) {
	int frecventa = 0;
	int frecventa2 = 0;
	int frecventa_elem;
	int elem = v[0];
	int elem2 = v[0];
	for (int i = 0; i < n; i++) {
		frecventa_elem = 0;
		for (int j = 0; j < n; j++) {
			if (v[j] == v[i])
				++frecventa_elem;
			if (frecventa_elem > frecventa) {
				frecventa = frecventa_elem;
				elem = v[i];
			}
			if (frecventa_elem > frecventa2 && v[i] != elem) {
				frecventa2 = frecventa_elem;
				elem2 = elem;
			}
		}
	}
	cout << "Elementul " << elem << " apare de " << frecventa << " ori";
	cout << ", iar al doilea cel mai frecvent element este " << elem2 << " care apare de " << frecventa2 << " ori.";
}

int main()
{
	int x[] = { 3, 5, 4, 8, -10, -34, 0, 32, 3, 4, 5, -22, -34, 0, 101, 4, 4, 4, 5 };
	int y[] = { 1,4,6,9,101,1000,4000 };
	int z[] = { 3, 4, 5, -22, -34, 0, 101 };
	int n = sizeof(x) / sizeof(int);
	int m = sizeof(y) / sizeof(int);
	int o = sizeof(z) / sizeof(int);

	frecv(x, n);
}