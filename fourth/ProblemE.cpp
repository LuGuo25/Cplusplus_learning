#include <iostream>
using namespace std;

int main() {
	//���� F: ���ַ�������
	char ch;
	cin >> ch;
	for (int i = 1; i <= 7; i++) {
		for (int j = 1; j <= 7 - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << ch;
		}
		cout << endl;
	}

	return 0;
}