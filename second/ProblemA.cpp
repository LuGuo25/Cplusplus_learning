#include <iostream>
using namespace std;

int main() {
	//问题 A: 百分制成绩
	int num;
	cin >> num;
	switch (num / 10) {
		case 10:
		case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			cout << "E" << endl;
			break;
	}

	return 0;
}