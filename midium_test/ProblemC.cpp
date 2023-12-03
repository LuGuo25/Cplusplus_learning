#include <bits/stdc++.h>
using namespace std;

int main() {
	//问题 C: A3: Digit or not
	char ch;
	cin >> ch;
	//判断是字母、数字还是其他
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		cout << "Letter" << endl;
	} else if (ch >= '0' && ch <= '9') {
		cout << "Digit" << endl;
	} else {
		cout << "Other" << endl;
	}

	return 0;
}