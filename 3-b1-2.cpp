/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "������뾶�͸߶�" << endl;
	double r, h, pi = 3.14159;
	cin >> r >> h;
	cout << setiosflags(ios::left) << setw(10) << "Բ�ܳ�" << " : " << setiosflags(ios::fixed) << setprecision(2) << (2 * pi * r) << endl;
	cout << setiosflags(ios::left) << setw(10) << "Բ���" << " : " << setiosflags(ios::fixed) << setprecision(2) << (pi * r* r) << endl;
	cout << setiosflags(ios::left) << setw(10) << "Բ������" << " : " << setiosflags(ios::fixed) << setprecision(2) << (4 * pi * r * r) << endl;
	cout << setiosflags(ios::left) << setw(10) << "Բ�����" << " : " << setiosflags(ios::fixed) << setprecision(2) << ( pi * r * r * r*4/3) << endl;
	cout << setiosflags(ios::left) << setw(10) << "Բ�����" << " : " << setiosflags(ios::fixed) << setprecision(2) << (pi * r * r* h) << endl;

    return 0;
}

