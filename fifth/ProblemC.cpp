#include <iostream>
using namespace std;

int main() {
	//问题 C: 出租车计费
	int M;
	while (scanf("%d", &M) != EOF) {
		int sum = 0;
		if (M < 2) {
			sum = 7;
		} else if (M < 5) {
			sum = 7 + 5 * (M - 2);
		} else if (M < 10) {
			sum = 7 + 5 * (5 - 2) + 7 * (M - 5);
		} else {
			sum = 7 + 5 * (5 - 2) + 7 * (10 - 5) + 9 * (M - 10);
		}
		cout << sum << endl;
	}

	return 0;
}