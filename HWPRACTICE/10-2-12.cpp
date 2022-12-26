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

using namespace std;
ifstream in("input.txt");
ofstream out("output.txt");

struct vedom {
	string vid;
	double price;
	int sort, cnt;


};
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int n;
	double x;
	cin >> x;
	x = x / 100 + 1;
	in >> n;
	vedom* a = new vedom[n];
	for (int i = 0; i < n; i++) {
		in >> a[i].vid >> a[i].price >> a[i].sort >> a[i].cnt;
		a[i].price *= x;
		out << a[i].vid << ' ' << a[i].price << ' ' << a[i].sort << ' ' << a[i].cnt<< '\n';
	}
	return 0;
}
