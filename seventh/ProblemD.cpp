#include <iostream>
using namespace std;

int main() {
	//问题 D: 矩阵加法
	int n, m;
	cin >> n >> m;
	int A[n][m] = {0};
	int B[n][m] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j == 0) {
				cout << A[i][j] + B[i][j];
			} else {
				cout << " " << A[i][j] + B[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}