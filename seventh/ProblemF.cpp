#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ E: ¾ØÕóÔËËã
	int n, m;
	cin >> n >> m;
	int A[n][m] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += A[j][i];
		}
		if (i == 0) {
			cout << sum;
		} else {
			cout << " " << sum;
		}
	}
	cout << endl;

	return 0;
}