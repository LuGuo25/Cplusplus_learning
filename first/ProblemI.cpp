#include <iostream>
using namespace std;

int main() {
	//问题 I: 空格隔开
	int num;
	cin >> num;
	int temp = num;
	int order[5];
	int index = 0;
	while (temp != 0) {
		order[index++] = temp % 10;
		temp /= 10;
	}
	for (int i = 3; i >= 0; i--) {
		cout << order[i] << " ";
	}
	cout << endl;

	return 0;
}