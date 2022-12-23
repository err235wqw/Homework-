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
	ifstream in("input.txt");
	ofstream out("output.txt");
	while (in.peek() != EOF) {
		getline(in, s, '\n');
		cout << s[0] << '\n';
	}
	return 0;
}
