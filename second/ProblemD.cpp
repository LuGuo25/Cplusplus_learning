#include <iostream>
using namespace std;

int main() {
	//问题 D: 有一门课不及格的学生
	int Chinese, math;
	cin >> Chinese >> math;
	if (Chinese < 60 && math >= 60 || Chinese >= 60 && math < 60) {
		cout << 1 << endl;
	} else {
		cout << 0 << endl;
	}

	return 0;
}