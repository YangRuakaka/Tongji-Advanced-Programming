/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	printf("�����������ε����߼���н�(�Ƕȣ�\n");
	int a,b,c;
	double pi = 3.14159;
	scanf("%d %d %d", &a,&b,&c);
	printf("���������Ϊ : %.3lf\n", a*b*sin(pi*c/180)/2);
	
	return 0;
}