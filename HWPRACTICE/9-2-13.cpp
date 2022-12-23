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

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	string s;
	string* a = new string[50];
	int cnt = 0;
	ifstream in("input.txt");
	ofstream out("output.txt");
	while (in>>s) {
		if (s[0] == '-') {
			out << s << ' ';
		}
		else {
			a[cnt] = s;
			cnt++;
		}
	}
	out << '\n';
	for (int i = 0; i < cnt; i++) {
		out << a[i] << ' ';
	}
	in.close();
	out.close();
	return 0;
}
