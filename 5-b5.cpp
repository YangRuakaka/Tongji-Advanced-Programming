/* ������ ��01 2252843*/
#include <iostream>
using namespace std;


int main()
{
	int s[1000], i, j, max, k, n;
	cout << "������ɼ������1000������������������" << endl;
	for (i = 0; i < 1000; i++) {
		cin >> s[i];
		if (s[0] < 0) {
			printf("����Ч����\n");
			return -1;
		}
		else if (s[i] < 0) {
			break;
		}
	}
	cout << "���������Ϊ:" << endl; 
	for (j = i, i = 0; i < j; i++) {
		if (i % 10 == 0 && i != 0) {
			printf("\n");
		}
		printf("%d ", s[i]);

	}
	printf("\n");
	cout << "���������εĶ�Ӧ��ϵΪ:" << endl; 
	for (k = 0; k < j; k++) {
		for (i = k; i < j; i++)
		{
			if (s[k] < s[i]) {
				max = s[i];
				s[i] = s[k];
				s[k] = max;
				i = k;
			}
		}
	}
	for (i = 0,n=1; i < j;i++ ) {
		if (s[i] != s[i + 1]) {
			cout << s[i] << " " << n << endl;
			n = i+2;
		}
		else {
			cout << s[i] << " " <<n << endl;


		}

	}
}