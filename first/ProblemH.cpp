#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//���� H: �¶�ת��
	double f, c;	//fΪ���϶ȣ�cΪ���϶�
	cin >> f;
	c = 5 * (f - 32) / 9;//��ʽΪ��c=5(F-32)/9
	//cout���þ��ȣ�����Ҫ��<iomanip>��������
	cout << "c=" << fixed << setprecision(2) << c << endl;

	return 0;
}