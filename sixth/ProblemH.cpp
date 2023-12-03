#include <iostream>
using namespace std;

int main() {
	//问题 H: 筛法求素数
	int N;
	cin >> N;
	int num[N + 1] ;
	for (int i = 0; i < N; i++) {
		num[i] = i + 1;		//状态机，如果num[i]为0，则不是素数
	}
	num[0] = 0;
	for (int i = 2; i <= N; i++) {
		for (int j = i + 1; j <= N; j++) {
			if (j % i == 0) {
				num[j - 1] = 0;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		if (num[i] != 0) {
			cout << num[i] << endl;
		}
	}

	return 0;
}