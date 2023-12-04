/* 2252843 ������ ��01 */
#include <iostream>
using namespace std;

/* 1�����������κ����͵�ȫ�ֱ������������������궨���
   2������������κ���ʽ��ȫ�ֺ���
*/



/* --- ����Ķ��岹������ --- */
class Days {
private:
	int year;
	int month;
	int day;
	//�����������private���ݳ�Ա�⣬������������κ����͵����ݳ�Ա

	/* ������Բ�����Ҫ�����Ա�����Ķ��壨���ṩ����磬���������������Ա�������ã��������Ϊ˽�У��������ޣ��������壩 */

public:
	Days(int a, int b, int c);
	
	int calc_days();     //�����ǵ���ĵڼ���

	/* ������Բ���������Ҫ�����Ա�����Ķ���(����ʵ��)���������ޣ��������� */
	int leap();
};
Days::Days(int a, int b, int c)
{
	year = a;
	month = b;
	day = c;
}
int Days::calc_days()
{
	if (leap()) {
		switch (month) {
			case 1:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 0 + day;
			case 2:
				if (day > 29 || day <= 0)
					return -1;
				else
					return 31 + day;
			case 3:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 29 + day;
			case 4:
				if (day > 30)
					return -1;
				else
					return 31 + 29 + 31 + day;
			case 5:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 29 + 31 + 30 + day;
			case 6:
				if (day > 30)
					return -1;
				else
					return 31 + 29 + 31 + 30 + 31 + day;
			case 7:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 29 + 31 + 30 + 31 + 30 + day;
			case 8:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 29 + 31 + 30 + 31 + 30 + 31 + day;
			case 9:
				if (day > 30)
					return -1;
				else
					return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			case 10:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
			case 11:
				if (day > 30)
					return -1;
				else
					return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
			case 12:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		}
	}
	else {
		switch (month) {
			case 1:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 0 + day;
			case 2:
				if (day > 28 || day <= 0)
					return -1;
				else
					return 31 + day;
			case 3:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 28 + day;
			case 4:
				if (day > 30)
					return -1;
				else
					return 31 + 28 + 31 + day;
			case 5:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 28 + 31 + 30 + day;
			case 6:
				if (day > 30)
					return -1;
				else
					return 31 + 28 + 31 + 30 + 31 + day;
			case 7:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 28 + 31 + 30 + 31 + 30 + day;
			case 8:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
			case 9:
				if (day > 30)
					return -1;
				else
					return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			case 10:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
			case 11:
				if (day > 30)
					return -1;
				else
					return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
			case 12:
				if (day > 31 || day <= 0)
					return -1;
				else
					return 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
		}
	}
	return -1;
}
int Days::leap()
{
	if ((!(year % 4) && year % 100) || !(year % 400))
		return 1;
	else
		return 0;
}



/* --- �˴��������Ա����������ʵ�� --- */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
 ***************************************************************************/
int main()
{
	if (1) {
		Days d1(2020, 3, 18);
		cout << "Ӧ�����78�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 3, 18);
		cout << "Ӧ�����77�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 12, 31);
		cout << "Ӧ�����366��ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 12, 31);
		cout << "Ӧ�����365��ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 2, 29);
		cout << "Ӧ�����60�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 2, 29);
		cout << "Ӧ�����-1�� ʵ���ǣ�" << d1.calc_days() << endl;
	}

	return 0;
}