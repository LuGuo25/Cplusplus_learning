#include <iostream>
using namespace std;

int main() {
	//���� F: �ֶκ������
	int x;
	cin >> x;
	if (x >= 10) {
		cout << 3 * x - 11 << endl;
	} else if (x >= 1) {
		cout << 2 * x - 1 << endl;
	} else {
		cout << x << endl;
	}

	return 0;
}