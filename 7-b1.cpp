/* 2252843 ������ ��01 */
#define _CRT_SECURE_NO_WARNINGS		//ʹ����VS��Ϊunsafe�ĺ���
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//��getch����˲���Ҫ֧��Linux
#include <string.h>	//Dev/CB��strlen��Ҫ
using namespace std;

struct tj_time {
	int tj_year;	//��ʾ���
	int tj_month;	//��ʾ��(1-12)
	int tj_day;	//��ʾ��(1-28/29/30/31)
	int tj_hour;	//��ʾСʱ(0-23)
	int tj_minute;	//��ʾ��(0-59)
	int tj_second;	//��ʾ��(0-59)
};

/* �����ڴ˶���������Ҫ�ĺ��� */



/***************************************************************************
  �������ƣ�
  ��    �ܣ�������ʾ���ȴ��س���
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void wait_for_enter(const char* const prompt = NULL)
{
	if ((prompt == NULL) || (strlen(prompt) == 0)) //˼��һ�£�||���������������ܷ񻥻�
		cout << endl << "���س�������";
	else
		cout << endl << prompt << "�����س�������";

	while (_getch() != '\r')
		;
	cout << endl << endl;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�����ϵͳ��ת��������������ֵת��Ϊ�뱾�����ƵĽṹ�岢���
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void system_time_output(const time_t input_time)  //time_t�ı�����64λ�޷�������
{
	struct tm* tt;	//struct tm Ϊϵͳ����Ľṹ��

	tt = localtime(&input_time);	//localtimeΪϵͳ����

	/* tm_*** Ϊstruct tm�еĳ�Ա���ͱ����struct tj_time��������ݲ���ȫ���ϣ����庬���Լ������������ */
	cout << setfill('0') << setw(4) << tt->tm_year + 1900 << '-'
		<< setw(2) << tt->tm_mon + 1 << '-'
		<< setw(2) << tt->tm_mday << ' '
		<< setw(2) << tt->tm_hour << ':'
		<< setw(2) << tt->tm_min << ':'
		<< setw(2) << tt->tm_sec << endl;

	return;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ��Զ���ת������������
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void tj_time_output(const struct tj_time* const tp)
{
	/* ʵ���Զ���ṹ������������ʽ��system_time_output��ͬ */
	cout << setfill('0') << setw(4) << tp->tj_year << '-'
		<< setw(2) << tp->tj_month << '-'
		<< setw(2) << tp->tj_day << ' '
		<< setw(2) << tp->tj_hour << ':'
		<< setw(2) << tp->tj_minute << ':'
		<< setw(2) << tp->tj_second << endl;
}

int leapyear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
		return 1;
	else if (year % 400 == 0)
		return 1;
	else
		return 0;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ��Զ���ת������
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
struct tj_time* tj_time_convert(int input_time)
{
	static struct tj_time result;	//���徲̬�ֲ���������׼��

	/* ʵ�ֹ��̿�ʼ�������������Ӧ�Ķ��弰ִ����伴�� */
	int remainingseconds;
	int leap;
	input_time = input_time + 3600 * 8;
	if (1) {
		const int commonyear = 31536000;
		const int leapyear = 31622400;
		const int quadrennial = 31536000*3+ 31622400;
		int year = input_time / commonyear;
		int quadrennium = (input_time - commonyear * 2) / quadrennial;//��һ��Ϊ����//
		int remainingyears;
		if (year < 3) {
			result.tj_year = year + 1970;
			remainingseconds = input_time - commonyear * year;
		}
		else {
			if (quadrennium) {
				if ((input_time - commonyear * 2 - quadrennium * quadrennial) >= leapyear) {
					remainingyears = 1 + (input_time - commonyear * 2 - leapyear- quadrennium * quadrennial) / commonyear;
					result.tj_year = 2 + remainingyears + 4*quadrennium + 1970;
					remainingseconds = input_time - commonyear * 2 - quadrennium * quadrennial - leapyear - (input_time - commonyear * 2 - leapyear- quadrennium * quadrennial) / commonyear * commonyear;
				}
				else {
					remainingyears = 0;
					result.tj_year = 2 + remainingyears + 4*quadrennium + 1970;
					remainingseconds = input_time - commonyear * 2 - quadrennium * quadrennial;
				}

			}
			else {
				if ((input_time - commonyear * 2) >= leapyear) {
					remainingyears = 1 + (input_time - commonyear * 2 - leapyear) / commonyear;
					result.tj_year = 2 + remainingyears + 1970;
					remainingseconds = input_time - commonyear * 2 - leapyear - (input_time - commonyear * 2 - leapyear) / commonyear * commonyear;
				}
				else {
					remainingyears = 0;
					result.tj_year = 2 + remainingyears + 1970;
					remainingseconds = input_time - commonyear * 2;
				}

			}
		}
	}
	leap=leapyear(result.tj_year);
	if (1) {
		const int commonfeb = 2419200;
		const int leapfeb = 2505600;
		const int xiaoyue = 2592000;
		const int dayue = 2678400;
		if (leap == 1) {
			if (remainingseconds < dayue)
				result.tj_month = 1;
			else if (remainingseconds < (dayue + leapfeb)) {
				result.tj_month = 2;
				remainingseconds = remainingseconds - dayue;
			}
			else if (remainingseconds < (2 * dayue + leapfeb)) {
				result.tj_month = 3;
				remainingseconds = remainingseconds - (dayue + leapfeb);
			}
			else if (remainingseconds < (2 * dayue + leapfeb + xiaoyue)) {
				result.tj_month = 4;
				remainingseconds = remainingseconds - (2 * dayue + leapfeb);
			}
			else if (remainingseconds < (3 * dayue + leapfeb + xiaoyue)) {
				result.tj_month = 5;
				remainingseconds = remainingseconds - (2 * dayue + leapfeb + xiaoyue);
			}
			else if (remainingseconds < (3 * dayue + leapfeb + 2 * xiaoyue)) {
				result.tj_month = 6;
				remainingseconds = remainingseconds - (3 * dayue + leapfeb + xiaoyue);
			}
			else if (remainingseconds < (4 * dayue + leapfeb + 2 * xiaoyue)) {
				result.tj_month = 7;
				remainingseconds = remainingseconds - (3 * dayue + leapfeb + 2 * xiaoyue);
			}
			else if (remainingseconds < (5 * dayue + leapfeb + 2 * xiaoyue)) {
				result.tj_month = 8;
				remainingseconds = remainingseconds - (4 * dayue + leapfeb + 2 * xiaoyue);
			}
			else if (remainingseconds < (5 * dayue + leapfeb + 3 * xiaoyue)) {
				result.tj_month = 9;
				remainingseconds = remainingseconds - (5 * dayue + leapfeb + 2 * xiaoyue);
			}
			else if (remainingseconds < (6 * dayue + leapfeb + 3 * xiaoyue)) {
				result.tj_month = 10;
				remainingseconds = remainingseconds - (5 * dayue + leapfeb + 3 * xiaoyue);
			}
			else if (remainingseconds < (6 * dayue + leapfeb + 4 * xiaoyue)) {
				result.tj_month = 11;
				remainingseconds = remainingseconds - (6 * dayue + leapfeb + 3 * xiaoyue);
			}
			else {
				result.tj_month = 12;
				remainingseconds = remainingseconds - (6 * dayue + leapfeb + 4 * xiaoyue);
			}
		}
		else {
			if (remainingseconds < dayue)
				result.tj_month = 1;
			else if (remainingseconds < (dayue + commonfeb)) {
				result.tj_month = 2;
				remainingseconds = remainingseconds - dayue;
			}
			else if (remainingseconds < (2 * dayue + commonfeb)) {
				result.tj_month = 3;
				remainingseconds = remainingseconds - (dayue + commonfeb);
			}
			else if (remainingseconds < (2 * dayue + commonfeb + xiaoyue)) {
				result.tj_month = 4;
				remainingseconds = remainingseconds - (2 * dayue + commonfeb);
			}
			else if (remainingseconds < (3 * dayue + commonfeb + xiaoyue)) {
				result.tj_month = 5;
				remainingseconds = remainingseconds - (2 * dayue + commonfeb + xiaoyue);
			}
			else if (remainingseconds < (3 * dayue + commonfeb + 2 * xiaoyue)) {
				result.tj_month = 6;
				remainingseconds = remainingseconds - (3 * dayue + commonfeb + xiaoyue);
			}
			else if (remainingseconds < (4 * dayue + commonfeb + 2 * xiaoyue)) {
				result.tj_month = 7;
				remainingseconds = remainingseconds - (3 * dayue + commonfeb + 2 * xiaoyue);
			}
			else if (remainingseconds < (5 * dayue + commonfeb + 2 * xiaoyue)) {
				result.tj_month = 8;
				remainingseconds = remainingseconds - (4 * dayue + commonfeb + 2 * xiaoyue);
			}
			else if (remainingseconds < (5 * dayue + commonfeb + 3 * xiaoyue)) {
				result.tj_month = 9;
				remainingseconds = remainingseconds - (5 * dayue + commonfeb + 2 * xiaoyue);
			}
			else if (remainingseconds < (6 * dayue + commonfeb + 3 * xiaoyue)) {
				result.tj_month = 10;
				remainingseconds = remainingseconds - (5 * dayue + commonfeb + 3 * xiaoyue);
			}
			else if (remainingseconds < (6 * dayue + commonfeb + 4 * xiaoyue)) {
				result.tj_month = 11;
				remainingseconds = remainingseconds - (6 * dayue + commonfeb + 3 * xiaoyue);
			}
			else {
				result.tj_month = 12;
				remainingseconds = remainingseconds - (6 * dayue + commonfeb + 4 * xiaoyue);
			}

		}
	}
	if (1) {
		const int oneday=86400;
		result.tj_day = remainingseconds / oneday+1;
		remainingseconds = remainingseconds-remainingseconds / oneday * oneday;
	}
	if (1) {
		const int onehour =3600;
		result.tj_hour = remainingseconds / onehour ;
		remainingseconds = remainingseconds - remainingseconds / onehour * onehour;
	}
	if (1) {
		const int oneminute = 60;
		result.tj_minute = remainingseconds / oneminute ;
		remainingseconds = remainingseconds - remainingseconds / oneminute * oneminute;
	}
	if (1) {
		result.tj_second = remainingseconds;
	}
	
	/* ʵ�ֹ��̽��� */

	return &result;	//ע�⣬���ص��Ǿ�̬�ֲ������ĵ�ַ������䲻׼��
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	int read_time;
	struct tj_time* tp;

	for (;;) {
		cin >> read_time; //��Ϊ���������ض��򣬴˴������κ���ʾ

		/* ��������<0���˳�ѭ�� */
		if (cin.good() == 0 || read_time < 0)
			break;

		cout << "����             : " << read_time << endl;
		cout << "ϵͳת���Ľ��   : ";
		system_time_output(read_time);

		cout << "�Զ���ת���Ľ�� : ";
		tp = tj_time_convert(read_time);
		tj_time_output(tp);

		wait_for_enter();
	}

	if (1) {
		struct tj_time* tp;
		int t = (int)time(0);		//ϵͳ������ȡ��ǰϵͳʱ�䣨��1970-01-01 00:00:00��ʼ��������

		cout << "��ǰϵͳʱ��     : " << t << endl;
		cout << "ϵͳת���Ľ��   : ";
		system_time_output(t);

		cout << "�Զ���ת���Ľ�� : ";
		tp = tj_time_convert(t);
		tj_time_output(tp);

		wait_for_enter();
	}

	return 0;
}