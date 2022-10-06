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
	int a, b, c, i;
	double pi;
	pi = 3;
	a = 2;
	b = 3;
	c = 4;
	cout << setprecision(15) << fixed << "Пи " << 22.0 / 7.0 << endl;
	cout << setprecision(15) << fixed << "Пи " << M_PI << endl;
	for ( i = 0; i < 40; i++) {
		pi += 4.0 / (a * b * c) - 4.0 / ((a+2)*(b+2)*(c+2));
		a += 4;
		b += 4;
		c += 4;

	}
	cout << "Вычисление с помощью ряда Нилаканта " << pi;
	return 0;
}
