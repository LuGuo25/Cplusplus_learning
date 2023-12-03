#include <iostream>
using namespace std;

int main() {
	//问题 A: 判断直角三角形
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}