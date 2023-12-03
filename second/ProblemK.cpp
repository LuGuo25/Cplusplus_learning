#include <iostream>
using namespace std;

int max(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int min(int a, int b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

int main() {
	//问题 K: 整数排序
	int a, b, c;
	cin >> a >> b >> c;
	int max_num = max(max(a, b), c);
	int min_num = min(min(a, b), c);
	int another;
	if (a != max_num && a != min_num) {
		another = a;
	} else if (b != max_num && b != min_num) {
		another = b;
	} else {
		another = c;
	}
	cout << min_num << " " << another << " " << max_num << endl;

	return 0;
}