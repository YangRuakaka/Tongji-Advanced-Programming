/* 信01 2252843 杨宇琨 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <conio.h>
#include <Windows.h>
#include "cmd_console_tools.h"
#include "popstar.h"
using namespace std;

int total = 0;

/***************************************************************************
  函数名称：option_A
  功    能：实现A选项的过程
  输入参数：
  返 回 值：void
  说    明：
****************************************************************************/
void option_A()
{

	int column, row;
	char coordinate[20] = { 0 }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;//参数为1输入行，参数为0输入列
	
	cct_cls();//清屏

	row = inputnum(inputrow);//输入行
	column = inputnum(inputcolumn);//输入列
	generatearr(row, column, arr);//生成数组
	cout << endl;

	originarr(row, column, arr);//显示生成的数组
	cout << endl;

	inputcoordinate(coordinate, row, column, arr);//输入坐标
	cout << endl;

	search_and_mark(coordinate, arr, row, column);//查找并标记数组
	searcharr(coordinate,row, column, arr);//显示查找标记后数组
	cout << endl;

	currentarr(row, column, arr);//显示当前数组
	cout << endl;

	end();//结束
	return;
}

/***************************************************************************
  函数名称：option_B
  功    能：实现B选项的过程
  输入参数：
  返 回 值：void
  说    明：
****************************************************************************/
void option_B()
{
	int column, row;
	char coordinate[20] = { 0 }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;//参数为1输入行，参数为0输入列

	cct_cls();//清屏

	row = inputnum(inputrow);//输入行
	column = inputnum(inputcolumn);//输入列
	generatearr(row, column, arr);//生成数组
	cout << endl;

	eliminate(row, column, arr, coordinate);//显示一整套消除过程

	end();
}

/***************************************************************************
  函数名称：option_C
  功    能：实现C选项的过程
  输入参数：
  返 回 值：void
  说    明：
****************************************************************************/
void option_C()
{
	int column, row;
	char coordinate[20] = { 0 }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//清屏

	row = inputnum(inputrow);//输入行
	column = inputnum(inputcolumn);//输入列
	generatearr(row, column, arr);//生成数组
	cout << endl;

	while (1) {

		if (check(row, column, arr)) //检查结果为1则继续
			;
		else {
			int left = 0;
			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					if (arr[i][j] != '0')
						left++;
				}
			}
			cct_setcolor(COLOR_HYELLOW, COLOR_RED);
			cout << "剩余" << left << "个不可消除项，本关结束！";
			cout << endl;
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			end();
			return ;
		}//检查结果为0则输出结算语句

		if (eliminate(row, column, arr, coordinate)) {
			cout << endl;
			cout << "本次消除结束，按回车键进行新一次消除...";
			while (_getch() != '\r')
				;
			cout << endl;
		}
		else {
			end();
			return;
		}

	}
}

/***************************************************************************
  函数名称：option_D
  功    能：实现D选项的过程
  输入参数：divide_or_not(是否画分割线，参数为1则画，为0则不画）
  返 回 值：void
  说    明：
****************************************************************************/
void option_D(bool divide_or_not)
{
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//清屏

	row = inputnum(inputrow);//输入行
	column = inputnum(inputcolumn);//输入列
	generatearr(row, column, arr);//生成数组

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//设置窗口

	exframe(row, column, divide_or_not);//画外框

	cct_gotoxy(0, 0);
	cout << "屏幕目前设置为：" << 3 * row + 8 << "行" << 6 * column + 7 << "列" << endl;//在第一行输出设置情况

	inframe(row, column, arr, divide_or_not);//画内框

	cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
	cout << "箭头键/鼠标移动，回车键/单击左键选择并结束";//在界面下一行输出提示

	mouseandkey(row, column, arr, divide_or_not, coordinate);//读键盘

	cct_gotoxy(0, 6 + (divide_or_not ? 4 : 3) * row);

	end();//退出程序
}

/***************************************************************************
  函数名称：option_E
  功    能：实现E选项的过程
  输入参数：divide_or_not(是否画分割线，参数为1则画，为0则不画）
  返 回 值：void
  说    明：
****************************************************************************/
void option_E(bool divide_or_not)
{
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//清屏

	row = inputnum(inputrow);//输入行
	column = inputnum(inputcolumn);//输入列
	generatearr(row, column, arr);//生成数组

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//设置窗口

	exframe(row, column, divide_or_not);//画外框

	cct_gotoxy(0, 0);
	cout << "屏幕目前设置为：" << 3 * row + 8 + divide_or_not * (row - 1) << "行" << 6 * column + 7 + divide_or_not * 2 * (column - 1) << "列" << endl;//显示窗口设置情况

	inframe(row, column, arr, divide_or_not);//画内框

	cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
	cout << "箭头键/鼠标移动，回车键/单击左键选择并结束";//在界面下一行输出提示

	mouseandkey(row, column, arr, divide_or_not, coordinate);//读键盘

	cct_gotoxy(0, 6 + (divide_or_not ? 4 : 3) * row);

	end();//退出程序
}

/***************************************************************************
  函数名称：option_F
  功    能：实现F选项的过程
  输入参数：divide_or_not(是否画分割线，参数为1则画，为0则不画）
  返 回 值：void
  说    明：
****************************************************************************/
void option_F(bool divide_or_not)
{
	int X = 0, Y = 0;
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//清屏

	row = inputnum(inputrow);//输入行
	column = inputnum(inputcolumn);//输入列
	generatearr(row, column, arr);//生成数组

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//设置窗口

	exframe(row, column, divide_or_not);//画外框

	cct_gotoxy(0, 0);
	cout << "屏幕目前设置为：" << 3 * row + 8 + divide_or_not * (row - 1) << "行" << 6 * column + 7 + divide_or_not * 2 * (column - 1) << "列" << endl;//显示窗口设置情况

	inframe(row, column, arr, divide_or_not);//画内框

	cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
	cout << "箭头键/鼠标移动，回车键/单击左键选择，选中一个色块后按q或者右键结束";//在界面下一行输出提示

	total = 0;

	onecombination(row, column, arr, divide_or_not, coordinate);//一次消除

	cct_gotoxy(0, 6 + (divide_or_not ? 4 : 3) * row);

	end();//退出程序
}

/***************************************************************************
  函数名称：option_G
  功    能：实现G选项的过程
  输入参数：divide_or_not(是否画分割线，参数为1则画，为0则不画）
  返 回 值：void
  说    明：
****************************************************************************/
void option_G(bool divide_or_not)
{
		int X = 0, Y = 0;
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//清屏

	row = inputnum(inputrow);//输入行
	column = inputnum(inputcolumn);//输入列

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//设置窗口

	bool loopmax = 1, onecourse = 1;
	bool initial = 1;

	total = 0;

	//每次循环是一关
	while (loopmax) {

		cct_cls();//清屏

		exframe(row, column, divide_or_not);//画外框

		generatearr(row, column, arr);//生成数组

		if (initial) {
			cct_gotoxy(0, 0);
			cout << "屏幕目前设置为：" << 3 * row + 8 << "行" << 6 * column + 7 << "列" << endl;
			initial = 0;
		}//开始时需要显示屏幕设置情况

		inframe(row, column, arr, divide_or_not);//画内框

		cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
		cout << "箭头键/鼠标移动，回车键/单击左键选择，选中一个色块后按q或者右键结束";//显示提示

		//每次循环是一次消除加上检查是否通关的操作
		while (onecourse) {

			if (check(row, column, arr))
				;
			else {
				int left = 0;

				for (int i = 0; i < row; i++) {
					for (int j = 0; j < column; j++) {
						if (arr[i][j] != '0')
							left++;
					}
				}//计算剩余个数

				cct_setcolor(COLOR_HYELLOW, COLOR_RED);
				cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
				cout << "剩余" << left << "个不可消除项，本关结束！按回车或左键继续";//输出提示
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);

				//计算奖励得分
				if (left > 10) {
					cct_gotoxy(0, 0);
					cout << "奖励得分：" << 0 << " 总分：" << total << "         ";
				}
				else {
					total = total + (10 - left) * 180;
					cct_gotoxy(0, 0);
					cout << "本次得分：" << (10 - left) * 180 << " 总分：" << total << "         ";
				}

				//等待左键或者回车
				while (1) {
					int ret, maction;
					int keycode1, keycode2;
					int X = 0, Y = 0;
					ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
					if (maction == MOUSE_LEFT_BUTTON_CLICK || keycode1 == 13) {
						break;
					}
					else
						continue;
				}

				break;
			}

			reset(row, column, arr, divide_or_not, coordinate);//自动定位有效预选位置

			if (onecombination(row, column, arr, divide_or_not, coordinate))
				;
			else {
				cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
				cout << "                                                                                                  " << endl;
				cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
				end();
				return;
			}

		}//end of onecourse

	}//endl of max//
	

}
