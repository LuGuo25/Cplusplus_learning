#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//���� B: ����������
	int n;
	cin >> n;
	double result;
	if (n <= 100) {
		result = 0.1;
	} else {
		result = n * 0.001;
	}
	cout << fixed << setprecision(2) << result << endl;

	return 0;
}