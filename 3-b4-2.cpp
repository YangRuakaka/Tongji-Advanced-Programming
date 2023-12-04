/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
	cout << "请输入三角形的两边及其夹角(角度）" << endl;
	int a, b, c;
	double pi = 3.14159;
	cin >> a >> b >> c;
	cout << "三角形面积为 ： " << setiosflags(ios::fixed) << setprecision(3) << (a * b * sin(pi * c / 180) / 2) << endl;
	return 0;
}


