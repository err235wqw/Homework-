#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#include <vector>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
	long long a,b,x,y,z;
	cin >> a >> b >> x >> y >> z;
	if (((x <= a && y <= b) || (y <= a && x <= b)) || ((x <= a && z <= b) || (z <= a && x <= b)) || ((z <= a && y <= b) && (y <= a && z <= b))) {
		cout << "Yes";
		return 0;
	}
	cout << "No";
	return 0;
	}