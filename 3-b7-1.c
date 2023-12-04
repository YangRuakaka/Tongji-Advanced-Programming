/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入找零值：\n"); 
	double a; int b, c, d, e, f, g, h, i, j, k, x;//b是50 c是20 d是10 e是5 f是1 g是5角 h是1角 i是5分 j是2分 k是1分// 
	scanf("%lf", &a);
	if (a >= 50) {
		b = 1, a = a - 50;
		if (a > 40) {
			c = 2, a = a - 40;
		}

		else if (a >= 20 && a < 40) {
			c = 1, a = a - 20;
		}
		else {
			c = 0;
		}
	}
	else if (a >= 40) {
		b = 0, a = a - 40, c = 2;
	}
	else if (a >= 20) {
		b = 0, a = a - 20, c = 1;
	}
	else {
		b = 0, c = 0;
	}
	if (a >= 10) {
		d = 1, a = a - 10;
	}

	else {
		d = 0;
	}
	if (a >= 5) {
		e = 1, a = a - 5;
	}
	else {
		e = 0;
	}
	f = (int)(a / 1);
	a = a - f;
	if ((int)(a / 0.1) >= 5) {
		g = 1, a = a - 0.5;
	}
	else {
		g = 0;
	}
	h = (int)(a / 0.1);
	a = a - h * 0.1;
	if ((int)(a / 0.01) >= 5) {
		i = 1, a = a - 0.05;
	}
	else {
		i = 0;
	}
	if ((int)(a / 0.01) >= 2) {
		j = 1; a = a - 0.02;
	}
	else {
		j = 0;
	}
	k =(int)( a / 0.01);
	x = b + c + d + e + f + g + h + i + j + k;
	printf("共%d张找零，具体如下：\n", x);
	if (b != 0) {
		printf("50元 : %d张\n", b);
	}
	if (c != 0) {
		printf("20元 : %d张\n", c); 
	}
	if (d != 0) {
		printf("10元 : %d张\n", d);
	}
	if (e != 0) {
		printf("5元  : %d张\n", e);
	}
	if (f != 0) {
		printf("1元  : %d张\n", f); 
	}
	if (g != 0) {
		printf("5角  : %d张\n", g); 
	}
	if (h != 0) {
		printf("1角  : %d张\n", h);
	}
	if (i != 0) {
		printf("5分  : %d张\n", i); 
	}
	if (j != 0) {
		printf("2分  : %d张\n", j); 
	}
	if (k != 0) {
		printf("1分  : %d张\n", k); 
	}
	return 0;
}
