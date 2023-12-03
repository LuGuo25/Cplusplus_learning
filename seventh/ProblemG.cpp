#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	//问题 G: 矩阵排序，按行输出
	int n, m;
	cin >> n >> m;
	int A[n][m] = {0};
	int order[n * m + 5] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	int index = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			order[index++] = A[i][j];
		}
	}
	sort(order, order + index);
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (j == 0) {
				cout << fixed << setw(2) << order[count++];
			} else {
				cout << " " << fixed << setw(2) << order[count++];
			}
		}
		cout << endl;
	}

	return 0;
}