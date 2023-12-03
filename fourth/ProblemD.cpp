#include <iostream>
using namespace std;

int main() {
	//问题 D: 画#字符长方形
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "#";
		}
		cout << endl;
	}

	return 0;
}