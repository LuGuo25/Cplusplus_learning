#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//问题 H: 温度转换
	double f, c;	//f为华氏度，c为摄氏度
	cin >> f;
	c = 5 * (f - 32) / 9;//公式为：c=5(F-32)/9
	//cout设置精度，必须要把<iomanip>包含进来
	cout << "c=" << fixed << setprecision(2) << c << endl;

	return 0;
}