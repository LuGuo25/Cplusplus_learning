#include <iostream>
using namespace std;

int main() {
	//问题 C: 矩阵按列输出
	int n, m;
	cin >> n >> m;
	int A[n][m] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 & j == 0) {
				cout << A[j][i];
			} else {
				cout << " " << A[j][i];
			}
		}
	}
	cout << endl;

	return 0;
}