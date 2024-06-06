#include <iostream>
using namespace std;

void elem_com(int v[], int n, int v2[], int n2) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n2; j++) {
			if (v[i] == v2[j])
				cout << v[i] << " ";
		}
	}
}

int main()
{
	int x[] = { 3, 4, 8, -10, -34, 0, 32};
	int y[] = { 1,4,6,9,101,1000,4000 };
	int z[] = { 3, 4, 5, -22, -34, 0, 101 };
	int n = sizeof(x) / sizeof(int);
	int m = sizeof(y) / sizeof(int);
	int o = sizeof(z) / sizeof(int);

	cout << "Elementele comune ale sirurilor x si z sunt: ";
	elem_com(x, n, z, o);
	cout << endl;
	cout << "Elementele comune ale sirurilor y si z sunt: ";
	elem_com(y, m, z, o);
}