#include <bits/stdc++.h>
//#include <cstring>
//#include <string>
using namespace std;

int main() {
	//问题 F: A4: Minimum value
	int min = INT_MAX;
	int num;
	cout << min << endl;
	//读最小值
	while (scanf("%d", &num) == 1 && num > 0) {
		if (num < min) {
			min = num;
		}
	}
	cout << min << endl;

	return 0;
}