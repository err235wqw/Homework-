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
	int counter = 0;
	bool fl = 1;
	cin >> s >> a;
	while (fl) {
		fl = 0;
		for (int i = 0; i < s.length() - a.length()+1; i++) {
			if (s.length() < a.length()) {
				break;
			}
			if ( s.substr(i, a.length()) == a) {
				s.erase(i, a.length());
				counter++;
				fl = 1;
				break;
			}
		}
	}
	cout << counter;
	return 0;
}
