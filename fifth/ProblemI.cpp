#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//问题 I: 数字反转
	int N;
	cin >> N;
	int temp = N;
	int index = 0;
	int a[20];
	int sum = 0;
	int type = 0;//type作状态机，置0为正数，置1为负数
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