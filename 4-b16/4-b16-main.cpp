/* ������ ��01 2252843*/
#include<iostream>
#include<Math.h>
#include"4-b16.h"
using namespace std;


int main()
{

	cout << "������һԪ���η��̵�����ϵ��a,b,c:" << endl;
	double a, b, c,d;
	cin >> a;
	if (cin.good() == 0) {
		cout << "����һԪ���η���" << endl;
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
		fun0(a);
		return 0;
	}
	
	if (fabs(d) < 1e-6) {
		fun1(a, b);
		return 0;
	}
	else if (d > 0) {
		fun2true(a,b,d);
		return 0;
	}
	else if (d < 0) {
		fun2false(a, b, d);
		return 0;
	}

	
	return 0;

}