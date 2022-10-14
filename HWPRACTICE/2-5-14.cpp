#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#include <vector>
#define _USE_MATH_DEFINES
using namespace std;
void func(long double xx) {
	if (log(4 - 2 * xx) == 0 || 4 - 2 * xx <= 0 || xx * xx - 2 * xx + 1 < 0) {
		cout << setprecision(15) << fixed << xx << "  Не определено" << endl;
	}
	else {
		cout << setprecision(15) << fixed << xx << " " << sqrt(xx * xx - 2 * xx + 1) / (log(4 - 2 * xx)) << endl;
	}
	
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	long double a,b,h;
	cin >> a >> b >> h;
	cout << "x              " << "y" << endl;
	for (double i = a; i <= b; i += h) {
		func(i);
	}
	return 0;
	}
