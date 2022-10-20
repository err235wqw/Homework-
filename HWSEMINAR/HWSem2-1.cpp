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
	vector <pair <string, string> > a = { {"jhjh","   "},{"Влево","Горизонтально"},{"Вверх","Вертикально"},{"Вправо","Горизонтально"},{"Вниз","Вертикально"} };
	cin >> x;
	cout << a[x].first << endl;
	cout << a[x].second;
	return 0;
}
