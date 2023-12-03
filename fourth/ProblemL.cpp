#include <iostream>
using namespace std;

int main() {
	//ÎÊÌâ L: ÍÀÁú
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF) {
		int sum = 0;
		sum = 3 * a + 2 * b + c + a * b * c;
		if (sum > 25 + 4 * a + 2 * b + (-3)*c) {
			cout << "win" << endl;
		} else {
			cout << "lose" << endl;
		}
	}

	return 0;
}