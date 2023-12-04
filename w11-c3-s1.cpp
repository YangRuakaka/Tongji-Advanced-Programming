/* 杨宇琨 信01 2252843*/
#include <iostream>
using namespace std;


int output(int k)
{
	int sum=0;
	for (; k > 0; k = k / 10) {
		sum = k % 10 + sum;
	}
	return sum;

}
int fun(int x, int base) 
{
	if (output(x) % base == 0) {
		return 1;
	}
	else {
		return 0;
	}

}

int main()
{
	int count,arr[10000], i, radix,sum=0;
	cout << "请输入数据的个数[1..10000]" << endl;
	cin >> count;
	cout << "请输入" << count << "个正整数" << endl;
	for (i = 0; i < count; i++) {
		cin >> arr[i];
	}
	cout << "请输入基数[2..9]" << endl;
	cin >> radix;
	for (i = 0; i < count;i++) {
		sum=fun(arr[i], radix)+sum;
	}
	cout << count << "个数中各位累加和被"<< radix<<"整除的个数 : " << sum << endl;

	return 0;

	
}