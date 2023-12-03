#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//问题 I: 嘉航的加密程序
	char ch[10000];
	gets(ch);
	int k;
	cin >> k;
	int real_k;
	int length = strlen(ch);
	char locate_digit;
	char locate_num;
	for (int i = 0; i < length; i++) {
		if (ch[i] >= 'a' && ch[i] <= 'z') {
			real_k = k % 26;
			locate_digit = 'z' - real_k;
			if (ch[i] <= locate_digit) {
				ch[i] += real_k;
			} else {
				ch[i] = 'a' + ch[i] - locate_digit - 1;
			}
		} else if (ch[i] >= 'A' && ch[i] <= 'Z') {
			real_k = k % 26;
			locate_digit = 'Z' - real_k;
			if (ch[i] <= locate_digit) {
				ch[i] += real_k;
			} else {
				ch[i] = 'A' + ch[i] - locate_digit - 1;
			}
		} else if (ch[i] >= '0' && ch[i] <= '9') {
			real_k = k % 10;
			locate_num = '9' - real_k;
			if (ch[i] <= locate_num) {
				ch[i] += real_k;
			} else {
				ch[i] = '0' + ch[i] - locate_num - 1;
			}
		}
	}
	for (int j = 0; j < length; j++) {
		cout << ch[j];
	}
	cout << endl;

	return 0;
}