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
	int n,k = 0;
	double b1, b2;
	b1 = 1;
	b2 = 2;
	cin >> n;
	if (n >= 1)
		cout <<"1 "<< b1 << '\n';
	if (n >= 2)
		cout <<"2 "<< b2 << '\n';
	for (int i = 0; i < n-2; i++) {
		cout <<i+3<<' '<< (double)b2 / (b1 + 1) << '\n';
		b1 = (double)b2 / (b1 + 1);
		b1 = -b1 - b2;
		b2 = -b1 - b2;
		b1 = -b1 - b2;
	}
	return 0;
}
