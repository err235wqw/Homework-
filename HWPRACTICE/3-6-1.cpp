#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <cctype>
//#include 
using namespace std;

double func(double x) {
	if (x >= 0) {
		if (x >= 0.9) {
			return 1 / ((0.1 + x) * (0.1 + x));
		}
		return 0.2 * x + 0.1;
	}
	return x * x + 0.2;
}

int main() {
	double a, b, h;
	cin >> a >> b >> h;
	for (double i = min(a, b); i <= max(a, b); i += h) {
		cout << i << ' ' <<  func(i) << endl;
	}





}
