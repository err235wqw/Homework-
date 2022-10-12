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
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a,b,c;
	cin >> a >> b >> c;
	if (b * b - 4 * a * c >= 0) {
		(b * b - 4 * a * c == 0) ? cout << 1 : cout << 2;
		return 0;
	}
	cout << 0;
	return 0;
}
