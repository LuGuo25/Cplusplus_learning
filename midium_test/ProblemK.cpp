#include <bits/stdc++.h>
using namespace std;

int main() {
	//���� K: ���ص�
	int N, M;
	cin >> N >> M;
	int type[N];	//״̬����1Ϊ����0Ϊ��
	for (int i = 0; i < N; i++) {
		type[i] = 1;
	}
//	int set;

//		if (i % 2 == 1) {
//			set = 0;
//		} else {
//			set = 1;
//		}
	int x = 1, y = 1;
	for (x = 1; x <= M; x++) {
		for (y = 1; y <= N; y++) {
			if (y % x == 0) {
//				if (type[y - 1] == 0) {//��ת״̬
//					type[y - 1] = 1;
//				} else {
//					type[y - 1] = 0;
//				}
				type[y - 1] = !type[y - 1];
			}
		}
	}
//	for (int i = 0; i < N; i++) {
//		cout << type[i] << endl;
//	}

	int count = 0;
	for (int i = 0; i < N; i++) {
		if (type[i] == 0) {
			if (count == 0) {
				cout << i + 1;
				count++;
			} else {
				cout << "," << i + 1;
			}
		}
	}
	cout << endl;

	return 0;
}