#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//���� L: �����������
	int N;
	cin >> N;
	int a[100] = {2};
	int b[100] = {1};
	double sum = 0;
	for (int i = 1; i < N; i++) {	//ѭ���������ɷ��ӷ�ĸ
		a[i] = a[i - 1] + b[i - 1];
		b[i] = a[i - 1];
	}
	for (int j = 0; j < N; j++) {
		sum += 1.0 * a[j] / b[j];	//intתdouble
	}
	cout << fixed << setprecision(2) << sum << endl;

	return 0;
}