/* ������ ��01 2252843*/
/*2250694 ���Ӻ� 2152966 ������ 2253642 ��� 2251749 ��ܰ�h 2250929 �ƾ���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s[10][26],ch='0';
	int sum = 0, i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 26; j++) {
			scanf("%c", &s[i][j]);
			if (s[i][j] == ' '|| s[i][j] == '\n') {
				j--;
		    }
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 26; j++) {
			if (s[i][j] == '*') {
				sum = sum + 1;
			}
			else
				continue;
		}
	}
	if (sum != 50) {
		printf("����1\n");
		return 0;
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 26; j++) {
			if (s[i][j] != '*') {
				int sum = 0;
				if (s[i][j + 1] == '*' && (j + 1) < 26)
					sum = sum + 1;
				if (s[i][j - 1] == '*' && (j - 1) >= 0)
					sum = sum + 1;
				if (s[i + 1][j] == '*' && (i + 1) < 10)
					sum = sum + 1;
				if (s[i - 1][j] == '*' && (i - 1) >= 0)
					sum = sum + 1;
				if (s[i + 1][j + 1] == '*' && (j + 1) < 26 && (i + 1) < 10)
					sum = sum + 1;
				if (s[i - 1][j + 1] == '*' && (j + 1) < 26 && (i - 1) >= 0)
					sum = sum + 1;
				if (s[i + 1][j - 1] == '*' && (i + 1) < 10 && (j - 1) >= 0)
					sum = sum + 1;
				if (s[i - 1][j - 1] == '*' && (i - 1) >= 0 && (j - 1) >= 0)
					sum = sum + 1;
				if (s[i][j] != sum+48) {
					printf("����2\n");
					return 0;
				}
			}
			else
				continue;

		}
	
	}
	printf("��ȷ\n");
	return 0;

}