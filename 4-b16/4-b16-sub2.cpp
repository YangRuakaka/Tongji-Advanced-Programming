/* ������ ��01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;

void fun1(double a,double b)
{
	if (b == 0) {
		cout << "���������ʵ����" << endl;
		cout << "x1=x2=0" << endl;
	}
	else {
		cout << "���������ʵ����" << endl;
		cout << "x1=x2=" << ((-b) / (2 * a)) << endl;
	}
}