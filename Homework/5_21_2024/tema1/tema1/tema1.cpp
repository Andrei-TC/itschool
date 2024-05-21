#include <iostream>

using namespace std;

long produs(long k) {
    int j = 1;
    long expo = 1; // Initializam cu 1 pentru ca daca inmultim cu 0 va fi mereu 0
    while (j <= k) {
        expo *= j++;
    }
    return expo;
}

int main()
{
    int numar;
    cout << "Introdu numarul dorit: ";
    cin >> numar;
    cout << "Exponentialul numarului " << numar << " este " << produs(numar) << "." << endl;
}
