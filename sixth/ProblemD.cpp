#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ D: ÄæĞòÊä³ö
	int num[10];
	for (int i = 0; i < 10; i++) {
		cin >> num[i];
	}
	for (int j = 9; j >= 0; j--) {
		if (j == 9) {
			cout << num[j];
		} else {
			cout << " " << num[j];
		}
	}
	cout << endl;

	return 0;
}