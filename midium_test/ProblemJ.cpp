#include <bits/stdc++.h>
using namespace std;

int main() {
	//���� J: ��������Ӱ
	int n;
	cin >> n;
	int a[100];		//ǰ�˵�
	int b[100];		//��˵�
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
// for(int i = 0;i<n;i++){
// printf("%d %d\n",a[i],b[i]);
// }
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (b[j] > b[j + 1]) {	//���ݺ�˵����ð��������������
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
			}
		}
	}
//	for (int i = 0; i < n; i++) {
//		printf("%d %d\n",a[i],b[i]);
//	}
	/*
	int count= 1;
	for(int i = 0; i<n; i++)
	    {
	        if(a[i+1]>=b[i])
	            {
	                count++;
	            }

	}
	*/
	int max = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= max) {
			count++;
			max = b[i];
		}
	}
	cout << count << endl;
	return 0;
}