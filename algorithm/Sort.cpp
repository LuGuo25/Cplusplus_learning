#include <bits/stdc++.h>
//#include <algorithm>
using namespace std;
 
void BubbleSort(int *arr, int length) { //√∞≈›≈≈–Ú…˝–Ú
	int temp;
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void SelectionSort(int *arr, int length) { //—°‘Ò≈≈–Ú…˝–Ú
	int temp;
	int k;
	for (int i = 0; i < length; i++) {
		k = i;
		for (int j = i + 1; j < length; j++) {
			if (arr[j] < arr[k]) {
				k = j;
			}
		}
		temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
	}
}

void InsertionSort(int *arr, int length) {	//≤Â»Î≈≈–Ú…˝–Ú
	int temp, i, j;
	for (i = 1; i < length; i ++) {
		if (arr[i] < arr[i - 1]) {
			temp = arr[i];
			for (j = i - 1; j >= 0; j--) {
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

int main() {
	//≈≈–ÚÀ„∑®
	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//	for (int i = 0; i < 10; i++) {
//		cin >> arr[i];
//	}
//	BubbleSort(arr,10);
//	SelectionSort(arr, 10);
	InsertionSort(arr, 10);
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
