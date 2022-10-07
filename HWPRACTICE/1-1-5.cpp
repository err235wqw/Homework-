#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double x;
	cin >> x;
	cout << setprecision(5) << fixed << (0.125 * x + abs(x)) / (1.5 * pow(x, 2) + cos(x));


	return 0;
}
