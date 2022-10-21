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
	double x,y;
	cin >> x >> y;
	if ((x >= -1 && x <= 1) && (y <= 3 && y >= -3) && sqrt(x * x + y * y) >= 2) {
		if (x == -1 || x == 1 || sqrt(x * x + y * y) == 2 || y == 3 || y == -3) {
			cout << "На границе";
			return 0;
		}
		cout << "Внутри поля";
		return 0;
	}
	cout << "Вне поля";
	return 0;
}
