#include <bits/stdc++.h>
using namespace std;

int main() {
	//���� C: A3: Digit or not
	char ch;
	cin >> ch;
	//�ж�����ĸ�����ֻ�������
	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
		cout << "Letter" << endl;
	} else if (ch >= '0' && ch <= '9') {
		cout << "Digit" << endl;
	} else {
		cout << "Other" << endl;
	}

	return 0;
}