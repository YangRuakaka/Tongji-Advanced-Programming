/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int s[1000],i,ret,j,max,k,n;
	printf("请输入成绩（最多1000个），负数结束输入\n");
	for (i = 0; i < 1000; i++) {
		ret=scanf("%d", &s[i]);	
		

	    if (s[0] < 0) {
			printf("无有效输入\n");
				return -1;
		}
		else if (s[i] < 0) {
			break;
		}
	}
	printf("输入的数组为:\n");
	for (j = i, i = 0; i < j; i++) {
		if (i % 10 == 0 && i != 0) {
			printf("\n");
		}
		printf("%d ", s[i]);
	
	}
	printf("\n");
	printf("分数与人数的对应关系为:\n");
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
	for (i = 0; i < j; ) {
		if (s[i] != s[i + 1]) {
			printf("%d %d\n", s[i], 1);
			i++;
		}
		else {
			for ( n = 1; s[i] == s[i + 1]; n++,i++) {
			}
			printf("%d %d\n", s[i-n+1], n);
			i++;
		}
	}
}