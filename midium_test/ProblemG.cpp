#include <bits/stdc++.h>
using namespace std;

int main() {
	//ÎÊÌâ G: A4: Diamond
	int num;
	cin >> num;
	int max = num / 2 + 1;
	for (int i = 1; i <= max; i++) {
		for (int j = 1; j <= max - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = num - max; i >= 1; i--) {
		for (int j = 1; j <= max - i; j++) {
			cout << " ";
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}