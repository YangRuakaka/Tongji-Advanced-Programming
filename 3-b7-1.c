/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("����������ֵ��\n"); 
	double a; int b, c, d, e, f, g, h, i, j, k, x;//b��50 c��20 d��10 e��5 f��1 g��5�� h��1�� i��5�� j��2�� k��1��// 
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
	printf("��%d�����㣬�������£�\n", x);
	if (b != 0) {
		printf("50Ԫ : %d��\n", b);
	}
	if (c != 0) {
		printf("20Ԫ : %d��\n", c); 
	}
	if (d != 0) {
		printf("10Ԫ : %d��\n", d);
	}
	if (e != 0) {
		printf("5Ԫ  : %d��\n", e);
	}
	if (f != 0) {
		printf("1Ԫ  : %d��\n", f); 
	}
	if (g != 0) {
		printf("5��  : %d��\n", g); 
	}
	if (h != 0) {
		printf("1��  : %d��\n", h);
	}
	if (i != 0) {
		printf("5��  : %d��\n", i); 
	}
	if (j != 0) {
		printf("2��  : %d��\n", j); 
	}
	if (k != 0) {
		printf("1��  : %d��\n", k); 
	}
	return 0;
}
