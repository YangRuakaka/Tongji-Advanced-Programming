/* ������ ��01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;

extern double a, b, d;
void fun0()
{
	
	cout << "����һԪ���η���" << endl;

}

void fun1()
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
void fun2true()
{
	cout << "����������ʵ����" << endl;
	cout << "x1=" << ((-b + sqrt(d)) / (2 * a)) << endl;
	cout << "x2=" << ((-b - sqrt(d)) / (2 * a)) << endl;
}
void fun2false()
{
	
	cout << "�����������" << endl;
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