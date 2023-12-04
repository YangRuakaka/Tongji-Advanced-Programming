/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入[0,100亿]之间的数字:" << endl;
	double a;
	cin >> a;
	cout << setiosflags(ios::left) << setw(5) << "十亿位" << " : " <<int(a/1000000000) << endl;
	cout << setiosflags(ios::left) << setw(5) << "亿位" << "  : " <<int(a/100000000)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "千万位" << " : " <<int(a/10000000)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "百万位" << " : " <<  int(a /1000000)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "十万位" << " : " << int(a/100000)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "万位" << "  : " << int(a/10000)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "千位" << "  : " << int(a/1000)%10<< endl;
	cout << setiosflags(ios::left) << setw(5) << "百位" << "  : " << int(a/100)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "十位" << "  : " << int(a/10)%10<< endl;
	cout << setiosflags(ios::left) << setw(5) << "圆" << "  : " << int(a- int(a / 1000000000) * 1000000000)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "角" << "  : " << int((a+0.0001 - int(a / 1000000000)* 1e9- int(a / 100000000) % 10*1e8)/0.1)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "分" << "  : " << int((a+0.0001 - int(a / 1000000000) * 1e9- int(a / 100000000) % 10 * 1e8- int(a / 10000000) % 10*1e7) / 0.01) % 10 << endl;
	return 0;

}