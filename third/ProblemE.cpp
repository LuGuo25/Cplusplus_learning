#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	//问题 E: 求Pi的值
	int n;
	double pi = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		pi += 4 * pow(-1, i - 1) / (2 * i - 1);
	}
	cout << fixed << setprecision(10) << pi;

	return 0;
}