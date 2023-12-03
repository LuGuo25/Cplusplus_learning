#include <iostream>
using namespace std;

int main() {
	//问题 K: 数字统计
	int L, R;
	cin >> L >> R;
	int count = 0;

	for (int i = L; i <= R; i++) {
		int temp = i;
		while (temp != 0) {
			if (temp % 10 == 2) {
				count++;
			}
			temp /= 10;
		}
	}
	cout << count << endl;
	return 0;
}