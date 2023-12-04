/* 杨宇琨 信01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;

void fun2true(double a, double b,double d)
{
	cout << "有两个不等实根：" << endl;
	cout << "x1=" << ((-b + sqrt(d)) / (2 * a)) << endl;
	cout << "x2=" << ((-b - sqrt(d)) / (2 * a)) << endl;
}