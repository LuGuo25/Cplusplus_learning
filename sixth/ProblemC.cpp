#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//问题 C: 平均数
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[n + 1] = {0};
		double sum = 0;
		double average;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		average = sum / n;
		cout << fixed << setprecision(3) << average << endl;
	}

	return 0;
}