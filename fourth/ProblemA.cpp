#include <iostream>
using namespace std;

int main() {
	//���� A: �ж�ֱ��������
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}