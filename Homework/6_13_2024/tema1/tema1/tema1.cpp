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

int lungime(string s, int k) {
    if (s[k] == '\0')
        return k;
    return lungime(s, k + 1);
}

int main()
{
    string litere = { "anasaDuslaCumparaturi" };
    int k = 0;
    cout << lungime(litere, k);
}
