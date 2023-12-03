#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//问题 G: 九九乘法表
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			if (i != j) {
				cout << " " << j << " * " << i << " = " << fixed << setw(2) << i *j << "  ";
			} else {
				cout << " " << j << " * " << i << " = " << fixed << setw(2) << i *j;
			}
		}
		cout << endl;
	}

	return 0;
}