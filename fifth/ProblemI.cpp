#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//���� I: ���ַ�ת
	int N;
	cin >> N;
	int temp = N;
	int index = 0;
	int a[20];
	int sum = 0;
	int type = 0;//type��״̬������0Ϊ��������1Ϊ����
	if (N < 0) {
		type = 1;
	}
	while (temp != 0) {
		a[index++] = temp % 10;
		temp /= 10;
	}
	int count = 0;
	for (int i = index - 1; i >= 0; i--) {
		if (a[i] < 0) {
			a[i] = -a[i];
		}
		sum += a[i] * pow(10, count++);
	}
	if (type)
		sum = -sum;
	cout << sum << endl;

	return 0;
}