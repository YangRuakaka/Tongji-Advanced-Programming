/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "������һ��[1,30000]�������:" << endl;
	unsigned long long int a;
	cin >> a ;
	cout << setiosflags(ios::left) << setw(5) << "��λ" << " : " << (a / 10000) << endl;
	cout << setiosflags(ios::left) << setw(5) << "ǧλ" << " : " << ((a-a/10000*10000)/1000)<< endl;
	cout << setiosflags(ios::left) << setw(5) << "��λ" << " : " << ((a- a / 10000 * 10000- (a - a / 10000 * 10000) / 1000 *1000)/ 100) << endl;
	cout << setiosflags(ios::left) << setw(5) << "ʮλ" << " : " << ((a- a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000- (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000) / 100*100)/10 )<< endl;
	cout << setiosflags(ios::left) << setw(5) << "��λ" << " : " << (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000 - (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000) / 100 * 100 - (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000 - (a - a / 10000 * 10000 - (a - a / 10000 * 10000) / 1000 * 1000) / 100 * 100) / 10*10) << endl;

}