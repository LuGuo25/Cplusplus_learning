#include <iostream>
using namespace std;

int main() {
	//���� J: ���Լ������С������
	int m, n;
	cin >> m >> n;
	int max = 0, min = 0;
	//շת�����
	int temp, tempm = m, tempn = n;
	if (tempm < tempn) {
		temp = tempm;
		tempm = tempn;
		tempn = temp;
	}
	temp = 1;
	while (temp != 0) {
		temp = tempm % tempn;
		tempm = tempn;
		tempn = temp;
	}
	max = tempm;
	int i;
	if (m > n) {
		i = m;
	} else {
		i = n;
	}
	while (i % m != 0 || i % n != 0) {
		i++;
	}
	min = i;
	cout << max << " " << min << endl;
	return 0;
}