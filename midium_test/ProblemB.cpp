#include <bits/stdc++.h>
using namespace std;

int main() {
	//���� B: A3: Leap year
	int year;
	cin >> year;
	//�ж�����
	if (year % 100 == 0 && year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}