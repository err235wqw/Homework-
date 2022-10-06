#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	double p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2.;
	cout << "Площадь треугольника" << endl << sqrt(p*(p - a)*(p - b)*(p - c)) << endl;

	return 0;
}