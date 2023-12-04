/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入半径和高度\n");
	double r, h, pi = 3.14159;
	scanf("%lf %lf", &r, &h);
	printf("圆周长        : %.2lf\n", 2 * pi * r);
	printf("圆面积        : %.2lf\n", pi * r * r);
	printf("圆球表面积    : %.2lf\n", 4 * pi * r * r);
	printf("圆球体积      : %.2lf\n", pi * r * r * r * 4 / 3);
	printf("圆柱体积      : %.2lf\n", pi * r * r * h);
	return 0;
}
