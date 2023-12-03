#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ F: ²å¶Ó
	int num[10];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	cin >> num[9];
	int temp = num[9];
	int index = 0;
	for (int i = 0 ; i < 9; i++) {
		if (num[9] >= num[i] && num[9] <= num[i + 1]) {
			index = i + 1;
		}
	}
	for (int j = 9; j > index; j--) {
		num[j] = num[j - 1];
	}
	num[index] = temp;
	for (int k = 0; k < 10; k++) {
		cout << num[k] << endl;
	}

	return 0;
}