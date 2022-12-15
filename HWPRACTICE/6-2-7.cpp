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
template <typename X> void PrintArr( X * a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
}
template <typename X> void PrintArr(X a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
}
template <typename X> void SinArr(X  a,int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
template <typename X> void SinArr(X  *a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}
template <typename X> void FuncArr(X a, int n) {
	double mn = 1e12;
	int nmn = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < mn) {
			nmn = i;
			mn = a[i];
		}
	}
	cout << nmn+1;
}
template <typename X> void FuncArr(X *a, int n) {
	double mn = 1e12;
	int nmn = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < mn) {
			nmn = i;
			mn = a[i];
		}
	}
	cout << nmn+1;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int n, m,a1,b1;
	cin >> n;
	int* a = new int[n];
	//int a[50];
	SinArr(a, n);
	FuncArr(a, n);
	return 0;
}
