#include <bits/stdc++.h>
using namespace std;

int main() {
	//���� E: A3: Reverse digits
	int num;
	cin >> num;
	if (num < 10000 || num > 99999) {
		cout << "not permitted" << endl;
	} else {
		int temp = num;
		int ch[5];
		int index = 0;
		//ת�ַ���
		while (temp != 0) {
			ch[index++] = temp % 10;
			temp /= 10;
		}
		//����ַ���
		for (int i = 0; i < index; i++) {
			cout << ch[i];
		}
		cout << endl;
	}

	return 0;
}