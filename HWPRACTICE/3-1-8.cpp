#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	long x, y;
	cin >> x >> y;
	if (y <= 0 && (abs(x) <= abs(y))) {
		if (abs(x) == abs(y) || (sqrt(x * x + y * y) == 25)) {
			cout << "на границе";
			return 0;
		}
		cout << "Да";
		return 0;
	}
	cout << "Нет";

	return 0;
}
