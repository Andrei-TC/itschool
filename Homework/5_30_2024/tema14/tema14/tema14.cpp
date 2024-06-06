#include <iostream>
using namespace std;

void elem_disct(int v[], int n, int v2[], int n2, int ar[]) {
	bool gasit = false;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n2; ++j) {
			if (v[i] == v2[j]) {
				v2[j] = 0;
				gasit = true;
			}
		}
		if (gasit)
			v[i] = 0;
		gasit = false;
		cout << v[i] << ' ';
	}
}

int main()
{
	int x[] = { 3, 4, 8, -15, -34, 1, 32, 105, 101, 9, 101, 4, 3 };
	int y[] = { 1,4,6,9,101,1000,4000 };
	int z[] = { 3, 4, 5, -22, -34, 0, 101 };
	int n = sizeof(x) / sizeof(int);
	int m = sizeof(y) / sizeof(int);
	int o = sizeof(z) / sizeof(int);
	int ar[100];

	cout << "Elementele distincte ale sirurilor x si z sunt: ";
	elem_disct(x, n, z, o, ar);
	cout << endl;
	cout << "Elementele distincte ale sirurilor y si z sunt: ";
	elem_disct(y, m, z, o, ar);
}