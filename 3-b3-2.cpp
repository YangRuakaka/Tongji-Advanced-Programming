/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "������[0,100��]֮�������:" << endl;
	double a;
	cin >> a;
	cout << setiosflags(ios::left) << setw(5) << "ʮ��λ" << " : " <<int(a/1000000000) << endl;
	cout << setiosflags(ios::left) << setw(5) << "��λ" << "  : " <<int(a/100000000)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "ǧ��λ" << " : " <<int(a/10000000)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "����λ" << " : " <<  int(a /1000000)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "ʮ��λ" << " : " << int(a/100000)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "��λ" << "  : " << int(a/10000)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "ǧλ" << "  : " << int(a/1000)%10<< endl;
	cout << setiosflags(ios::left) << setw(5) << "��λ" << "  : " << int(a/100)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "ʮλ" << "  : " << int(a/10)%10<< endl;
	cout << setiosflags(ios::left) << setw(5) << "Բ" << "  : " << int(a- int(a / 1000000000) * 1000000000)%10<<endl;
	cout << setiosflags(ios::left) << setw(5) << "��" << "  : " << int((a+0.0001 - int(a / 1000000000)* 1e9- int(a / 100000000) % 10*1e8)/0.1)%10 << endl;
	cout << setiosflags(ios::left) << setw(5) << "��" << "  : " << int((a+0.0001 - int(a / 1000000000) * 1e9- int(a / 100000000) % 10 * 1e8- int(a / 10000000) % 10*1e7) / 0.01) % 10 << endl;
	return 0;

}