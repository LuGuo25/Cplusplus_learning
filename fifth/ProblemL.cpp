#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//问题 L: 分数序列求和
	int N;
	cin >> N;
	int a[100] = {2};
	int b[100] = {1};
	double sum = 0;
	for (int i = 1; i < N; i++) {	//循环依次生成分子分母
		a[i] = a[i - 1] + b[i - 1];
		b[i] = a[i - 1];
	}
	for (int j = 0; j < N; j++) {
		sum += 1.0 * a[j] / b[j];	//int转double
	}
	cout << fixed << setprecision(2) << sum << endl;

	return 0;
}