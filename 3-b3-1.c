/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("������[0,100��]֮�������:\n");
	double a;
	scanf("%lf", &a);
	int o= (a / 1000000000), b = a / 100000000, c = a / 1e7, d = a / 1e6, e = a / 1e5, f = a / 1e4, g = a / 1e3, h = a / 1e2, i= a / 1e1,j=a-o*1e9,k=(a+0.0001-o*1e9-b%10*1e8)/0.1, l=( a+0.0001 -o*1e9- b%10*1e8-c%10*1e7)/0.01;
	printf("ʮ��λ    �� %d\n",  o);
	printf("��λ      �� %d\n", b % 10);
	printf("ǧ��λ    �� %d\n", c%10);
	printf("����λ    �� %d\n", d%10);
	printf("ʮ��λ    �� %d\n", e%10);
	printf("��λ    �� %d\n",   f%10);
	printf("ǧλ    �� %d\n",   g%10);
	printf("��λ    �� %d\n",   h%10);
	printf("ʮλ    �� %d\n", i % 10);
	printf("Բλ    �� %d\n", j%10);
	printf("��λ    �� %d\n", k%10);
	printf("��λ    �� %d\n", l%10);
	return 0;

}