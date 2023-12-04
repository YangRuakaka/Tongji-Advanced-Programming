/* 2252843 杨宇琨 信01 */
#include <iostream>
using namespace std;

/* 1、不允许定义任何类型的全局变量，包括常变量及宏定义等
   2、不允许给出任何形式的全局函数
*/



/* --- 将类的定义补充完整 --- */
class Days {
private:
	int year;
	int month;
	int day;
	//除上面的三个private数据成员外，不再允许添加任何类型的数据成员

	/* 下面可以补充需要的类成员函数的定义（不提供给外界，仅供本类的其它成员函数调用，因此声明为私有，数量不限，允许不定义） */

public:
	Days(int a, int b, int c);
	
	int calc_days();     //计算是当年的第几天

	/* 下面可以补充其它需要的类成员函数的定义(体外实现)，数量不限，允许不定义 */
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



/* --- 此处给出类成员函数的体外实现 --- */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数不准动
 ***************************************************************************/
int main()
{
	if (1) {
		Days d1(2020, 3, 18);
		cout << "应该输出78， 实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 3, 18);
		cout << "应该输出77， 实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 12, 31);
		cout << "应该输出366，实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 12, 31);
		cout << "应该输出365，实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2020, 2, 29);
		cout << "应该输出60， 实际是：" << d1.calc_days() << endl;
	}

	if (1) {
		Days d1(2023, 2, 29);
		cout << "应该输出-1， 实际是：" << d1.calc_days() << endl;
	}

	return 0;
}