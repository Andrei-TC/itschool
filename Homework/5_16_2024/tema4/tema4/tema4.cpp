#include <iostream>
#include <string>

using namespace std;

int main()
{
	char c;
	cin >> c;
	string vocale = "aeiou";

	if (vocale.find(c) >= 0 && vocale.find(c) <= 4) {
		cout << "Vocala";
	}
	else cout << "Consoana";
}

