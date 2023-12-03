#include <iostream>
using namespace std;

int main() {
	//问题 C: 画#字符正方形
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "#";
		}
		cout << endl;
	}

	return 0;
}