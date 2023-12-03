#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ M: ÐÅºÅ²âÊÔ
	int num;
	while (scanf("%d", &num) != EOF) {
		int temp = num;
		int a[5] = {0};
		int index = 0;
		while (temp != 0) {
			a[index++] = temp % 10;
			temp /= 10;
		}
		for (int i = index - 1; i >= 0; i--) {
			switch (i) {
				case 2:
					for (int j = 0; j < a[i]; j++) {
						cout << "B";
					}
					break;
				case 1:
					for (int j = 0; j < a[i]; j++) {
						cout << "S";
					}
					break;
				case 0:
					for (int j = 1; j <= a[i]; j++) {
						cout << j;
					}
					break;
			}
		}
		cout << endl;
	}

	return 0;
}