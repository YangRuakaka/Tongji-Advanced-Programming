/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "请输入一个[1,30000]间的整数:" << endl;
	unsigned long long int a;
	cin >> a ;
	cout << setiosflags(ios::left) << setw(5) << "万位" << " : " << (a / 10000) << endl;
	cout << setiosflags(ios::left) << setw(5) << "千位" << " : " << ((a-a/10000*10000)/1000)<< endl;
	cout << setiosflags(ios::left) << setw(5) << "百位" << " : " << ((a- a / 10000 * 10000- (a - a / 10000 * 10000) / 1000 *1000)/ 100) << endl;
	cout << setiosflags(ios::left) << setw(5) << "十位" << " : " << ((a- a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000- (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000) / 100*100)/10 )<< endl;
	cout << setiosflags(ios::left) << setw(5) << "个位" << " : " << (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000 - (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000) / 100 * 100 - (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000 - (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000) / 100 * 100) / 10*10) << endl;

}