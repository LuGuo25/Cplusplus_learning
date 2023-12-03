#include <iostream>
using namespace std;

int main() {
	//问题 H: A+B（1）
	int t;
	cin >> t;
	int a, b;
	for (int i = 0; i < t; i++) {
		int sum = 0;
		cin >> a >> b;
		cout << dec << a + b << endl;	//dec用于确保使用十进制输出
		sum = a / 10 * 16 + a % 10 + b / 10 * 16 + b % 10;
		cout << hex << uppercase << sum << endl;//hex表示使用16进制输出，uppercase字母大写输出
	}

	return 0;
}