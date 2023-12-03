#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	//问题 F: 计算某公式
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += pow(-1, i - 1) / (2 * i - 1);
	}
	cout << fixed << setprecision(3) << sum << endl;

	return 0;
}