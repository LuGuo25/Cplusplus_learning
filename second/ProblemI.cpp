#include <iostream>
using namespace std;

int main() {
	//���� I: ƽ����λ��
	int num;
	cin >> num;
	int sum = 0;
	if (num % 100 == num / 100) {
		cout << num << endl;
	} else {
		sum += num % 10;
		sum += num / 10 % 10;
		sum += num / 100 % 10;
		sum += num / 1000;
		cout << sum << endl;
	}

	return 0;
}