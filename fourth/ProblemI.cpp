#include <iostream>
using namespace std;

int main() {
	//问题 I: 水题欢乐多
	int N, A, B;
	while (scanf("%d %d %d", &N, &A, &B) != EOF) {
		int num[N];
		for (int i = 0; i < N; i++) {
			cin >> num[i];
		}
		int diff = B - A;
		int max = 0;
		for (int i = N - 1; i >= 0; i--) {
			if (num[i] <= diff) {
				if (num[i] > max) {
					max = num[i];
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}