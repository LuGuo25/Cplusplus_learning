#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//���� J: ����ʽҪ�����ʵ��
	double num;
	cin >> num;
	for (int i = 1; i <= 3; i++) {
		for (int j = 1; j <= i; j++) {
			if (j != 1) {
				cout << " " << fixed << setw(6) << setprecision(2) << num;
			} else {
				cout << fixed << setw(6) << setprecision(2) << num;
			}
		}
		cout << endl;
	}

	return 0;
}