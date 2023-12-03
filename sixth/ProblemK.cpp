#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ K: ×ßÂ¥Ìİ(N9)
	int m;
	cin >> m;
	int num[m + 1];
	for (int i = 0; i < m; i++) {
		cin >> num[i];
		int a0 = 1;
		int a1 = 2;
		int sum = 0;
		if (num[i] == 1) {
			cout << 1 << endl;
		} else if (num[i] == 2) {
			cout << 2 << endl;
		} else {
			for (int j = 3; j <= num[i]; j++) {
				sum = a0 + a1;
				a0 = a1;
				a1 = sum;
			}
			cout << sum << endl;
		}
	}

	return 0;
}