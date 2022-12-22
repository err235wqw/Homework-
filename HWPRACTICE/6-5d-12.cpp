

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
#include <fstream>
#include <array>
const long double eps = 1e-12;
using namespace std;
template <typename X> void PrintArr(X** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}
template <typename X> void PrintArr(X* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
}
template <typename X> void PrintArr(X a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}
template <typename X> void PrintArr(X a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
}
template <typename X> void SinArr(X  a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	}
}
template <typename X> void SinArr(X  a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
template <typename X> void SinArr(X** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	}
}
template <typename X> void SinArr(X* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int n, m, a1, b1;
	cin >> n;
	m = n;
	//int** a = new int* [n];
	//int* b = new int[n];
	int a[50];
	int b[50];
	SinArr(a, n);
	int cnt = 0;
	set <int> s;
	for (int i = 0; i < n; i++) {
		while (s.count(a[i])>0&&n-cnt>i) {
			cnt++;
			for (int i1 = i; i1 < n; i1++) {
				a[i1] = a[i1+1];
			}
		}
		s.insert(a[i]);
	}
	PrintArr(a, n - cnt);
	return 0;
}
