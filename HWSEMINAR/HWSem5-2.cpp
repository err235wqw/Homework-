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
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i < n; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	for (int i = n - 1; i > -1; i--) {
		cout << a[i] << ' ';
	}
	return 0;
}
