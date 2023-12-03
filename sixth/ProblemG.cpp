#include <iostream>
using namespace std;

int main() {
	//Œ Ã‚ G: √∞≈›∑®≈≈–Ú
	int num[10] = {0};
	int temp;
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	for (int j = 0; j < 9; j++) {
		for (int k = 0; k < 9 - j; k++) {
			if (num[k] > num[k + 1]) {
				temp = num[k];
				num[k] = num[k + 1];
				num[k + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << endl;
	}
	return 0;
}