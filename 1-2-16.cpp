#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int r1, r2;
	cin >> r1 >> r2;
	cout << (M_PI * r2 * r2) - (M_PI * r1 * r1);

	return 0;
}