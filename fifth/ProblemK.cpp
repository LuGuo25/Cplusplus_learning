#include <iostream>
using namespace std;

int main() {
	//���� K: ����ͳ��
	int L, R;
	cin >> L >> R;
	int count = 0;

	for (int i = L; i <= R; i++) {
		int temp = i;
		while (temp != 0) {
			if (temp % 10 == 2) {
				count++;
			}
			temp /= 10;
		}
	}
	cout << count << endl;
	return 0;
}