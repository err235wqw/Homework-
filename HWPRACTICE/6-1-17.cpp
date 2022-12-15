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
template <typename X> void PrintArr( X ** a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}
template <typename X> void PrintArr(X a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}
template <typename X> void SinArr(X  a,int n,int m) {
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	}
}
template <typename X> void SinArr(X  **a, int n, int m) {
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
		for (int j = 0; j < m; j++)
			cin >> a[i][j];

	}
}
template <typename X> int FuncArr(X a, int n, int m) {
	double mn = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			mn *= a[i][j];
	}
	return (int)mn;
}
template <typename X> int FuncArrD(X **a, int n, int m) {
	double mn = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			mn *= a[i][j];


	}
	return (int)mn;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int n, m,a1,b1;
	cin >> n >> m;
	int** a = new int *[n];
	//int a[50][50];
	SinArr(a, n, m);
	//cout <<((FuncArr(a, n, m) / 100 < 10 && FuncArr(a, n, m) / 100 > 0) ? "Yes":"No");
	cout << ((FuncArrD(a, n, m) / 100 < 10 && FuncArrD(a, n, m) / 100 > 0) ? "Yes" : "No");
	return 0;
}
