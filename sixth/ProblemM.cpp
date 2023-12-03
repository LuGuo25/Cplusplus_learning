#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ M: Èý½ÇÆìÆ®Æ®
	int N;
	cin >> N;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		int num[n];
		char ch[n];
		for (int j = 0; j < n; j++) {
			cin >> num[j] >> ch[j];
		}
		int max = num[1];
		for (int k = 1; k < n; k += 2) {
			if (num[k] > max) {
				max = num[k];
			}
		}
		for (int x = 0; x < n; x++) {
			if (x % 2 == 0) {
				for (int y = 1; y <= num[x]; y++) {
					for (int m = 0; m < max - 1; m++) {
						cout << " ";
					}
					for (int n = 0; n < y; n++) {
						cout << ch[x];
					}
					cout << endl;
				}
			} else {
				for (int y = 1; y <= num[x]; y++) {
					for (int m = 0; m < max - y; m++) {
						cout << " ";
					}
					for (int n = 0; n < y; n++) {
						cout << ch[x];
					}
					cout << endl;
				}
			}
		}
		cout << endl;
	}

	return 0;
}