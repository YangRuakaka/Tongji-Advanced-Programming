/* ������ ��01 2252843*/
#include <iostream>
using namespace std;

int main()
{
	int s[20],i,j,a,k;
	cout << "��������������������������20������0������������" << endl;
	for (i=0; i < 20; i++) {
		cin >> s[i];
		if (i == 0 && (s[i] <= 0 || cin.good() == 0)) {
			cout << "����Ч����" << endl;
			return -1;
		}
		if (s[i] <= 0 || cin.good() == 0)
		{
			break;
		}
	}
	cin.clear();
	cin.ignore(1234, '\n');
	cout << "ԭ����Ϊ��" << endl;
	for (j = 0; j<i; j++) {
		cout << s[j] << " ";
	}
	cout << endl;
	cout << "������Ҫ�����������" << endl;
	cin >> a;
	cout << "����������Ϊ��" << endl;
	for (j = 0; j < i; j++) {
		if (a >= s[j]) {
			cout << s[j] << " ";
		}
		else {
			break;
		}
		
	}
	cout << a << " ";
	for (; j < i; j++) {
		cout << s[j] << " ";
	}
	cout << endl;
}
