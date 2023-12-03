#include <iostream>
using namespace std;

int main() {
	//问题 G: 三个数中的最大值
	int a, b, c;
	int max;
	cin >> a >> b >> c;
	max = a;
	if (b > a) {
		max = b;
		if (c > b) {
			max = c;
		}
	} else {
		if (c > a) {
			max = c;
		}
	}
	cout << max << endl;

	return 0;
}