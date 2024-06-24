#include <iostream>
#include "string.h"
#include <string>
#include <vector>
#include <set>
#include <numeric>
#include <functional>
#include <algorithm>
#include <map>

using namespace std;

int majuscula(string s, int k) {
    if (s[k] < 97)
        return s[k];
    return majuscula(s, k + 1);
}

int main()
{
    string litere = { "anasaauslaaumparasDturi" };
    int k = 0;
    cout << (char)majuscula(litere, k);
}
