#include <iostream>
using namespace std;

int main() {
	//���� G: �������ַ�������
	char ch;
	int n;
	cin >> ch >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << ch;
		}
		cout << " ";
		for (int m = 1; m <= i; m++) {
			cout << ch;
		}
		cout << endl;
	}

	return 0;
}