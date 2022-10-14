#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#include <vector>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
	int k;
	k = 0;
	for (int i = 0; i < 10; i++) {
		k++;
		if (k % 2 == 0) {
			for (int i1 = 0; i1 < k / 2; i1++) {
				cout << "0   ";
			}
		}
		else {
			for (int i1 = 0; i1 < (k+1) / 2; i1++) {
				cout <<(k+1)/2 << "   ";
			}
		}
		cout << endl;
		
	}
	return 0;
	}
