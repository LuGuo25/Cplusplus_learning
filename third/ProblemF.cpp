#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	//���� F: ����ĳ��ʽ
	int n;
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += pow(-1, i - 1) / (2 * i - 1);
	}
	cout << fixed << setprecision(3) << sum << endl;

	return 0;
}