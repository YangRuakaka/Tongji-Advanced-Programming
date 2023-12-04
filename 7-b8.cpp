/* 2252843 ������ ��01 */
#include <iostream>
#include <conio.h>
using namespace std;

/* --- �������Ҫ�ĺ궨�塢ֻ��ȫ�ֱ����ȣ�д�ڴ˴� --- */
#define fouryears 1461
/* --- ���������ȫ�ֺ�����Ҫ������д�ڴ˴� --- */

/* ��ȫDate��Ķ��壬���г�Ա����������ʵ�֣���Ҫ�ڴ˴�����ʵ�� */
class Date {
private:
	int year;
	int month;
	int day;
	/* ������������ݳ�Ա */

public:
	/* ������Ҫ��������ĳ�Ա��������Ԫ������(������������ݳ�Ա) */
	Date(int d);
	Date();
	Date(int y , int m , int d);
	void set(int y, int m, int d);
	void get(int &y, int &m, int &d);
	void show();
	int leap();
};

/* --- ���� Date ������г�Ա����������ʵ�� --- */
Date::Date(int d)
{
	if (d > 73048) {
		year = 2099;
		month = 12;
		day = 31;
		return;
	}
	else if (d <= 0) {
		year = 1900;
		month = 1;
		day = 1;
		return;
	}
	int quadrennium = d / fouryears;
	int leftdays;
	if (quadrennium) {
		if ((d - quadrennium * fouryears) > 366) {
			year = 1900 + quadrennium*4 + (d - quadrennium * fouryears-366) / 365 + 1;
			leftdays = d - quadrennium * fouryears - 366 - (d - quadrennium * fouryears - 366) / 365 * 365;
		}
		else {
			year = 1900 + quadrennium*4;
			leftdays = d - quadrennium * fouryears;
		}
		
	}
	else {
		if (d > 366) {
			year = 1900 + 1 + (d - 366) / 365;
			leftdays = d - 366- (d - 366) / 365*365;
		}
		else {
			year = 1900;
			leftdays = d ;
		}
	}
	if (leap()) {
		if (leftdays <= 31) {
			month = 1;
			day = leftdays+1;
		}
		else if (leftdays <= 31 + 29) {
			month = 2;
			day = leftdays - 31+1;
		}
		else if (leftdays <= 31 + 29 + 31) {
			month = 3;
			day = leftdays - 31-29+1;
		}
		
		else if (leftdays <= 31 + 29 + 31 + 30) {
			month = 4;
			day = leftdays - 31 - 29-31+1;
		}
			
		else if (leftdays <= 31 + 29 + 31 + 30 + 31) {
			month = 5;
			day = leftdays - 31 - 29 - 31-30+1;
		}
			
		else if (leftdays <= 31 + 29 + 31 + 30 + 31 + 30) {
			month = 6;
			day = leftdays - 31 - 29 - 31 - 30-31+1;
		}
		
		else if (leftdays <= 31 + 29 + 31 + 30 + 31 + 30 + 31) {
			month = 7;
			day = leftdays - 31 - 29 - 31 - 30 - 31-30+1;
		}
		
		else if (leftdays <= 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31) {
			month = 8;
			day = leftdays - 31 - 29 - 31 - 30 - 31 - 30-31+1;
		}
		
		else if (leftdays <= 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30) {
			month = 9;
			day = leftdays - 31 - 29 - 31 - 30 - 31 - 30 - 31-31+1;
		}
			
		else if (leftdays <= 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) {
			month = 10;
			day = leftdays - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31-30+1;
		}
			
		else if (leftdays <= 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) {
			month = 11;
			day = leftdays - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30-31+1;
		}
		else {
			month = 12;
			day= leftdays - 31 - 29 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31-30+1;
		}
	}
	else {
		if (leftdays <= 31) {
			month = 1;
			day = leftdays+1;
		}
		else if (leftdays <= 31 + 28) {
			month = 2;
			day = leftdays - 31+1;
		}
		else if (leftdays <= 31 + 28 + 31) {
			month = 3;
			day = leftdays - 31 - 28+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30) {
			month = 4;
			day = leftdays - 31 - 28 - 31+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30 + 31) {
			month = 5;
			day = leftdays - 31 - 28 - 31 - 30+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30 + 31 + 30) {
			month = 6;
			day = leftdays - 31 - 28 - 31 - 30 - 31+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30 + 31 + 30 + 31) {
			month = 7;
			day = leftdays - 31 - 28 - 31 - 30 - 31 - 30+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) {
			month = 8;
			day = leftdays - 31 - 28 - 31 - 30 - 31 - 30 - 31+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) {
			month = 9;
			day = leftdays - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) {
			month = 10;
			day = leftdays - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30+1;
		}

		else if (leftdays <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) {
			month = 11;
			day = leftdays - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31+1;
		}
		else {
			month = 12;
			day = leftdays - 31 - 28 - 31 - 30 - 31 - 30 - 31 - 31 - 30 - 31 - 30+1;
		}
	}
}
Date::Date()
{
	year = 2000;
	month = 1;
	day = 1;
}
Date::Date(int y , int m , int d ) 
{
	if (y < 1900 || y >= 2100)
		year = 2000;
	else
		year = y;
	if (m < 1 || m >= 13)
		month = 1;
	else
		month = m;
	switch (month)
	{
		case 1:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 2:
			if (leap()) {
				if (d < 1 || d >= 30)
					day = 1;
				else
					day = d;
			}
			else {
				if (d < 1 || d >= 29)
					day = 1;
				else
					day = d;
			}
			break;
		case 3:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 4:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 5:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 6:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 7:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 8:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 9:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 10:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 11:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 12:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		default:
			break;
	}
}
void Date::set(int y, int m = 1, int d = 1)
{
	if (y < 1900 || y >= 2100)
		year = 2000;
	else
		year = y;
	if (m < 1 || m >= 13)
		month = 1;
	else
		month = m;
	switch (month)
	{
		case 1:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 2:
			if (leap()) {
				if (d < 1 || d >= 30)
					day = 1;
				else
					day = d;
			}
			else {
				if (d < 1 || d >= 29)
					day = 1;
				else
					day = d;
			}
			break;
		case 3:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 4:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 5:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 6:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 7:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 8:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 9:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 10:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		case 11:
			if (d < 1 || d >= 31)
				day = 1;
			else
				day = d;
			break;
		case 12:
			if (d < 1 || d >= 32)
				day = 1;
			else
				day = d;
			break;
		default:
			break;
	}
}
void Date::get(int &y, int &m, int &d)
{
	y = year;
	m = month;
	d = day;
}
void Date::show()
{
	cout << year << "." << month << "." << day << endl;
}
int Date::leap()
{
	if ((!(year % 4) && year % 100) || !(year % 400))
		return 1;
	else
		return 0;
}
/* --- �������Ҫ������ȫ�ֺ�����ʵ�֣�����д�ڴ˴� --- */

/* -- �滻����� -- ���в�Ҫ���κθĶ� -- ���в�Ҫɾ�� -- �ڱ��е����治Ҫ�����κ��Լ�����䣬��ҵ�ύ��ӱ��п�ʼ�ᱻ�滻 -- �滻����� -- */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void wait_for_enter()
{
	cout << endl << "���س�������";
	while (_getch() != '\r')
		;
	cout << endl << endl;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��������ʱ���滻
***************************************************************************/
int main()
{
	if (1) {
		Date d1;				//2000.1.1
		Date d2(2023, 6, 7);	//2023.6.7

		cout << "�޲μ����ι��캯�����ԣ���ȫ��ȷ��" << endl;
		cout << "==================================" << endl;

		cout << "d1Ӧ����2000.1.1��ʵ��Ϊ��";
		d1.show();
		cout << "d2Ӧ����2023.6.7��ʵ��Ϊ��";
		d2.show();

		wait_for_enter();
	}

	if (1) {
		Date d1(1870, 3, 15);  //2000.3.15
		Date d2(2112, 3, 4);   //2000.3.4
		Date d3(2005, 13, 15); //2005.1.15
		Date d4(2023, 6, 32);  //2023.6.1

		cout << "���ι��캯�����ԣ��ꡢ�¡��շǷ���" << endl;
		cout << "==================================" << endl;

		cout << "d1Ӧ����2000.3.15��ʵ��Ϊ��";
		d1.show();
		cout << "d2Ӧ����2000.3.4�� ʵ��Ϊ��";
		d2.show();
		cout << "d3Ӧ����2005.1.15��ʵ��Ϊ��";
		d3.show();
		cout << "d4Ӧ����2023.6.1�� ʵ��Ϊ��";
		d4.show();

		/* �������������˳���� */
		Date d5(1899, 2, 29);  //2000.2.29
		Date d6(1899, 2, 30);  //2000.2.1
		Date d7(1899, 13, 31); //2000.1.31
		Date d8(1899, 13, 32); //2000.1.1
		cout << "d5Ӧ����2000.2.29��ʵ��Ϊ��";
		d5.show();
		cout << "d6Ӧ����2000.2.1�� ʵ��Ϊ��";
		d6.show();
		cout << "d7Ӧ����2000.1.31��ʵ��Ϊ��";
		d7.show();
		cout << "d8Ӧ����2000.1.1�� ʵ��Ϊ��";
		d8.show();

		wait_for_enter();
	}

	if (1) {
		Date d1(2022, 2, 29); //2022.2.1
		Date d2(2020, 2, 29); //2020.2.29

		cout << "���ι��캯�����ԣ����꣩" << endl;
		cout << "========================" << endl;

		cout << "d1Ӧ����2022.2.1�� ʵ��Ϊ��";
		d1.show();
		cout << "d2Ӧ����2020.2.29��ʵ��Ϊ��";
		d2.show();

		wait_for_enter();
	}

	if (1) {
		Date d1(1);          //1900.1.1
		Date d2(73049);      //2099.12.31
		Date d3(-100);       //1900.1.1
		Date d4(80000);      //2099.12.31
		Date d5(30000);      //1982.2.19
		Date d6(45083);      //2023.6.7

		cout << "һ�ι��캯�����ԣ������Ϸ����Ƿ�ֵ" << endl;
		cout << "==================================" << endl;

		cout << "d1Ӧ����1900.1.1��  ʵ��Ϊ��";
		d1.show();
		cout << "d2Ӧ����2099.12.31��ʵ��Ϊ��";
		d2.show();
		cout << "d3Ӧ����1900.1.1��  ʵ��Ϊ��";
		d3.show();
		cout << "d4Ӧ����2099.12.31��ʵ��Ϊ��";
		d4.show();
		cout << "d5Ӧ����1982.2.19�� ʵ��Ϊ��";
		d5.show();
		cout << "d6Ӧ����2023.6.7��  ʵ��Ϊ��";
		d6.show();

		wait_for_enter();
	}


	if (1) {
		Date d1, d2, d3; //����2000.1.1

		cout << "����set����ȱʡֵ" << endl;
		cout << "=================" << endl;

		d1.set(2023, 6, 7);	//2023.6.7
		d2.set(2023, 6);	//2023.6.1
		d3.set(2023);		//2023.1.1

		cout << "d1Ӧ����2023.6.7��ʵ��Ϊ��";
		d1.show();
		cout << "d2Ӧ����2023.6.1��ʵ��Ϊ��";
		d2.show();
		cout << "d3Ӧ����2023.1.1��ʵ��Ϊ��";
		d3.show();

		wait_for_enter();
	}

	if (1) {
		Date d1, d2, d3, d4;

		cout << "����set���ꡢ�¡��շǷ�" << endl;
		cout << "=======================" << endl;

		d1.set(2112, 2, 29);  //2000.2.29
		d2.set(2019, 2, 29);  //2019.2.1
		d3.set(2023, 5, 32);  //2023.5.1
		d4.set(2023, 13, 12); //2023.1.12

		cout << "d1Ӧ����2000.2.29�� ʵ��Ϊ��";
		d1.show();
		cout << "d2Ӧ����2019.2.1��  ʵ��Ϊ��";
		d2.show();
		cout << "d3Ӧ����2023.5.1��  ʵ��Ϊ��";
		d3.show();
		cout << "d4Ӧ����2023.1.12�� ʵ��Ϊ��";
		d4.show();

		/* �����+��ȱʡֵ����������˳���� */
		Date d5(2020, 1, 31), d6(d5), d7(d5), d8(d5), d9(d5), d10(d5), d11(d5);  //2020.1.31

		d5.set(1899, 2, 29);  //2000.2.29
		d6.set(1899, 2, 30);  //2000.2.1
		d7.set(1899, 2, 0);   //2000.2.1
		d8.set(0, 2, 0);      //2020.2.1
		d9.set(0, 13, 32);    //2020.1.1
		d10.set(1899, 13, 31);  //2000.1.31
		d11.set(1899, 13, 32);  //2000.1.1
		cout << "d5Ӧ����2000.2.29�� ʵ��Ϊ��";
		d5.show();
		cout << "d6Ӧ����2000.2.1��  ʵ��Ϊ��";
		d6.show();
		cout << "d7Ӧ����2000.2.1��  ʵ��Ϊ��";
		d7.show();
		cout << "d8Ӧ����2020.2.1��  ʵ��Ϊ��";
		d8.show();
		cout << "d9Ӧ����2020.1.1��  ʵ��Ϊ��";
		d9.show();
		cout << "d10Ӧ����2000.1.31��ʵ��Ϊ��";
		d10.show();
		cout << "d11Ӧ����2000.1.1�� ʵ��Ϊ��";
		d11.show();

		wait_for_enter();
	}

	if (1) {
		Date d1(2023, 6, 7);
		int y, m, d;

		cout << "����get" << endl;
		cout << "=======" << endl;

		d1.get(y, m, d);
		cout << "Ӧ��y=2023,m=6,d=7��ʵ��Ϊ��";
		cout << "y=" << y << ",m=" << m << ",d=" << d << endl;

		wait_for_enter();
	}

	return 0;
}

