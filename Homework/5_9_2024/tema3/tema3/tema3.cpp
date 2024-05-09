#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 9;
    int z = 3;

    cout << "Numerele sunt:" << endl <<  "X = 5" << endl << "Y = 9" << endl << "Z = 3" << endl;
    cout << "X > Y sau Z < X => " << ((x > y) || (z < x)) << endl;
    cout << "X < Y si Y < Z sau Z > X => " << (((x < y) && (y < z)) || (z > x)) << endl;
    cout << "X < Y si Y < Z => " << (x < y) && (y > z);
}

