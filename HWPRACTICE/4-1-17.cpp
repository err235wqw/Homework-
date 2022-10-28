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
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n;
	double b1, b2;
	cin >> n;
	b1 = 4;
	b2 = 2;
	cout << "b1 " << b1 << endl << "b2 " << b2 << endl;
	for (int i = 3; i <= n; i++) {
		cout << 'b' << i << ' ' << b1 / i + (n * n) / b2 << endl;
    b3 = b1;
		b1 = b2;
		b2 = b3 / i + (n * n) / b2;
	}
	return 0;

}	
