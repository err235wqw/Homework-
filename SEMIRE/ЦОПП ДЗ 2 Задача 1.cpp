#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cmath>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {
	long long t,n,zz,q,u,k;
	vector <long long> d;
	cin >> t;
	q = 0;
	k = 0;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int i1 = 0; i1 < n; i1++) {
			cin >> zz;
			d.push_back(zz);
		}
		sort(d.begin(), d.end());
		for (int i1 = 0; i1 < n; i1++) {
			if (d[0]*d[d.size()-1] % d[i1] != 0) {
				q = 999;
				break;
			}
		} 
		for (u = 2; u < d[0]; u++) {
			if (d[0]*d[d.size()-1] % u == 0) {
				k = 5;
				break;
			}
		}
		if (q != 999 && k <3) {
			cout << d[0]*d[d.size()-1] << endl;
		}
		else {
			cout << "-1" << endl;
		}
		k = 0;
		d.clear();
		q = 0;
	}
	return 0;
}
