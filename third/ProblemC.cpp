#include <iostream>
using namespace std;

int main() {
	//���� C: A-B����
	int a, b;
	while (1) {
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		cout << a - b << endl;
	}

	return 0;
}