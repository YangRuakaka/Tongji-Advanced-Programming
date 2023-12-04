/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入半径和高度" << endl;
	double r, h, pi = 3.14159;
	cin >> r >> h;
	cout << setiosflags(ios::left) << setw(10) << "圆周长" << " : " << setiosflags(ios::fixed) << setprecision(2) << (2 * pi * r) << endl;
	cout << setiosflags(ios::left) << setw(10) << "圆面积" << " : " << setiosflags(ios::fixed) << setprecision(2) << (pi * r* r) << endl;
	cout << setiosflags(ios::left) << setw(10) << "圆球表面积" << " : " << setiosflags(ios::fixed) << setprecision(2) << (4 * pi * r * r) << endl;
	cout << setiosflags(ios::left) << setw(10) << "圆球体积" << " : " << setiosflags(ios::fixed) << setprecision(2) << ( pi * r * r * r*4/3) << endl;
	cout << setiosflags(ios::left) << setw(10) << "圆柱体积" << " : " << setiosflags(ios::fixed) << setprecision(2) << (pi * r * r* h) << endl;

    return 0;
}

