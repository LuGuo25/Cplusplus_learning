#include <iostream>
using namespace std;

int main() {
	//���� A: ����Խ���Ԫ��֮��
	int A[3][3] = {0};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> A[i][j];
		}
	}
	int sum1 = 0, sum2 = 0, count = 2;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				sum1 += A[i][j];
			}
			if (i == (2 - count)) {
				sum2 += A[i][count];
				count--;
			}
		}
	}
	cout << sum1 << " " << sum2 << endl;
	return 0;
}