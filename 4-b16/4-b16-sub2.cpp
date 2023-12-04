/* 杨宇琨 信01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;

void fun1(double a,double b)
{
	if (b == 0) {
		cout << "有两个相等实根：" << endl;
		cout << "x1=x2=0" << endl;
	}
	else {
		cout << "有两个相等实根：" << endl;
		cout << "x1=x2=" << ((-b) / (2 * a)) << endl;
	}
}