#include <iostream>
using namespace std;

int main() {
	//���� H: ɸ��������
	int N;
	cin >> N;
	int num[N + 1] ;
	for (int i = 0; i < N; i++) {
		num[i] = i + 1;		//״̬�������num[i]Ϊ0����������
	}
	num[0] = 0;
	for (int i = 2; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {
			if (j % i == 0) {
				num[j - 1] = 0;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (num[i] != 0) {
			cout << num[i] << endl;
		}
	}

	return 0;
}