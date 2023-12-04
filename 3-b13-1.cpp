/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>  
using namespace std;

int main()
{
	int a, b;

	while (1) {
		cout << "请输入年份(2000-2030)和月份(1-12) : ";
		cin >> a >> b;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

		if (cin.good() == 0) {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.ignore(1234, '\n');
		}
		else if (a >= 2000 && a <= 2030 && b >= 1 && b <= 12)
			break;
		else {
			cout << "输入非法，请重新输入" << endl;
		}

	}
	int  c, d = 1; bool i;
	if (a % 4 == 0) {
		if (a % 100 == 0) {
			i = 0;
		}
		else {
			i = 1;
		}
	}
	else if (a % 400 == 0) {
		i = 1;
	}
	else {
		i = 0;
	}
	while (1) {
		cout << "请输入" << a << "年" << b << "月" << "1日的星期(0-6表示星期日-星期六) : ";
		cin >> c;   //读入x的方式必须是 cin>>int型变量，不允许其他方式


		if (cin.good() == 0) {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.ignore(1234, '\n');
		}
		else if (c >= 0 && c <= 6)
			break;
		else {
			cout << "输入非法，请重新输入" << endl;
		}

	}
	cout << endl;
	cout << a << "年" << b << "月的月历为:" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
		cout << setw(4 + 8 * c) << d;
		for (d = 1; d <= 30; ) {

			if ((d + c) % 7 == 0) {
				cout << endl;
				d++;
				cout << setw(4) << d;
				continue;
			}
			d++;
			cout << setw(8) << d;

		}
	}
	else if (b == 4 || b == 6 || b == 9 || b == 11) {
		cout << setw(4 + 8 * c) << d;
		for (d = 1; d <= 29; ) {

			if ((d + c) % 7 == 0) {
				cout << endl;
				d++;
				cout << setw(4) << d;
				continue;
			}
			d++;
			cout << setw(8) << d;

		}
	}
	else if (b == 2 && i == 1) {
		cout << setw(4 + 8 * c) << d;
		for (d = 1; d <= 28; ) {

			if ((d + c) % 7 == 0) {
				cout << endl;
				d++;
				cout << setw(4) << d;
				continue;
			}
			d++;
			cout << setw(8) << d;
		}
	}
	else {
		cout << setw(4 + 8 * c) << d;
		for (d = 1; d <= 27; ) {

			if ((d + c) % 7 == 0) {
				cout << endl;
				d++;
				cout << setw(4) << d;
				continue;
			}
			d++;
			cout << setw(8) << d;
		}
	}
	cout << endl;
	return 0;
}