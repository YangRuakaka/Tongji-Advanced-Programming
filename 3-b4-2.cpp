/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int main()
{
	cout << "�����������ε����߼���н�(�Ƕȣ�" << endl;
	int a, b, c;
	double pi = 3.14159;
	cin >> a >> b >> c;
	cout << "���������Ϊ �� " << setiosflags(ios::fixed) << setprecision(3) << (a * b * sin(pi * c / 180) / 2) << endl;
	return 0;
}


