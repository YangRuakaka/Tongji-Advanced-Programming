/* ������ ��01 2252843 */
#include <iostream>
using namespace std;

#define  N  10	/* �������ת��10������ */

/* �������ٶ�������������ȫ�ֱ��� */

int main()
{
	/* ����в���Ҫ�ı���������ɾ��������������ӻ��滻Ϊ�������͵ı��� */
	char str[256], * p;
	int  a[N] = { 0 }, * pnum, * pa;
	bool is_num;

	/* ����Ķ��岻׼��(ɾ������Ҫ�ı�������)������Ϊ����ľ���ʵ�֣�Ҫ�󲻵��ٶ����κα����������������� */
	cout << "�����������������������ֵ��ַ���" << endl;
	p = str;
	pnum = a;
	pa = a;
	gets_s(str,256);
	while (*p != '\0' && (pa - pnum) < 10) {
		is_num = (*p >= '0' && *p <= '9');
		if (is_num ) {
			*pa = *pa * 10 + *p - '0';
			if (!(*(p + 1) >= '0' && *(p + 1) <= '9')) 
				pa++;
		}
		p++;
	}

	cout << "����" << pa - pnum<< "������" << endl;
	for (; *pnum != '\0'&&pnum<a+10; pnum++) {
		cout << *pnum << " ";
	}
	cout << endl;


	return 0;
}
