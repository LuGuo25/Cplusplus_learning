#include <iostream>
using namespace std;

int main() {
	//���� B: ����ת��
	int A[3][3] = {0};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> A[i][j];
		}
	}
	//ֱ�����
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
	//�Ե����Խ������¶ԳƵ�Ԫ��
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