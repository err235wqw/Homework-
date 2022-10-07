#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#include <vector>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	vector <int> a1, b1, c1;
	int a,b,i,i1;
	i = 0;
	cin >> a >> b;
	for (int i = a; i < b+1; i++) {
		if (i < 0 && i % 2 == 0) {
			a1.push_back(i);
		}
	}
	i = a;
	while (i < b+1) {
		if (i < 0 && i % 2 == 0) {
			b1.push_back(i);
		}
		i++;
	}
	i = a;
	do {
		if (i < 0 && i % 2 == 0) {
			c1.push_back(i);
		}
		i++;
	} while (i <= b);
	for (i = 0; i < a1.size(); i++) {
		cout << a1[i] << " ";
	}
	cout << endl;
	for (i = 0; i < a1.size(); i++) {
		cout << b1[i] << " ";
	}
	cout << endl;
	for (i = 0; i < a1.size(); i++) {
		cout << c1[i] << " ";
	}
	cout << endl;
	return 0;
	}
