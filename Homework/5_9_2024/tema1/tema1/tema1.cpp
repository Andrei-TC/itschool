#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Introdu anul dorit: ";
    cin >> year;
    if (year % 4 == 0) {
        cout << "Anul " << year << " este bisect." << endl;
    }
    else {
        cout << "Anul " << year << " nu este bisect." << endl;
    }
}