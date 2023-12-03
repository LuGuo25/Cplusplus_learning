#include <bits/stdc++.h>
using namespace std;

int main() {
	//问题 D: A3: Funny 6
	int num;
	cin >> num;
	//个位是6且能被6整除
	if (num % 10 == 6 && num % 6 == 0) {
		cout << num << endl;
	}

	return 0;
}