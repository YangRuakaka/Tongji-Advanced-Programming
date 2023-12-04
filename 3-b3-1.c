/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入[0,100亿]之间的数字:\n");
	double a;
	scanf("%lf", &a);
	int o= (a / 1000000000), b = a / 100000000, c = a / 1e7, d = a / 1e6, e = a / 1e5, f = a / 1e4, g = a / 1e3, h = a / 1e2, i= a / 1e1,j=a-o*1e9,k=(a+0.0001-o*1e9-b%10*1e8)/0.1, l=( a+0.0001 -o*1e9- b%10*1e8-c%10*1e7)/0.01;
	printf("十亿位    ： %d\n",  o);
	printf("亿位      ： %d\n", b % 10);
	printf("千万位    ： %d\n", c%10);
	printf("百万位    ： %d\n", d%10);
	printf("十万位    ： %d\n", e%10);
	printf("万位    ： %d\n",   f%10);
	printf("千位    ： %d\n",   g%10);
	printf("百位    ： %d\n",   h%10);
	printf("十位    ： %d\n", i % 10);
	printf("圆位    ： %d\n", j%10);
	printf("角位    ： %d\n", k%10);
	printf("分位    ： %d\n", l%10);
	return 0;

}