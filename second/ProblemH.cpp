#include <iostream>
using namespace std;

int main() {
	//问题 H: 是否为特殊三位数
	int num;
	cin >> num;
	int a, b, c;
	a = num / 100;
	b = num / 10 % 10;
	c = num % 10;
	if (a + b + c == 20) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}