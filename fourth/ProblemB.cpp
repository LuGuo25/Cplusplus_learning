#include <iostream>
using namespace std;

int main() {
	//���� B: n!���
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int multiply = 1;
		for (int j = 1; j <= i; j++) {
			multiply *= j;
		}
		sum += multiply;
	}
	cout << sum << endl;
	return 0;
}