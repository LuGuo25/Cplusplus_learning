#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ L: ¹þÄ·À×ÌØ
	int n;
	cin >> n;
	int num[10];
	int count = 0;
	int temp = n;
	while (temp != 0) {
		num[count++] = temp % 10;
		temp /= 10;
	}
	cout << count << endl;
	for (int i = count - 1; i >= 0; i--) {
		if (i == count - 1) {
			cout << num[i];
		} else {
			cout << " " << num[i];
		}
	}
	cout << endl;
	for (int i = 0; i < count; i++) {
		cout << num[i];
	}
	cout << endl;

	return 0;
}