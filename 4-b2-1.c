/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void zeller(int y, int m, int d) 
{
	int w, c,j,k,l;

	if (m != 1 && m != 2) {
		c = y / 100 + 1;
		y = y - (y / 100) * 100;
		w = y + (y / 4) + ((c - 1) / 4) - (c - 1) * 2 + (13 * (m + 1) / 5) + d - 1;
	}
	else {
		c = ((y - 1) / 100) + 1;
		y = y - 1 - ((y - 1) / 100) * 100;
		w = y +  (y / 4) +  ((c - 1) / 4) - (c - 1) * 2 +  (13 * (m + 13) / 5) + d - 1;
	}

	if (w < 0) {
		w = w + 700;
	}
	w = w % 7;
	switch (w) {
		case 0:
			printf("星期日\n");
			break;
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;

	}

}

int main() 
{
	int y, m, d, i,ret;


	while (1) {
		printf("请输入年[1900-2100]、月、日：\n");
		ret=scanf("%d %d %d" , &y, &m, &d);   //读入x的方式必须是 cin>>int型变量，不允许其他方式
		char k = 1;
		if (ret!=3) {
			 while (k != '\n') {
				 k = getchar();
			 }
			 printf("输入非法，请重新输入\n");
		}

		else {
			if (y < 1900 || y > 2100) {
				printf("年份不正确，请重新输入\n");
				continue;
			}
			else if (m < 1 || m>12) {
				printf("月份不正确，请重新输入\n");
				continue;
			}
			else {

			}
		}
		if (y % 4 == 0) {
			if (y % 100 == 0) {
				i = 0;
			}
			else {
				i = 1;
			}
		}
		else if (y % 400 == 0) {
			i = 1;
		}
		else {
			i = 0;
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			if (d < 0 || d>31) {
				printf("日不正确，请重新输入\n");
				continue;
			}
			else {
				break;
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (d < 0 || d>30) {
				printf("日不正确，请重新输入\n");
				continue;
			}
			else {
				break;
			}
		}
		else if (i == 1 && m == 2) {
			if (d < 0 || d>29) {
				printf("日不正确，请重新输入\n");
				continue;
			}
			else {
				break;
			}
		}
		else if (i == 0 && m == 2) {
			if (d < 0 || d>28) {
				printf("日不正确，请重新输入\n");
				continue;
			}
			else {
				break;
			}
		}

	}
	zeller(y, m, d);
	return 0;
}




