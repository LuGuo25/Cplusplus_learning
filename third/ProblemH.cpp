#include <iostream>
using namespace std;

int main() {
	//���� H: A+B��1��
	int t;
	cin >> t;
	int a, b;
	for (int i = 0; i < t; i++) {
		int sum = 0;
		cin >> a >> b;
		cout << dec << a + b << endl;	//dec����ȷ��ʹ��ʮ�������
		sum = a / 10 * 16 + a % 10 + b / 10 * 16 + b % 10;
		cout << hex << uppercase << sum << endl;//hex��ʾʹ��16���������uppercase��ĸ��д���
	}

	return 0;
}