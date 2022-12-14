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
#include <ctime>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i > n - 4) {
			cout << -1 << ' ';
		}
		else
			cout << a[i] << ' ';
	}
	return 0;
}
