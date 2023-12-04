/* ÑîÓîçû ĞÅ01 2252843*/
/*2250694 Áõ×ÓºÕ 2152966 ÑîÇìéÅ 2253642 Ñî´¨ÒÕ 2251749 ¶ÅÜ°«h 2250929 »Æ¾¸ÄÏ*/
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
		printf("´íÎó1\n");
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
					printf("´íÎó2\n");
					return 0;
				}
			}
			else
				continue;

		}
	
	}
	printf("ÕıÈ·\n");
	return 0;

}