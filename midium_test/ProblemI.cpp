#include <bits/stdc++.h>
using namespace std;

bool is_repeat(int n) {	//�ж��Ƿ�Ϊ�ظ�����������򷵻�true�����򷵻�false
	int temp = n;
	int number[10];
	int index = 0;
	while (temp != 0) {
		number[index++] = temp % 10;
		temp /= 10;
	}
	for (int i = 0; i < index - 1; i++) {
		if (number[i] == number[i + 1]) {
			return true;
		}
	}
	return false;
}

int main() {
	//���� I: ���ظ���
	int A;
	int num[100];
	cin >> A;
	for (int i = A + 1;; i++) {
		if (is_repeat(i) == false) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}