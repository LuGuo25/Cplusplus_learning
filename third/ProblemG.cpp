#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//���� G: C���Գ�����ƽ̳̣������棩�κ�ϰ��6.3
	int n;
	cin >> n;
	int sum;
	for (int i = 1; i <= n; i++) {
		int num = 0;
		for (int j = 1; j <= i; j++) {
			num += 2 * pow(10, j - 1);
		}
		sum += num;
	}
	cout << sum << endl;
	return 0;
}