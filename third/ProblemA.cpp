#include <iostream>
using namespace std;

int main() {
	//问题 A: 平方和
	int num;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		sum += num * num;
	}
	cout << sum << endl;

	return 0;
}