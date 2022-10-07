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
	int x;
	cin >> x;
	x = x % 12;
	switch (x) {
	case 0:
		cout << "Обезьяна";
		break;
	case 1:
		cout << "Петух";
		break;
	case 2:
		cout << "Собака";
		break;
	case 3:
		cout << "Свинья";
		break;
	case 4:
		cout << "Крыса";
		break;
	case 5:
		cout << "Бык";
		break;
	case 6:
		cout << "Тигр";
		break;
	case 7:
		cout << "Заяц";
		break;
	case 8:
		cout << "Дракон";
		break;
	case 9:
		cout << "Змея";
		break;
	case 10:
		cout << "Лошадь";
		break;
	case 11:
		cout << "Овца";
		break;
	default:
		cout << "Введен некорректный год";


	}

	
	return 0;
	}
