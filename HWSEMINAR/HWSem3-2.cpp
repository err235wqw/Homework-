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
const long double g = 6.67430 * 1e-11;
double aa(double m1, double m2, double r) {
	return g * (m1*m2) / r;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	long double m1,m2,m3,r1,r2,r3;
	cin >> m1 >> m2 >> m3 >> r1 >> r2 >> r3;
	cout << max(aa(m1,m2,r1),aa(m2,m3,r2),aa(m1,m3,r3));

}
