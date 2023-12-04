/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入找零值：" << endl;
	double a; int b,c,d,e,f,g,h ,i,j,k,x;//b是50 c是20 d是10 e是5 f是1 g是5角 h是1角 i是5分 j是2分 k是1分// 
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
	cout << "共"  << x <<"张找零，具体如下：" << endl;
	if (b != 0) {
		cout << setiosflags(ios::left) << setw(5) << "50元" << " : " << b <<"张" <<endl;
	}
	if (c != 0) {
		cout << setiosflags(ios::left) << setw(5) << "20元" << " : " << c << "张" << endl;
	}
	if (d != 0) {
		cout << setiosflags(ios::left) << setw(5) << "10元" << " : " << d << "张" << endl;
	}
	if (e != 0) {
		cout << setiosflags(ios::left) << setw(5) << "5元" << " : " << e << "张" << endl;
	}
	if (f != 0) {
		cout << setiosflags(ios::left) << setw(5) << "1元" << " : " << f << "张" << endl;
	}
	if (g != 0) {
		cout << setiosflags(ios::left) << setw(5) << "5角" << " : " << g << "张" << endl;
	}
	if (h != 0) {
		cout << setiosflags(ios::left) << setw(5) << "1角" << " : " << h << "张" << endl;
	}
	if (i != 0) {
		cout << setiosflags(ios::left) << setw(5) << "5分" << " : " << i << "张" << endl;
	}
	if (j != 0) {
		cout << setiosflags(ios::left) << setw(5) << "2分" << " : " << j << "张" << endl;
	}
	if (k != 0) {
		cout << setiosflags(ios::left) << setw(5) << "1分" << " : " << k << "张" << endl;
	}
	return 0;
}
