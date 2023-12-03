#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//问题 G: C语言程序设计教程（第三版）课后习题6.3
	int n;
	cin >> n;
	int sum;
	for (int i = 1; i <= n; i++) {
		int num = 0;
		for (int j = 1; j <= i; j++) {
			num += 2 * pow(10, j - 1);
		}
		sum += num;
	}
	cout << sum << endl;
	return 0;
}