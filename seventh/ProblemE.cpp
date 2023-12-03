#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//问题 E: 矩阵运算
	int n, m;
	cin >> n >> m;
//	cin >> n >> m;
//	scanf("%d %d",&n,&m);
	//可变长数组vector
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
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == n - 1 && j == m - 1) {
				cout << fixed << setw(5) << a *A[i][j] + b *B[i][j] << " ";
			} else {
				cout  << fixed << setw(5) << a *A[i][j] + b *B[i][j];
//				printf("%5d", a * A[i][j] + b * B[i][j])
			}
		}
		cout << endl;
	}
	double test = 3.1415926;
//	cout << fixed << setprecision(2) << test << endl;

	return 0;
}