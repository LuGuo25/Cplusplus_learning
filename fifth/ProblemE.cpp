#include <iostream>
using namespace std;

int main() {
	//问题 E: 完数
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int sum = 0;
		if (i == 1) {
			continue;
		}
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (i == sum) {
			cout << i << " its factors are ";
			for (int j = 1; j < i; j++) {
				if (i % j == 0) {
					cout << j << " ";
				}
			}
			cout << endl;
		}

	}

	return 0;
}