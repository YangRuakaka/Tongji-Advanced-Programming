/* ������ ��01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;
void fun0(double a);
void fun1(double a, double b);
void fun2true(double a, double b, double c);
void fun2false(double a, double b, double c);

int main()
{

	cout << "������һԪ���η��̵�����ϵ��a,b,c:" << endl;
	double a, b, c, d;
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
		fun2true(a, b, d);
		return 0;
	}
	else if (d < 0) {
		fun2false(a, b, d);
		return 0;
	}


	return 0;

}