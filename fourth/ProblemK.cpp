#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ K: Ê¥µ®Ê÷
	int height, num;
	cin >> height >> num;
	for (int i = 1; i <= height; i++) {
		if (num == 1) {
			for (int k = 1; k <= height - i; k++) {
				cout << " ";
			}
			for (int m = 1; m <= 2 * i - 1; m++) {
				cout << "*";
			}
		} else {
			for (int k = 1; k <= height - i; k++) {
				cout << " ";
			}
			for (int m = 1; m <= 2 * i - 1; m++) {
				cout << "*";
			}
			for (int j = 2; j <= num; j++) {
				for (int k = 1; k <= 2 * (height - i) ; k++) {
					cout << " ";
				}
				for (int m = 1; m <= 2 * i - 1; m++) {
					cout << "*";
				}
			}
		}

		cout << endl;
	}

	return 0;
}