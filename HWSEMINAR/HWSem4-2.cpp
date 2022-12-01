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

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int k;

	double b,s=0,x;
	cin >> k >> x;
	b = x;
	for (int i = 1; i < k; i++) {
		b *= i * x * x;
		s += b;
	}
	cout << s;
	return 0;
}
