#include <iostream>
using namespace std;

int main() {
	//问题 I: 平衡四位数
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