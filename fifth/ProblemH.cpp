#include <iostream>
using namespace std;

int main() {
	//问题 H: 平面分割
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int n, p;
		cin >> n >> p;
		int sum = 0;
		sum = 2 * p;
		for (int j = p + 1; j <= n; j++) {
			sum += j;
		}
		cout << sum << endl;
	}

	return 0;
}