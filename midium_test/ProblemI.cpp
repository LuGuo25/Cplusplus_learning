#include <bits/stdc++.h>
using namespace std;

bool is_repeat(int n) {	//判断是否为重复数，如果是则返回true，否则返回false
	int temp = n;
	int number[10];
	int index = 0;
	while (temp != 0) {
		number[index++] = temp % 10;
		temp /= 10;
	}
	for (int i = 0; i < index - 1; i++) {
		if (number[i] == number[i + 1]) {
			return true;
		}
	}
	return false;
}

int main() {
	//问题 I: 不重复数
	int A;
	int num[100];
	cin >> A;
	for (int i = A + 1;; i++) {
		if (is_repeat(i) == false) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}