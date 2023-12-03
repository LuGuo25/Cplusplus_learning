#include <bits/stdc++.h>
using namespace std;

int main() {
	//ÎÊÌâ H: A5: Count letters in a paragraph
	char ch[1000];
//	int index = 0;
	char letter[1000];
	char letter1[1000];
	int num[1000];
	gets(ch);
	int length = strlen(ch);
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (ch[i] >= 'a' && ch[i] <= 'z') {
			letter[count++] = ch[i];
		}
	}
	int index = 0;
	for (int i = 0; i < count; i++) {
		if (letter[i] == '#') {
			continue;
		}
		letter1[index] = letter[i];
		int count1 = 1;
		for (int j = i + 1; j < count; j++) {
			if (letter[j] == letter[i]) {
				letter[j] = '#';
				count1++;
			}
		}
		num[index++] = count1;
	}
//	for (int i = 0; i < count; i++) {
//		if (letter[i] >= 'a' && letter[i] <= 'z') {
//			char judgec_letter = letter[i];
//			int count_letter;
//
//		}
//	}
	int temp;
	char temp_c;
	for (int i = 0; i < index - 1; i++) {
		for (int j = 0; j < index - 1 - i; j++) {
			if (num[j] < num[j + 1] || num[j] == num[j + 1] && letter1[j] > letter1[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				temp_c = letter1[j];
				letter1[j] = letter1[j + 1];
				letter1[j + 1] = temp_c;
			}
		}
	}
	for (int i = 0; i < index; i++) {
		cout << letter1[i] << "(" << num[i] << ") ";
	}
	cout << endl;

	return 0;
}