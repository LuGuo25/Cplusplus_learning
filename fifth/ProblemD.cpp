#include <iostream>
using namespace std;

bool is_Symmetric(int n) {
	int a[6] = {0};
	int temp = n;
	int index = 0;
	while (temp != 0) {
		a[index++] = temp % 10;
		temp /= 10;
	}
	for (int i = 0; i < index; i++) {
		if (a[i] != a[index - 1 - i]) {
			return false;
		}
	}
	return true;
}

bool is_Prime(int n) {
//	int type = 1;//typeΪ״̬������1��ʾΪ��������0��ʾ��Ϊ����
	if (n == 1) {
		return false;
	} else if (n == 2) {
		return true;
	} else {
		for (int i = 2; i <= n - 1; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}

int main() {
	//���� D: ��λ���ڵĶԳ�����
	int num;
	while (scanf("%d", &num) != EOF) {
		if (is_Symmetric(num) == true && is_Prime(num) == true) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}