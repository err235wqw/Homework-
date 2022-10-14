#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#include <vector>
#define _USE_MATH_DEFINES
using namespace std;
void fgh(int &x) {
	if (x % 2 == 0) {
		x = x / 2;
	}
	else {
		x = 0;
	}
}
int main() {
	int d;
	cin >> d;
	fgh(d);
	cout << d;

	return 0;
	}
