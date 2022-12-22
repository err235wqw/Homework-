#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <vector>
#include <cctype>
#include <string>
#include <queue>
#include <deque>
#include <ctime>
#include <Windows.h>
#include <fstream>
#include <array>
using namespace std;
int f(int a,int b) {
	int c = 0;
	while (b != 0) {
		c = b;
		b = a % c;
		a = c;
	}
	return a;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (a * d + b * c) / f(a * d + b * c, b * d) << '/' << (d * b) / f(a * d + b * c, d * b);
	return 0;
}
