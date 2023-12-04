/* 杨宇琨 信01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;

void fun2false(double a, double b, double d)
{
	cout << "有两个虚根：" << endl;
	if (fabs(-b / (2 * a)) < 1e-6) {
		if (sqrt(-d) / (2 * a) == 1 || sqrt(-d) / (2 * a) == -1) {
			cout << "x1=i" << endl;
			cout << "x2=-i" << endl;
		}
		else {
			if ((sqrt(-d) / (2 * a)) > 0) {
				cout << "x1=" << (sqrt(-d) / (2 * a)) << "i" << endl;
				cout << "x2=" << (-sqrt(-d) / (2 * a)) << "i" << endl;
			}
			else {
				cout << "x1=" << (-sqrt(-d) / (2 * a)) << "i" << endl;
				cout << "x2=" << (sqrt(-d) / (2 * a)) << "i" << endl;
			}


		}

	}
	else {
		if ((sqrt(-d) / (2 * a)) > 0) {
			if ((sqrt(-d) / (2 * a) == 1)) {
				cout << "x1=" << (-b / (2 * a)) << "+i" << endl;
				cout << "x2=" << (-b / (2 * a)) << "-i" << endl;
			}
			else {
				cout << "x1=" << (-b / (2 * a)) << "+" << (sqrt(-d) / (2 * a)) << "i" << endl;
				cout << "x2=" << (-b / (2 * a)) << (-sqrt(-d) / (2 * a)) << "i" << endl;
			}

		}
		else {
			if ((sqrt(-d) / (2 * a) == -1)) {
				cout << "x1=" << (-b / (2 * a)) << "+i" << endl;
				cout << "x2=" << (-b / (2 * a)) << "-i" << endl;
			}
			else {
				cout << "x1=" << (-b / (2 * a)) << "+" << (-sqrt(-d) / (2 * a)) << "i" << endl;
				cout << "x2=" << (-b / (2 * a)) << (sqrt(-d) / (2 * a)) << "i" << endl;
			}

		}

	}
}