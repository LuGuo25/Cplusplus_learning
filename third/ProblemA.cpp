#include <iostream>
using namespace std;

int main() {
	//���� A: ƽ����
	int num;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> num;
		sum += num * num;
	}
	cout << sum << endl;

	return 0;
}