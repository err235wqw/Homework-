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
	bool win = 1;
	char a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			a[i][j] = ' ';
	}
	int n, x, y;
	while (win) {
		cout << "ВАШ ХОД" << '\n' << '\n' << '\n';
		for (int i = 0; i < 3; i++) {
			cout << '|';
			for (int j = 0; j < 3; j++)
				cout << a[i][j] << '|';
			cout << '\n' << "_______" << '\n';
		}
		cout << '\n' << '\n' << '\n';
		cout << "ВЫБЕРИТЕ ЯЧЕЙКУ, НУМЕРАЦИЯ С ЛЕВОГО ВЕРХНЕГО УГЛА, ОТ 1" << '\n';
		cin >> n;
		if (n == 1 || n == 2 || n == 3) {
			x = 0;
		}
		if (n == 4 || n == 5 || n == 6) {
			x = 1;
		}
		if (n == 7 || n == 8 || n == 9) {
			x = 2;
		}
		if (n == 1 || n == 4 || n == 7) {
			y = 0;
		}
		if (n == 2 || n == 5 || n == 8) {
			y = 1;
		}
		if (n == 3 || n == 6 || n == 9) {
			y = 2;
		}
		a[x][y] = 'X';
		if (a[1][1] == ' ') {
			a[1][1] = 'O';
		}
		else if (a[0][0] == ' ') {
			a[0][0] = 'O';
		}
		else if (a[2][0] == ' ') {
			a[2][0] = 'O';
		}
		else if (a[0][2] == ' ') {
			a[0][2] = 'O';

		}
		else if (a[2][2] == ' ') {
			a[2][2] = 'O';

		}
		else if (a[0][1] == ' ') {
			a[0][1] = 'O';

		}
		else if (a[2][1] == ' ') {
			a[2][1] = 'O';

		}
		else if (a[1][0] == ' ') {
			a[1][0] = 'O';

		}
		else if (a[1][2] == ' ') {
			a[1][2] = 'O';

		}
		if (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X' || a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X' || a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X' || a[1][0] == 'X' && a[1][1] == 'X' && a[1][2] == 'X' || a[2][0] == 'X' && a[2][1] == 'X' && a[2][2] == 'X' || a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X' || a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X') {
			cout << '\n' << "ВЫ ПОБЕДИЛИ!!!!!";
			win = 0;
			break;
		}
		if (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O' || a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O' || a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O' || a[1][0] == 'O' && a[1][1] == 'O' && a[1][2] == 'O' || a[2][0] == 'O' && a[2][1] == 'O' && a[2][2] == 'O' || a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O' || a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O') {
			cout << '\n' << "ВЫ СМОГЛИ ПРОИГРАТЬ!!!!!";
			win = 0;
			break;
		}
		bool fl = 0;
		for (int i1 = 0; i1 < 3; i1++) {
			for (int i2 = 0; i2 < 3; i2++)
				if (a[i1][i2] == ' ') {
					fl = 1;
				}
		}
		if (!fl) {
			cout << "НИЧЬЯ!!!";
			win = 0;
			break;
		}
	}
	return 0;
}
