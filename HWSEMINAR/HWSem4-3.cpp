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
using namespace std;
int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);;
	unsigned int start_time = clock();
	int k;
	long double b,s=0,x,e,fact = 1;
	cin >> x >> k;
	b = x;
	for (int i = 2; i <= k+1; i++) {
		cout << fixed << setprecision(15) << s << ' ' << i-1 << '\n';
		b *= (i * (i - 1) * x * x)  / ((i + i - 1) * (i + i))/max(1,(i-1)*(i-2));
		s += b;
		(i == 1) ? b = x : b = b ;
	}
	unsigned int end_time = clock();
	cout << end_time - start_time;
	return 0;
}
