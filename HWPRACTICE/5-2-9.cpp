#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <set>

using namespace std;


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	long k;
	double x,j, fact;
	j = 0;
	fact = -1;
	cin >> k >> x;
	for (int i = 1; i <= k; i++) {
		fact *= (x*x)/((i * 2 - 1) * (i * 2) * -1);
		j += fact;
		cout << j << '\n';
	}
	cout << j;
	return 0;

}
