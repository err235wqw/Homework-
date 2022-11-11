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


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	double e,j, fact;
	j = 0;
	fact = 1;
	cin >> e;
	while (true) {
		fact *= (-1.) / (2 * 2);
		j += fact;
		if (abs(fact) < e)
			break;
	}
	cout << j;
	return 0;

}
