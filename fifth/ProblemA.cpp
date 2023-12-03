#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//问题 A: 统计个数
	char ch[1000];
	gets(ch);
	int length = strlen(ch);
	int count_digits = 0;
	int count_nums = 0;
	int count_spaces = 0;
	int count_others = 0;
	for (int i = 0; i < length; i++) {
		if (ch[i] >= 'a' && ch[i] <= 'z' || ch[i] >= 'A' && ch[i] <= 'Z') {
			count_digits++;
		} else if (ch[i] >= '0' && ch[i] <= '9') {
			count_nums++;
		} else if (ch[i] == ' ' || ch[i] == '\t') {
			count_spaces++;
		} else {
			count_others++;
		}
	}
	cout << count_digits << " " << count_nums << " " << count_spaces << " " << count_others << endl;
	return 0;
}