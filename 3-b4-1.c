/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	printf("请输入三角形的两边及其夹角(角度）\n");
	int a,b,c;
	double pi = 3.14159;
	scanf("%d %d %d", &a,&b,&c);
	printf("三角形面积为 : %.3lf\n", a*b*sin(pi*c/180)/2);
	
	return 0;
}