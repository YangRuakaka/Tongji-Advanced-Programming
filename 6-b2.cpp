/* ������ ��01 2252843 */
#include <iostream>
using namespace std;

void Palindrome(char str[],char *p1,char *p2)
{
	while (*p2 != '\n') {
		p2++;
	}
	p2--;
	for (; (p2 - p1) > 1; p2--, p1++) {
		if (*p2 == *p1)
			continue;
		else {
			cout << "no" << endl;
			return;
		}
	}
	cout << "yes" << endl;
	return;


}
int main()
{
	char str[80],*p1,*p2;
	p1 = str;
	p2 = str;
	cout << "������һ������С��80���ַ��������Ĵ���" << endl;
	fgets(str,79,stdin);
	Palindrome(str,p1,p2);
	return 0;
}