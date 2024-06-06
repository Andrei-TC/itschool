#include <iostream>
#include "string.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> vect = {1,2,3,4,5};
	cout << vect.size() << " " << vect.capacity();

	
	
}

// int vp_ap[100] = {0};
//for (int i = 0; i < n; ++i) {
//	vp_ap[x[i]]++;
//}
//int max_ap = vp_ap[0];
//int nr;
//for (int i = 1; i < 15; i++) {
//	if (vp_ap[i] > max_ap) {
//		max_ap = vp_ap[i];
//		nr = i;
//	}
//}
//cout << "Nr " << nr << " apare de " << max_ap;

