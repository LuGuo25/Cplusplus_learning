#include <iostream>
using namespace std;

int main() {
	//���� G: �������е����ֵ
	int a, b, c;
	int max;
	cin >> a >> b >> c;
	max = a;
	if (b > a) {
		max = b;
		if (c > b) {
			max = c;
		}
	} else {
		if (c > a) {
			max = c;
		}
	}
	cout << max << endl;

	return 0;
}