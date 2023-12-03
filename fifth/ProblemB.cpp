#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//ÎÊÌâ B: ×Ö·û¼ÓÃÜ
	char ch[1000];
	gets(ch);
	int length = strlen(ch);
	for (int i = 0; i < length; i++) {
		if (ch[i] >= 'a' && ch[i] < 'z') {
			ch[i] += 1;
		} else if (ch[i] == 'z') {
			ch[i] = 'a';
		}
	}
	for (int i = 0; i < length; i++) {
		cout << ch[i];
	}
	cout << endl;

	return 0;
}