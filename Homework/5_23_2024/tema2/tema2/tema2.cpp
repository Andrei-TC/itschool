#include <iostream>
using namespace std;

void numaratoare(int& nr) {
	do {
		cout << "Count: " << nr << endl;
		nr -= 1;
	} while (nr > 0);
}

int main()
{
	int numar;
	cout << "Numaratoare inversa: ";
	cin >> numar;
	numaratoare(numar);
}
