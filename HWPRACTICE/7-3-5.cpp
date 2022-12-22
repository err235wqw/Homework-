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
	string s, a;
	int counter = 1;
	bool fl = 1;
	getline(cin, s, '.');
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			counter++;
		}
		if (i>0&&s[i] == '-' && s[i - 1] == ' ')
			counter--;
	}
	cout << counter;
	return 0;
}
