#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <set>

using namespace std;
double aa(double s) {
	return sqrt(s / sqrt(0.1875));
}

double bb(double a) {
	return sqrt(a*a+a*a);
}
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	long double s;
	cin >> s;
	cout << bb(aa(s))+2*aa(s);

}
