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
	double x;
	cin >> x;
	cout << setprecision(15) << fixed << pow(cosh(x), -7) + (log(2 * x) / log(7 / 8)) - floor(pow(cosh(x), -7) + (log(2 * x) / log(7 / 8))) << endl;
	cout  << int(pow(cosh(x), -7) + (log(2 * x) / log(7 / 8)));
	return 0;
}
