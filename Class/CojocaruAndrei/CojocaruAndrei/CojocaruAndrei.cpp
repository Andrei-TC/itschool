#include <iostream>
using namespace std;
int main()
{
    /*
    int a;
    cin >> a;
    cout << "Ultimele 2 cifre: " << a % 100;
    */

    ///////////////////////

    /*
    float pret;
    cout << "Introduceti pretul: ";
    cin >> pret;
    float reducere = pret * 19 / 100;
    cout << "Pretul redus este: " << pret - reducere << endl;
    */
    
    ////////////////////////

    /*
    int x;
    cin >> x;
    int prima_cifra = x / 100;
    int a_doua_cifra = (x / 10) % 10;
    int ultima_cifra = x % 10;
    int suma = prima_cifra + a_doua_cifra + ultima_cifra;

    cout << "Suma cifrelor este: " << suma << endl;
    */

    //////////////////////

    // Tema 5/9/2024
    // 1
    int year = 2024;
    if (year % 4 == 0) {
        cout << "Anul " << year << " este bisect." << endl;
    }
    else {
        cout << "Anul " << year << " nu este bisect." << endl;
    }
    cout << "Caut alt an: ";
    cin >> year;
    if (year % 4 == 0) {
        cout << "Anul " << year << " este bisect." << endl;
    }
    else {
        cout << "Anul " << year << " nu este bisect." << endl;
    }
    // Cum pot reduce numarul de linii de cod avand in vedere ca sunt reptetitive?
    // 2 

    int 
}