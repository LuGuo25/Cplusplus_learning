#include <iostream>
using namespace std;

int main() {
	//问题 B: 矩阵转置
	int A[3][3] = {0};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> A[i][j];
		}
	}
	//直接输出
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (j == 0) {
//				cout << A[j][i];
//			} else {
//				cout << " " << A[j][i];
//			}
//		}
//		cout << endl;
//	}
	//对调主对角线上下对称的元素
	int temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < i; j++) {
			temp = A[i][j];
			A[i][j] = A[j][i];
			A[j][i] = temp;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				cout << A[i][j];
			} else {
				cout << " " << A[i][j];
			}
		}
		cout << endl;
	}

	return 0;
}