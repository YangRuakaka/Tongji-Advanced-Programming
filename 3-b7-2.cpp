/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "����������ֵ��" << endl;
	double a; int b,c,d,e,f,g,h ,i,j,k,x;//b��50 c��20 d��10 e��5 f��1 g��5�� h��1�� i��5�� j��2�� k��1��// 
	cin >> a; 
	if (a >= 50) {
		b = 1, a = a - 50;
		    if (a > 40) {
				c = 2, a = a - 40;
            }

			else if (a >= 20&&a<40) {
				c = 1, a = a - 20;
			}
			else{
				c = 0 ;
			}
	}
	else if (a>=40) {
		b = 0, a = a - 40, c = 2;
	}
	else if (a >= 20) {
		b = 0, a = a - 20, c = 1;
	}
	else {
		b = 0,c=0;
	}
	if (a >= 10) {
		d = 1, a = a - 10 ;
	}
	
	else {
		d = 0;
	}
	if (a >= 5) {
		e = 1, a = a - 5;
	}
	else {
		e = 0;
	}
	f = int(a / 1);
	a = a - f;
	if ( int(a/ 0.1) >= 5) {
		g = 1, a = a - 0.5;
	}
	else {
		g = 0;
	}
	h = int(a / 0.1);
	a = a - h * 0.1;
	if (int(a / 0.01) >= 5) {
		i = 1, a = a - 0.05;
	}
	else {
		i = 0;
	}
	
     if (int(a / 0.01) >= 2) {
		 j = 1; a = a - 0.02;
	}
	else {
		j = 0;
	}
	k = a / 0.01;
	x = b + c + d + e + f + g + h + i + j + k;
	cout << "��"  << x <<"�����㣬�������£�" << endl;
	if (b != 0) {
		cout << setiosflags(ios::left) << setw(5) << "50Ԫ" << " : " << b <<"��" <<endl;
	}
	if (c != 0) {
		cout << setiosflags(ios::left) << setw(5) << "20Ԫ" << " : " << c << "��" << endl;
	}
	if (d != 0) {
		cout << setiosflags(ios::left) << setw(5) << "10Ԫ" << " : " << d << "��" << endl;
	}
	if (e != 0) {
		cout << setiosflags(ios::left) << setw(5) << "5Ԫ" << " : " << e << "��" << endl;
	}
	if (f != 0) {
		cout << setiosflags(ios::left) << setw(5) << "1Ԫ" << " : " << f << "��" << endl;
	}
	if (g != 0) {
		cout << setiosflags(ios::left) << setw(5) << "5��" << " : " << g << "��" << endl;
	}
	if (h != 0) {
		cout << setiosflags(ios::left) << setw(5) << "1��" << " : " << h << "��" << endl;
	}
	if (i != 0) {
		cout << setiosflags(ios::left) << setw(5) << "5��" << " : " << i << "��" << endl;
	}
	if (j != 0) {
		cout << setiosflags(ios::left) << setw(5) << "2��" << " : " << j << "��" << endl;
	}
	if (k != 0) {
		cout << setiosflags(ios::left) << setw(5) << "1��" << " : " << k << "��" << endl;
	}
	return 0;
}
