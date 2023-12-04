/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
static const char other[] = "!@#$%^&*-_=+,.?";

int main()
{
	srand((unsigned int)(time(0)));
	cout << "请输入密码长度(12-16)， 大写字母个数(≥2)， 小写字母个数(≥2)， 数字个数(≥2)， 其它符号个数(≥2)" << endl;
	int len, upper, lower, num, others,i,j,sum_u,sum_l,sum_n,sum_o;
	char pw[10][16] = { 0 };
	cin >> len >> upper >> lower >> num >> others;
	if (cin.good() == 0) {
		cout << "输入非法" << endl;
		return 0;
	}
	else {
		if (len >= 12 && len <= 16) {
			if (upper<2 || upper>len) {
				cout << "大写字母个数[" << upper << "]不正确" << endl;
				return 0;
			}
			if (lower<2 || lower>len) {
				cout << "小写字母个数[" << lower << "]不正确" << endl;
				return 0;
			}
			if (num<2 || num>len) {
				cout << "数字个数[" << num << "]不正确" << endl;
				return 0;
			}
			if (others<2 || others>len) {
				cout << "其它符号个数[" << others << "]不正确" << endl;
				return 0;
			}
			if (len < (upper + lower + num + others)) {
				cout << "所有字符类型之和[" << upper << "+" << lower << "+" << num << "+" << others << "]大于总密码长度[" << len << "]" << endl;
				return 0;
			}
		}
		else {
			cout << "密码长度[" << len << "]不正确" << endl;
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