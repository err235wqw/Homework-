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
	return sqrt(x * x - 2 * x + 1) / log(4 - 2*x);
}

int main() {
	double a, b, h;
	cin >> a >> b >> h;
	for (double i = min(a, b); i <= max(a, b); i += h) {
		if (4 - 2*i > 0 && log(4 - 2*i) != 0) {
			cout << i << ' ' << func(i) << endl;
		}
		else {
			cout << i << ' ' << "Warning" << endl;
		}
	}





}
