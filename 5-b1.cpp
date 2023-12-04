/* 杨宇琨 信01 2252843*/
#include <iostream>
using namespace std;

int main()
{
	int s[20],i,j,a,k;
	cout << "请输入任意个正整数（升序，最多20个），0或负数结束输入" << endl;
	for (i=0; i < 20; i++) {
		cin >> s[i];
		if (i == 0 && (s[i] <= 0 || cin.good() == 0)) {
			cout << "无有效输入" << endl;
			return -1;
		}
		if (s[i] <= 0 || cin.good() == 0)
		{
			break;
		}
	}
	cin.clear();
	cin.ignore(1234, '\n');
	cout << "原数组为：" << endl;
	for (j = 0; j<i; j++) {
		cout << s[j] << " ";
	}
	cout << endl;
	cout << "请输入要插入的正整数" << endl;
	cin >> a;
	cout << "插入后的数组为：" << endl;
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
