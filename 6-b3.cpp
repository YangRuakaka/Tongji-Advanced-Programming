/* 杨宇琨 信01 2252843 */
#include <iostream>
using namespace std;

int main()
{
	char str[34],*p1,*p2;
	p1 = str;
	p2 = str;
	int sum=0;
	cout << "请输入一个0/1组成的字符串，长度不超过32" << endl;
	fgets(str, 33, stdin);
	while (*p1 != '\n') {
		p1++;
		p2++;
	}
	p1--;
	p2--;
	for (; p1 >= str; p1--) {
		if (*p1 == '1') {
			int j = 1;
			for (int i = 1; i < p2 - p1 + 1; i++) {
				j = j * 2;
			}
			sum = sum + j;
		}	
	}
	cout << sum << endl;
	return 0;
}