#include <iostream>
using namespace std;

int main() {
	//问题 J: 判决素数个数
	int X, Y;
	cin >> X >> Y;
	int count = 0;
	int i, j;
	for (i = X; i <= Y; i++) {
		if (i <= 1) {
			continue;
		} else if (i == 2) {
			count++;
			continue;
		}
		for (j = 2; j <= i - 1; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j == i) {
			count++;
		}
	}
	cout << count << endl;

	return 0;
}