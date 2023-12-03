#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	//问题 L: 等比数列
	int n;
	double q;
	cin >> n >> q;
	double sum;
	for (int i = 0; i <= n; i++) {
		sum += pow(q, i);
	}
	cout << fixed << setprecision(3) << sum << endl;
	return 0;
}