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
	int x,r,t;
	cin >> x;
	for (int i = min(x % 10 + x / 10, (x / 10) * (x % 10)); i <= max(x % 10 + x / 10, (x / 10) * (x % 10)); i++) {
		cout << i << ' ';
	}
	return 0;
}
