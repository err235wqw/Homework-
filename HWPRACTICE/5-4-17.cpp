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
const long double eps = 1e-12;
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int num = 1;
	long double a, b, h, e, f, x1;
	cin >> a >> b >> h >> e;
	for (long double x = a; x < b + eps;x+=h) {
		x1 = (x - 1) / (x + 1);
		f = 2 * x1;
		int counter = 1;
		while (x1 > e + eps) {
			x1 *= counter * ((x - 1) * (x - 1) / ((counter + 2) * (x + 1) * (x + 1)));
			counter += 2;
			f += 2 * x1;

		}
		cout << setprecision(16) << fixed << num << ' ' << x << ' ' << f << int((counter - 1) / 2 + 1) << '\n';
	}
	return 0;
}
