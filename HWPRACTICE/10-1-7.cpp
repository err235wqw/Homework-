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
struct pos {
	int x, y, z;
};
int lee(pos a, pos b) {
	return (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z);
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	int n,q=0,x,min=1e9,min1=0,min2=0;
	in >> n;
	pos* a = new pos[n];
	while (in>>x) {
		a[q].x = x;
		in >> x;
		a[q].y = x;
		in >> x;
		a[q].z = x;
		q++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j && lee(a[i], a[j]) < min) {
				min = lee(a[i], a[j]);
				min1 = i;
				min2 = j;
			}
		}
	}
	out << min1+1 << ' ' << min2+1;
	in.close();
	out.close();
	return 0;
}
