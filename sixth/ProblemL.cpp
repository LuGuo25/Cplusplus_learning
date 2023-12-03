#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//问题 L: 数字归类
	int num[10000] = {0};
	int index = 0;
	while (scanf("%d", &num[index]) != EOF) {
		index++;
	}
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = 0; j < index; j++) {
			int temp = num[j];
			while (temp != 0) {
				if (temp % 10 == i) {
					count++;
					break;
				}
				temp /= 10;
			}
		}
		cout << i << ":" << fixed << setw(2) << count << endl;
	}

	return 0;
}