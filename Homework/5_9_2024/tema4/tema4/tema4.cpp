#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    int y = 6;
    int z = 4;

    int op = x * y - z;
    op -= y + z;
    y /= 2;
    z *= 3;
    x += y + z;
    op += x - z + y + 10;
    cout << "Numarul meu norocos este = " << op << endl;
}
