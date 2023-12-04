/* 杨宇琨 信01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;



void fun0();
void fun1();
void fun2true();
void fun2false();
double a, b, c, d;
int main()
{

	cout << "请输入一元二次方程的三个系数a,b,c:" << endl;
	
	cin >> a;
	if (cin.good() == 0) {
		cout << "不是一元二次方程" << endl;
		return 0;
	}
	cin >> b >> c;
	if (fabs(b) < 1e-6) {
		b = 0;
	}
	if (fabs(c) < 1e-6) {
		c = 0;
	}
	d = b * b - 4 * a * c;
	if (fabs(a) < 1e-6) {
		fun0();
		return 0;
	}

	if (fabs(d) < 1e-6) {
		fun1();
		return 0;
	}
	else if (d > 0) {
		fun2true();
		return 0;
	}
	else if (d < 0) {
		fun2false();
		return 0;
	}


	return 0;

}