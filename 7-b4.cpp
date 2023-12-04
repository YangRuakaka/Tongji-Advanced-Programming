/* 2252843 杨宇琨 信01 */
#define _CRT_SECURE_NO_WARNINGS		//使用了VS认为unsafe的函数
#include <iostream>
#include <iomanip>
using namespace std;

/* 2252843 杨宇琨 信01 */
#define _CRT_SECURE_NO_WARNINGS		//使用了VS认为unsafe的函数
#include <iostream>
#include <iomanip>
using namespace std;


int min(int a, int b= 2147483647, int c = 2147483647, int d = 2147483647)
{
	return (a <= b ? a : b) <= (c <= d ? c : d) ? (a <= b ? a : b) : (c <= d ? c : d);
}

int main()
{
	int num;
	int arr[4];
	bool correct = 1;
	while (1) {
		while (1) {
			correct = 1;
			cout << "请输入个数num及num个正整数：" << endl;
			cin >> num;
			if (cin.good()) {
				if (num >= 2 && num <= 4)
					break;
				else {
					cout << "个数输入错误" << endl;
					return 0;
				}
			}
			else {
				cin.clear();
				cin.ignore(1234, '\n');
				continue;
			}
		}
		for (int i = 0; i < num; i++) {
			cin >> arr[i];
			if (cin.fail() || arr[i] <= 0) {
				correct = 0;
			}

		}
		if (correct)
			break;
		else {
			cin.clear();
			cin.ignore(1234, '\n');
			continue;
		}

	}
	if (num == 2)
		cout << "min=" << min(arr[0], arr[1]) << endl;
	else if (num == 3)
		cout << "min=" << min(arr[0], arr[1], arr[2]) << endl;
	else
		cout << "min=" << min(arr[0], arr[1], arr[2], arr[3]) << endl;
	return 0;
}