#include <iostream>
using namespace std;

int main() {
	//���� J: �����ַ���������
	int n;
	cin >> n;
	char ch[2] = {'S', 'T'};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * (n + 1 - i) - 1; k++) {
			if (k % 2 == 1) {
				cout << ch[0];
			} else {
				cout << ch[1];
			}
		}
		cout << endl;
	}

	return 0;
}