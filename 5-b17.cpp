/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
static const char other[] = "!@#$%^&*-_=+,.?";

int main()
{
	srand((unsigned int)(time(0)));
	cout << "���������볤��(12-16)�� ��д��ĸ����(��2)�� Сд��ĸ����(��2)�� ���ָ���(��2)�� �������Ÿ���(��2)" << endl;
	int len, upper, lower, num, others,i,j,sum_u,sum_l,sum_n,sum_o;
	char pw[10][16] = { 0 };
	cin >> len >> upper >> lower >> num >> others;
	if (cin.good() == 0) {
		cout << "����Ƿ�" << endl;
		return 0;
	}
	else {
		if (len >= 12 && len <= 16) {
			if (upper<2 || upper>len) {
				cout << "��д��ĸ����[" << upper << "]����ȷ" << endl;
				return 0;
			}
			if (lower<2 || lower>len) {
				cout << "Сд��ĸ����[" << lower << "]����ȷ" << endl;
				return 0;
			}
			if (num<2 || num>len) {
				cout << "���ָ���[" << num << "]����ȷ" << endl;
				return 0;
			}
			if (others<2 || others>len) {
				cout << "�������Ÿ���[" << others << "]����ȷ" << endl;
				return 0;
			}
			if (len < (upper + lower + num + others)) {
				cout << "�����ַ�����֮��[" << upper << "+" << lower << "+" << num << "+" << others << "]���������볤��[" << len << "]" << endl;
				return 0;
			}
		}
		else {
			cout << "���볤��[" << len << "]����ȷ" << endl;
			return 0;
		}
	}
	cout << len << " " << upper << " " << lower << " " << num << " " << others << endl;

	
		for (i = 0; i < 10; i++) {
			sum_u = upper; sum_l = lower; sum_n = num; sum_o = others;
			int unknown = len - sum_u - sum_n - sum_l - sum_o;
			for (int plus = 0; plus < unknown; plus++) {
				int ran= rand() % 4;
				if (ran == 0) {
					sum_u++;
				}
				if (ran == 1) {
					sum_l++;
				}
				if (ran == 2) {
					sum_o++;
				}
				if (ran == 3) {
					sum_n++;
				}
			}
			for (j = 0; j < len; j++) {
				int ran = rand() % 4;
				if (ran == 0&& sum_u!=0) {
					pw[i][j] = rand() % 26 + 'A';
					sum_u--;
				}

				if (ran == 1 && sum_l != 0) {
					pw[i][j] = rand() % 26 + 'a';
					sum_l--;
				}

				if (ran == 2 && sum_n != 0){
					pw[i][j] = rand() % 10 + '0';
					sum_n--;
				}
				if (ran == 3 && sum_o != 0) {
					pw[i][j] = other[rand() % 15];
					sum_o--;
				}
				if (pw[i][j] == 0) {
					j--;
				}
			}
		}
		
	for (i = 0; i < 10; i++) {
		for (j = 0; j < len; j++) {
			cout << pw[i][j];
		}
		cout << endl;
	}
	return 0;
}