#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//问题 D: 去噪平均数
	int num;
	int count = 0;
	double sum = 0;
	while (1) {
		cin >> num;
		if (num == -1) {
			break;
		}
		if (num > 10000) {
			continue;
		}
		sum += num;
		count++;
	}
	cout << fixed << setprecision(3) << sum / count << endl;

	return 0;
}