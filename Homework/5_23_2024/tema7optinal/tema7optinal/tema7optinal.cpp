#include <iostream>
#include <string>
using namespace std;

int toBinary(int x) {
	string bin = "";
	while (x) {
		if (x % 2 == 0) {
			bin.append("0");
		}
		else {
			bin.append("1");
		}
		x /= 2;
	}
	reverse(bin.begin(), bin.end());
	cout << bin;
	return x;
}

int main()
{
	int numar;
	cout << "Introdu numarul zecimal: ";
	cin >> numar;
	cout << "Convertit la binar: ";
	toBinary(numar);
}