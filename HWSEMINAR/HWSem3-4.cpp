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
void gg(double& a, double b) {
	a += b;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	double a,b;
	cin >> a >> b;
	gg(a, b);
	cout << a;

}
