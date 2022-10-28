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
	int n;
	double s, a0, x;
	cin >> n >> x;
	a0 = sin(x);
	s = sin(x);
	for (int i = 2; i <= n; i++) {
		a0 = sin(a0);
		s += a0;
	}
	cout << s;
	return 0;

}
