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
	int x;
	for (int i = 1; ; i++) {
		cin >> x;
		if (x < 0) {
			cout << i;
			return 0;
		}
	}
	return 0;
}
