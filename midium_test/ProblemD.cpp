#include <bits/stdc++.h>
using namespace std;

int main() {
	//���� D: A3: Funny 6
	int num;
	cin >> num;
	//��λ��6���ܱ�6����
	if (num % 10 == 6 && num % 6 == 0) {
		cout << num << endl;
	}

	return 0;
}