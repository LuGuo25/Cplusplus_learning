#include <bits/stdc++.h>
using namespace std;

int main() {
	//ÎÊÌâ B: A3: Leap year
	int year;
	cin >> year;
	//ÅĞ¶ÏÈòÄê
	if (year % 100 == 0 && year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}