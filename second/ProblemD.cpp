#include <iostream>
using namespace std;

int main() {
	//���� D: ��һ�ſβ������ѧ��
	int Chinese, math;
	cin >> Chinese >> math;
	if (Chinese < 60 && math >= 60 || Chinese >= 60 && math < 60) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}

	return 0;
}