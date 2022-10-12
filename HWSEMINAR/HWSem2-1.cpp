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
	vector <string> a = { "jhjh","Влево","Вверх","Вправо","Вниз" };
	cin >> x;
	cout << a[x];
	return 0;
}
