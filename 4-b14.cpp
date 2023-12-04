/* 杨宇琨 信01 2252843*/
#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
	
		cout << "请输入一元二次方程的三个系数a,b,c:" << endl;
		double a,b,c,d;
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
			a = 0;
			cout << "不是一元二次方程" << endl;
			return 0;
		}
		else if (fabs(d) < 1e-6) {
			if (b == 0) {
				cout << "有两个相等实根：" << endl;
				 cout << "x1=x2=0" << endl;
			}
			else {
				cout << "有两个相等实根：" << endl;
				cout << "x1=x2=" << ((-b) /( 2 * a)) << endl;
			}
			
			
		}
		else if (d > 0) {
			cout << "有两个不等实根：" << endl;
			cout << "x1=" << ((-b + sqrt(d) )/ (2 * a)) << endl;
			cout << "x2=" << ((-b - sqrt(d)) /( 2 * a)) << endl;
		}
		else if (d < 0) {
			cout << "有两个虚根：" << endl;
			if (fabs(-b / (2 * a)) < 1e-6) {
				if (sqrt(-d) / (2 * a) == 1|| sqrt(-d) / (2 * a) == -1) {
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
	

		return 0;

}