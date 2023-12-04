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

extern int total;
/***************************************************************************
  函数名称：generatearr
  功    能：生成数组
  输入参数：数组行列以及数组首地址
  返 回 值：void
  说    明：
****************************************************************************/
void generatearr(int row, int column, char arr[][10])
{
	srand(unsigned(time(0)));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			arr[i][j] = rand() % GAMELEVEL + '1';
		}
	}
}

/***************************************************************************
  函数名称：inputnum
  功    能：输入行或者列
  输入参数：option（1或0）
  返 回 值：void
  说    明：使用option决定输入的数字是行还是列
****************************************************************************/
int inputnum(bool option)
{
	int i;
	while (1) {
		if (option)//参数为1输入行
			cout << "请输入行数(8-10)：" << endl;
		else//参数为0输入列
			cout << "请输入列数(8-10)：" << endl;
		cin >> i;
		if (cin.good() && i >= 8 && i <= 10) {
			cin.clear();
			cin.ignore(1234, '\n');
			return i;
		}
		else {
			cin.clear();
			cin.ignore(1234, '\n');
			continue;
		}
	}
}

/***************************************************************************
  函数名称：originarr
  功    能：显示当前数组
  输入参数：数组行列以及数组首地址
  返 回 值：void
  说    明：
****************************************************************************/
void originarr(int row, int column, char arr[][10])
{

	cout << "当前数组：" << endl;
	cout << "  |";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << j;
	}
	cout << endl;
	cout << "--+";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << setfill('-') << "-";
	}
	cout << "-" << endl;
	for (int i = 0; i < row; i++) {
		cout << char('A' + i) << " |";
		for (int j = 0; j < column; j++) {
			if (arr[i][j] == '0') {
				cout << "  ";
				cct_setcolor(COLOR_HYELLOW, COLOR_BLACK);
				cout << '0';
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			}
			else
				cout << setw(3) << setfill(' ') << arr[i][j];
		}
		cout << endl;
	}

}

/***************************************************************************
  函数名称：inputcoordinate
  功    能：输入坐标并判断该坐标是否有效
  输入参数：数组行列以及数组首地址以及控制坐标数组
  返 回 值：void
  说    明：
****************************************************************************/
void inputcoordinate(char* cmd, int row, int column, char arr[][10])
{
	while (1) {
		cout << "请以字母+数字形式[例：c2]输入矩阵坐标：";
		coordinates(cmd, row, column);
		if (checkvalid(cmd, arr, row, column)) {
			cout << "输入为" << *cmd << "行" << *(cmd + 1) << "列" << endl;
			if (arr[cmd[0] - 'A'][cmd[1] - '0'] != '0') {
				break;
			}
			else {
				cout << endl;
				cout << "输入矩阵坐标为0（非法位置），请重新输入" << endl;
			}
		}
		else {
			cout << endl;
			cout << "输入为" << *cmd << "行" << *(cmd + 1) << "列" << endl;
			cout << "输入的矩阵坐标位置处无连续相同值，请重新输入" << endl;
			continue;
		}
	}
}

/***************************************************************************
  函数名称：coordinates
  功    能：输入坐标并判断输入格式是否正确
  输入参数：数组行列以及控制坐标数组
  返 回 值：void
  说    明：
****************************************************************************/
void coordinates(char* cmd, int row, int column)
{
	char* ret = cmd;
	while (1) {

		for (; cmd - ret < 20; cmd++) {
			*cmd = 0;
		}
		cmd = ret;//输入错误后对存坐标的数组进行初始化处理

		int x, y;
		cct_getxy(x, y);//初始化光标位置

		for (; cmd - ret < 20; cmd++) {
			*cmd = _getch();
			if (*cmd == '\r')
				break;
			else if (*cmd == '\b') {
				cmd--;
				if (cmd >= ret) {
					cout << "\b \b";
					cmd--;
				}
				else 
					continue;
			}
			else if (*cmd >= 'a' && *cmd <= 'z') {
				cout << *cmd;
				*cmd = *cmd - 32;
			}
			else if (*cmd >= 'A' && *cmd <= 'Z')
				cout << *cmd;
			else if (*cmd >= '0' && *cmd <= '9')
				cout << *cmd;
			else
				cmd--;
		}//输入坐标

		if (*ret >= 'A' && *ret <= 'A' + row - 1 && *(ret + 1) >= '0' && *(ret + 1) <= '0' + column - 1 && *(ret + 2) == '\r') //输入格式正确则退出循环
			break;
		else {
			cout << endl;
			cout << "输入错误，请重新输入.";
			cct_gotoxy(x, y);
			cct_showch(x, y, ' ', COLOR_BLACK, COLOR_WHITE, 20);
			cct_gotoxy(x, y);
			continue;
		}
	}
}

/***************************************************************************
  函数名称：checkvalid
  功    能：判断周围是否有相同值
  输入参数：坐标 数组 行列
  返 回 值：是否周围有相同值
  说    明：
****************************************************************************/
int checkvalid(char* cmd, char arr[][10], int row, int column)
{
	if (arr[*cmd - 'A'][*(cmd + 1) - '0'] == arr[*cmd - 'A'][*(cmd + 1) - '0' + 1] && *(cmd + 1) - '0' + 1 < column)
		return 1;
	else if (arr[*cmd - 'A'][*(cmd + 1) - '0'] == arr[*cmd - 'A'][*(cmd + 1) - '0' - 1] && *(cmd + 1) - '0' - 1 >= 0)
		return 1;
	else if (arr[*cmd - 'A'][*(cmd + 1) - '0'] == arr[*cmd - 'A' + 1][*(cmd + 1) - '0'] && *cmd - 'A' + 1 < row)
		return 1;
	else if (arr[*cmd - 'A'][*(cmd + 1) - '0'] == arr[*cmd - 'A' - 1][*(cmd + 1) - '0'] && *cmd - 'A' - 1 >= 0)
		return 1;
	else
		return 0;
}

/***************************************************************************
  函数名称：search_and_mark
  功    能：查找数组并标记
  输入参数：坐标 数组 行列
  返 回 值：void
  说    明：
****************************************************************************/
void search_and_mark(char* cmd, char arr[][10], int row, int column)
{
	char* ret = cmd;
	if (arr[*cmd - 'A'][*(cmd + 1) - '0'] < '9' + 1)
		arr[*cmd - 'A'][*(cmd + 1) - '0'] = arr[*cmd - 'A'][*(cmd + 1) - '0'] + '*';
	if (arr[*ret - 'A'][*(ret + 1) - '0'] - '*' == arr[*ret - 'A'][*(ret + 1) - '0' + 1] && *(ret + 1) - '0' + 1 < column) {
		*(cmd + 1) = *(cmd + 1) + 1;
		search_and_mark(cmd, arr, row, column);
		*(cmd + 1) = *(cmd + 1) - 1;
	}

	if (arr[*ret - 'A'][*(ret + 1) - '0'] - '*' == arr[*ret - 'A'][*(ret + 1) - '0' - 1] && *(ret + 1) - '0' - 1 >= 0) {
		*(cmd + 1) = *(cmd + 1) - 1;
		search_and_mark(cmd, arr, row, column);
		*(cmd + 1) = *(cmd + 1) + 1;
	}

	if (arr[*ret - 'A'][*(ret + 1) - '0'] - '*' == arr[*ret - 'A' + 1][*(ret + 1) - '0'] && *ret - 'A' + 1 < row) {
		*cmd = *cmd + 1;
		search_and_mark(cmd, arr, row, column);
		*cmd = *cmd - 1;
	}

	if (arr[*ret - 'A'][*(ret + 1) - '0'] - '*' == arr[*ret - 'A' - 1][*(ret + 1) - '0'] && *ret - 'A' - 1 >= 0) {
		*cmd = *cmd - 1;
		search_and_mark(cmd, arr, row, column);
		*cmd = *cmd + 1;
	}

}

/***************************************************************************
  函数名称：dismarks
  功    能：查找数组并标记
  输入参数：坐标 数组 行列
  返 回 值：void
  说    明：
****************************************************************************/
void dismarks(char* cmd, char arr[][10], int row, int column)
{
	char* ret = cmd;

	if (arr[*cmd - 'A'][*(cmd + 1) - '0'] > '9' + 1)
		arr[*cmd - 'A'][*(cmd + 1) - '0'] = arr[*cmd - 'A'][*(cmd + 1) - '0'] - '*';

	if (arr[*ret - 'A'][*(ret + 1) - '0' + 1] > '9' + 1 && *(ret + 1) - '0' + 1 < column) {
		*(cmd + 1) = *(cmd + 1) + 1;
		dismarks(cmd, arr, row, column);
		*(cmd + 1) = *(cmd + 1) - 1;
	}

	if ( arr[*ret - 'A'][*(ret + 1) - '0' - 1] > '9' + 1 && *(ret + 1) - '0' - 1 >= 0) {
		*(cmd + 1) = *(cmd + 1) - 1;
		dismarks(cmd, arr, row, column);
		*(cmd + 1) = *(cmd + 1) + 1;
	}

	if ( arr[*ret - 'A' + 1][*(ret + 1) - '0'] > '9' + 1 && *ret - 'A' + 1 < row) {
		*cmd = *cmd + 1;
		dismarks(cmd, arr, row, column);
		*cmd = *cmd - 1;
	}

	if (arr[*ret - 'A' - 1][*(ret + 1) - '0'] > '9' + 1 && *ret - 'A' - 1 >= 0) {
		*cmd = *cmd - 1;
		dismarks(cmd, arr, row, column);
		*cmd = *cmd + 1;
	}

}
/***************************************************************************
  函数名称：searcharr
  功    能：显示搜索后的数组
  输入参数：坐标 数组 行列
  返 回 值：void
  说    明：
****************************************************************************/
void searcharr(char* cmd,int row, int column, char arr[][10])
{

	cout << "查找结果数组：" << endl;
	cout << "  |";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << j;
	}
	cout << endl;
	cout << "--+";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << setfill('-') << "-";
	}
	cout << "-" << endl;
	for (int i = 0; i < row; i++) {
		cout << char('A' + i) << " |";
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1)
				cout << setw(3) << setfill(' ') << '*';
			else
				cout << setw(3) << setfill(' ') << '0';
		}
		cout << endl;
	}
}

/***************************************************************************
  函数名称：currentarr
  功    能：显示当前数组（不同色标识）
  输入参数：坐标 数组 行列
  返 回 值：void
  说    明：
****************************************************************************/
void currentarr(int row, int column, char arr[][10])
{
	cout << "当前数组（不同色标识）：" << endl;
	cout << "  |";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << j;
	}
	cout << endl;
	cout << "--+";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << setfill('-') << "-";
	}
	cout << "-" << endl;
	for (int i = 0; i < row; i++) {
		cout << char('A' + i) << " |";
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1) {
				cout << "  ";
				cct_setcolor(COLOR_HYELLOW, COLOR_BLACK);
				cout << char(arr[i][j] - '*');
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			}
			else
				cout << setw(3) << setfill(' ') << arr[i][j];
		}
		cout << endl;
	}

}

/***************************************************************************
  函数名称：end
  功    能：退出函数
  输入参数：
  返 回 值：void
  说    明：
****************************************************************************/
void end()
{
	char exit[1000] = { 0 };
	while (1) {
		cout << "本小题结束，请输入End继续...";
		for (int i = 0; i < 1000; i++) {
			exit[i] = 0;
		}
		for (int i = 0; i < 1000; i++) {
			exit[i] = getchar();
			if (exit[i] == '\n')
				break;
			if (exit[i] >= 'a' && exit[i] <= 'z')
				exit[i] = exit[i] - 32;
		}
		if (exit[0] == 'E' && exit[1] == 'N' && exit[2] == 'D')
			break;
		else {
			cout << endl;
		}
	}
}

/***************************************************************************
  函数名称：confirmeliminate
  功    能：判断是否要消除
  输入参数：
  返 回 值：void
  说    明：
****************************************************************************/
int confirmeliminate()
{
	int x, y;
	char cmd;
	cct_getxy(x, y);
	while (1) {
		cct_gotoxy(x, y);
		cmd = _getche();
		if (cmd == 'y' || cmd == 'n' || cmd == 'q') {
			cmd = cmd - 32;
			break;
		}
		else if (cmd == 'Y' || cmd == 'N' || cmd == 'Q')
			break;
		else
			continue;
	}
	if (cmd == 'Q')
		return 0;
	else if (cmd == 'N')
		return -1;
	else
		return 1;
}

/***************************************************************************
  函数名称：combine
  功    能：显示相同值归并后的数组（不同颜色标识）并计算得分
  输入参数：行 列 数组首地址
  返 回 值：得分
  说    明：
****************************************************************************/
int combine(int row, int column, char arr[][10])
{
	int sum = 0;

	cout << "相同值归并后的数组（不同色标识）：" << endl;
	cout << "  |";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << j;
	}
	cout << endl;

	cout << "--+";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << setfill('-') << "-";
	}
	cout << "-" << endl;

	for (int i = 0; i < row; i++) {
		cout << char('A' + i) << " |";
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1) {
				sum++;
				cout << "  ";
				cct_setcolor(COLOR_HYELLOW, COLOR_BLACK);
				cout << 0;
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			}
			else
				cout << setw(3) << setfill(' ') << arr[i][j];
		}
		cout << endl;
	}

	return sum * sum * 5;
}

/***************************************************************************
  函数名称：eliminate
  功    能：完成一整套消除，显示最初数组到显示消除后数组
  输入参数：行 列 数组首地址 坐标
  返 回 值：得分
  说    明：
****************************************************************************/
int eliminate(int row, int column, char arr[][10], char coordinate[20])
{
	while (1) {
		originarr(row, column, arr);//显示生成的数组
		cout << endl;

		inputcoordinate(coordinate, row, column, arr);//输入坐标
		cout << endl;

		search_and_mark(coordinate, arr, row, column);//查找并标记数组
		searcharr(coordinate, row, column, arr);//显示查找标记后数组
		cout << endl;

		currentarr(row, column, arr);//显示当前数组
		cout << endl;

		cout << "请确认是否把" << coordinate[0] << coordinate[1] << "及周围的相同值消除（Y/N/Q）：";
		int eliminate_or_not = confirmeliminate();
		cout << endl;

		if (eliminate_or_not == 1) {
			int score = combine(row, column, arr);

			cout << endl;//空行

			cout << "本次得分：" << score << " " << "总得分：" << score << endl;

			cout << endl;//空行

			cout << "按回车键进行数组下落操作...";
			while (_getch() != '\r')
				;
			cout << endl;

			drop(row, column, arr);//计算下落数组
			droparr(row, column, arr);//显示下落数组
			return 1;

		}

		else if (eliminate_or_not == -1) {

			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					if (arr[i][j] > '9' + 1) {
						arr[i][j] = arr[i][j] - '*';
					}
				}
			}//消除标记

		}

		else
			return 0;

	}//endl of while
}

/***************************************************************************
  函数名称：droparr
  功    能：显示消除后的数组
  输入参数：行 列 数组首地址 
  返 回 值：void
  说    明：
****************************************************************************/
void droparr(int row, int column, char arr[][10])
{

	cout << "下落后数组：" << endl;
	cout << "  |";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << j;
	}
	cout << endl;

	cout << "--+";
	for (int j = 0; j < column; j++) {
		cout << setw(3) << setfill('-') << "-";
	}
	cout << "-" << endl;

	for (int i = 0; i < row; i++) {
		cout << char('A' + i) << " |";
		for (int j = 0; j < column; j++) {
			if (arr[i][j] == '0') {
				cout << "  ";
				cct_setcolor(COLOR_HYELLOW, COLOR_BLACK);
				cout << '0';
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			}
			else
				cout << setw(3) << setfill(' ') << arr[i][j];
		}
		cout << endl;
	}

}

/***************************************************************************
  函数名称：drop
  功    能：计算消除后的下落的数组
  输入参数：行 列 数组首地址
  返 回 值：void
  说    明：
****************************************************************************/
void drop(int row, int column, char arr[][10])
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1) {
				for (int k = i; k > 0; k--) {
					arr[k][j] = arr[k - 1][j];
				}
				arr[0][j] = '0';
			}
		}
	}

	for (int j = 0; j < column; j++) {
		if (arr[row - 1][j] == '0') {
			for (int k = j; k < column - 1; k++) {
				for (int n = 0; n < row; n++) {
					arr[n][k] = arr[n][k + 1];
				}
			}
			for (int n = 0; n < row; n++) {
				arr[n][column - 1] = '0';
			}
		}
	}
}

/***************************************************************************
  函数名称：check
  功    能：判断一关是否完成
  输入参数：行 列 数组首地址
  返 回 值：bool 
  说    明：返回0则完成 返回1则还未完成
****************************************************************************/
bool check(int row, int column, char arr[][10])
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] != '0') {
				if (arr[i][j] == arr[i][j + 1] && j + 1 < column)
					return 1;
				else if (arr[i][j] == arr[i][j - 1] && j - 1 >= 0)
					return 1;
				else if (arr[i][j] == arr[i + 1][j] && i + 1 < row)
					return 1;
				else if (arr[i][j] == arr[i - 1][j] && i - 1 >= 0)
					return 1;
			}
			else
				continue;
		}
	}
	return 0;
}

/***************************************************************************
  函数名称：mouseandkey
  功    能：读鼠标并可以完成一次选中操作，结束时标亮选中坐标
  输入参数：行 列 数组首地址 分隔参数 上一次选中的坐标
  返 回 值：void
  说    明：
****************************************************************************/
void mouseandkey(int row, int column, char arr[][10], bool divide, char cmd[2])
{

	int X = 0, Y = 0;//鼠标的实际坐标
	char ch_Y, ch_X, old_Y = cmd[0],old_X = cmd[1] ;//数组的坐标
	int ret, maction;
	int keycode1, keycode2;
	int loop = 1, loop1 = 1;

	cct_enable_mouse();
	cct_setcursor(CURSOR_INVISIBLE);

	while (loop) {
		/* 读鼠标/键盘，返回值为下述操作中的某一种, 当前鼠标位置在<X,Y>处 */
		ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);

		cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
		cct_setcolor(COLOR_BLACK, COLOR_WHITE);//画空格颜色设置
		cout << "                                                                                                   ";//若重新选择则擦除提示语句

		if (ret == CCT_MOUSE_EVENT) {

			cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
			cout << "[当前鼠标] : ";

			if ((X >= 4 && X < 4 + (divide ? 8 : 6) * column && Y >= 3 && Y < 3 + (divide ? 4 : 3) * row) && (!divide || (divide && (X + 6) % 8 && (X + 5) % 8 && (Y + 2) % 4))) {

				ch_Y = 'A' + (Y - 3) / (divide ? 4 : 3);
				ch_X = '0' + (X - 4) / (divide ? 8 : 6);//计算预选时所代表的坐标

				if (arr[ch_Y - 'A'][ch_X - '0'] == '0') {
					cout << "位置非法";
					dishighlight(old_X, old_Y, arr, divide);

					ch_Y = old_Y;
					ch_X = old_X;//重置计算的新坐标，非法位置的坐标不存入

					continue;
				}//若鼠标停留在非法位置则重新读取

				cout << " " << ch_Y << "行" << ch_X << "列" << endl;//若有效位置则显示预选位置

				highlight(ch_X, ch_Y, arr, divide);//标亮预选位置

				if ((old_X != ch_X || old_Y != ch_Y) && old_X && old_Y)//如果旧坐标存在（避免第一次读坐标时错误错误取消标亮的情况）且不与新坐标重合则取消旧位置的标亮
					dishighlight(old_X, old_Y, arr, divide);

				old_X = ch_X;
				old_Y = ch_Y;//将新位置的坐标存为旧坐标

				switch (maction) {
					case MOUSE_LEFT_BUTTON_CLICK:			//按下左键
					case MOUSE_LEFT_BUTTON_DOUBLE_CLICK:	//双击左键

						cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
						cout << "选中了 " << ch_Y << "行" << ch_X << "列         " << endl;

						cmd[0] = ch_Y;
						cmd[1] = ch_X;//将选中的坐标存入坐标数组中

						return;
					default:	//其他情况不管
						break;
				} //end of switch(maction)

			}//end of it(鼠标位置在合法位置）
			else {
				cout << "位置非法";//提示位置非法

				dishighlight(old_X, old_Y, arr, divide);//取消上次选中位置的反显

			}
		} //end of if (CCT_MOUSE_EVENT)
		else if (ret == CCT_KEYBOARD_EVENT) {
			switch (keycode1) {
				case 224:
					switch (keycode2) {
						case KB_ARROW_UP:

							//计算新坐标
							ch_Y = old_Y - 1;
							ch_X = old_X;

							//边界特判
							if (ch_Y < 'A')
								ch_Y = ch_Y + row;

							//标亮新坐标，取消旧坐标反显（若新坐标为有效位置）
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							//新坐标为人为创造的非有效位则按边界特判处理
							else {
								for (; ; ch_Y--) {
									if (ch_Y < 'A') {
										ch_Y = ch_Y + row;
										if (arr[ch_Y - 'A'][ch_X - '0'] != '0')
											break;
									}
									if (arr[ch_Y - 'A'][ch_X - '0'] != '0')
										break;
						
							    }
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							break;
						case KB_ARROW_DOWN:
							//计算新坐标
							ch_Y = old_Y + 1;
							ch_X = old_X;

							//边界特判
							if (ch_Y >= 'A' + row)
								ch_Y = 'A';

							//标亮新坐标，取消旧坐标反显（若新坐标为有效位置）
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							//新坐标为人为创造的非有效位则按边界特判处理
							else {
								for (; ; ch_Y++) {
									if (arr[ch_Y - 'A'][ch_X - '0'] != '0')
										break;
								}
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							break;
						case KB_ARROW_LEFT:
							//计算新坐标
							ch_Y = old_Y;
							ch_X = old_X - 1;

							//边界特判
							if (ch_X < '0')
								ch_X = ch_X + column;

							//标亮新坐标，取消旧坐标反显（若新坐标为有效位置）
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							//新坐标为人为创造的非有效位则按边界特判处理
							else {
								for (; ; ch_X--) {
									if (ch_X - '0' < 0) {
										ch_X = ch_X + column;
										if (arr[ch_Y - 'A'][ch_X - '0'] != '0')
											break;
									}
									if (arr[ch_Y - 'A'][ch_X - '0'] != '0')
										break;
							
								}
									highlight(ch_X, ch_Y, arr, divide);
									dishighlight(old_X, old_Y, arr, divide);
							
							}
							break;
						case KB_ARROW_RIGHT:
							//计算新坐标
							ch_Y = old_Y;
							ch_X = old_X + 1;

							//边界特判
							if (ch_X >= '0' + column) {
								ch_X = '0';
							}

							//标亮新坐标，取消旧坐标反显（若新坐标为有效位置）
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
								
							}
							//新坐标为人为创造的非有效位则按边界特判处理
							else {
								for (; ; ch_X++) {
									if (ch_X - '0' >= column) {
										ch_X = '0';
										if (arr[ch_Y - 'A'][ch_X - '0'] != '0')
											break;
									}
									if (arr[ch_Y - 'A'][ch_X - '0'] != '0')
										break;
							
								}
									highlight(ch_X, ch_Y, arr, divide);
									dishighlight(old_X, old_Y, arr, divide);
							}
					}
					break;
				case 13:
					//选中旧坐标
					ch_Y = old_Y;
					ch_X = old_X;

					highlight(ch_X, ch_Y, arr, divide);//标亮旧坐标

					cct_setcolor(COLOR_BLACK, COLOR_WHITE);
					cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
					cout << "选中了 " << ch_Y << "行" << ch_X << "列         " << endl;

					cmd[0] = ch_Y;
					cmd[1] = ch_X;
					return;

				default:
					continue;
			}//end of swicth(keycode1)

			//按方向键显示当前预选位置
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
			cout << "[当前键盘] : ";
			cout << " " << ch_Y << "行" << ch_X << "列" << endl;

			old_X = ch_X;
			old_Y = ch_Y;
		}//end of else if(ret == CCT_KEYBOARD_EVENT）
	} //end of while(loop)
}

/***************************************************************************
  函数名称：onecombination
  功    能：完成一次一整套选择到消除的操作
  输入参数：行 列 数组首地址 分隔参数 上一次选中的坐标
  返 回 值：bool
  说    明：若返回值非0则有效消除 返回值为0则意味退出游戏
****************************************************************************/
bool onecombination(int row, int column, char arr[][10], bool divide, char cmd[2])
{
	bool loop = 1;
	int X = 0, Y = 0;
	char ch_Y = 'A', ch_X = '0';
	int ret, maction;
	int keycode1, keycode2;
	bool  breaker1 = 0;
	while (loop) {
		//读键盘，生成现在所在位置，传入旧位置

		mouseandkey(row, column, arr, divide, cmd);//选中一个位置

		//如果周围有相同值

		if (checkvalid(cmd, arr, row, column)) {

			search_and_mark(cmd, arr, row, column);//标记周围相同值
			markshighlight(arr, row, column, divide);//标亮标记色块
			centralhighlight(cmd[1], cmd[0], arr, divide);//对选中色块进行亮白标记
		}
		else {
			search_and_mark(cmd, arr, row, column);//标记
			cct_showstr(0, 4 + (divide ? 4 : 3) * row, "周围无相同值，", COLOR_BLACK, COLOR_HYELLOW);
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cout << "箭头键/鼠标移动，回车键/单击左键选择并结束,按q或右键退出";//显示提示
		}

		breaker1 = 0;//读键盘

		while (1) {
			int score, sum = 0;

			if (breaker1)//若键盘使用了方向键则说明回到预选循环
				break;

			ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);

			//如果鼠标反应
			if (ret == CCT_MOUSE_EVENT) {
				//如果鼠标在合法区域内
				if (X >= 4 && X < 4 + (divide ? 8 : 6) * column && Y >= 3 && Y < 3 + (divide ? 4 : 3) * row/* && (!divide || (divide && (X + 6) % 8 && (X + 5) % 8 && (Y + 2) % 4))*/) {

					ch_Y = 'A' + (Y - 3) / (divide ? 4 : 3);
					ch_X = '0' + (X - 4) / (divide ? 8 : 6);//计算鼠标现在的坐标

					if (ch_X != cmd[1] || ch_Y != cmd[0]) {
						if (checkvalid(cmd, arr, row, column)) {
							marksdishighlight(arr, row, column, divide);//取消标亮标记色块
							dismarks(cmd, arr, row, column);//并取消标记
						}
						else {
							dismarks(cmd, arr, row, column);//取消标记
							dishighlight(cmd[1], cmd[0], arr, divide);//取消上次选择的反显
						}
							
						cmd[1] = ch_X;
						cmd[0] = ch_Y;
						break;
					}//如果鼠标移开了现在选中的色块则直接break进入最开始的预选循环

					switch (maction) {
						case MOUSE_RIGHT_BUTTON_CLICK:			//按下右键
						case MOUSE_RIGHT_BUTTON_DOUBLE_CLICK:	//双击右键
							return 0;
						case MOUSE_LEFT_BUTTON_CLICK:			//按下左键
						case MOUSE_LEFT_BUTTON_DOUBLE_CLICK:	//双击左键
						case MOUSE_LEFTRIGHT_BUTTON_CLICK:	//同时按下左右键

							if (checkvalid(cmd, arr, row, column)) {
								for (int i = 0; i < row; i++) {
									for (int j = 0; j < column; j++) {
										if (arr[i][j] > '9' + 1)
											sum++;
									}
								}//计算本次消除色块的个数

								score = sum * sum * 5;//计算得分

								total = total + score;//计算总分

								cct_gotoxy(0, 0);
								cout << "本次得分：" << score << " 总分：" << total << "         ";//显示消除得分提示

								markseliminate(arr, row, column, divide);//显示消除动画

								cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
								cout << "合成完成，按回车或左键下落";//显示提示

								while (1) {
									ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
									if (maction == MOUSE_LEFT_BUTTON_CLICK || keycode1 == 13) {
										break;
									}
									else
										continue;
								}//读键盘鼠标

								cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
								cout << "                              ";//擦除提示

								movestar(row, column, arr, divide);//星星动画

								return 1;//完成一次消除操作
							}
							else
								break;
							
						default://除左右键外其他全部忽略
							break;

					} //end of switch(maction)

				}
				else
					break;//位置非法重新读取

			} //end of if (CCT_MOUSE_EVENT)

			//如果键盘反应
			else if (ret == CCT_KEYBOARD_EVENT) {
				switch (keycode1) {
					case 224:
						switch (keycode2) {
							case KB_ARROW_UP:

								marksdishighlight(arr, row, column, divide);//取消标亮标记色块
								dismarks(cmd, arr, row, column);//并取消标记

								cmd[0] = cmd[0] - 1;
								cmd[1] = cmd[1];//存入新预选位置
								if (cmd[0] < 'A')
									cmd[0] = cmd[0] + row;//在边界时特判

								highlight(cmd[1], cmd[0], arr, divide);//标亮新选择位置

								breaker1 = 1;
								break;
							case KB_ARROW_DOWN:

								marksdishighlight(arr, row, column, divide);//取消标亮标记色块，并取消标记
								dismarks(cmd, arr, row, column);//并取消标记

								cmd[0] = cmd[0] + 1;
								cmd[1] = cmd[1];//存入新预选位置
								if (cmd[0] >= 'A' + row)
									cmd[0] = 'A';//在边界时特判

								highlight(cmd[1], cmd[0], arr, divide);//标亮新选择位置

								breaker1 = 1;
								break;
							case KB_ARROW_LEFT:

								marksdishighlight(arr, row, column, divide);//取消标亮标记色块，并取消标记
								dismarks(cmd, arr, row, column);//并取消标记

								cmd[0] = cmd[0];
								cmd[1] = cmd[1] - 1;//存入新预选位置
								if (cmd[1] < '0')
									cmd[1] = cmd[1] + column;//在边界时特判

								highlight(cmd[1], cmd[0], arr, divide);//标亮新选择位置

								breaker1 = 1;
								break;
							case KB_ARROW_RIGHT:

								marksdishighlight(arr, row, column, divide);//取消标亮标记色块，并取消标记
								dismarks(cmd, arr, row, column);//并取消标记

								cmd[0] = cmd[0];
								cmd[1] = cmd[1] + 1;//存入新预选位置
								if (cmd[1] >= '0' + column)
									cmd[1] = '0';//在边界时特判

								highlight(cmd[1], cmd[0], arr, divide);//标亮新选择位置

								breaker1 = 1;
								break;
						}
						break;
					case 81:
					case 113:
						return 0;
					case 13:

						if (checkvalid(cmd, arr, row, column)) {
							for (int i = 0; i < row; i++) {
								for (int j = 0; j < column; j++) {
									if (arr[i][j] > '9' + 1)
										sum++;
								}
							}//计算本次消除色块的个数

							score = sum * sum * 5;//计算得分

							total = total + score;//计算总分

							cct_gotoxy(0, 0);
							cout << "本次得分：" << score << " 总分：" << total << "         ";//显示消除得分提示

							markseliminate(arr, row, column, divide);//显示消除动画

							cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
							cout << "合成完成，按回车或左键下落";//显示提示

							while (1) {
								ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
								if (maction == MOUSE_LEFT_BUTTON_CLICK || keycode1 == 13) {
									break;
								}
								else
									continue;
							}//读键盘鼠标

							cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
							cout << "                              ";//擦除提示

							movestar(row, column, arr, divide);//星星动画

							return 1;//完成一次消除操作
						}

					default:
						continue;

				}//end of swicth(keycode1)

				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
				cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
				cout << "                                                                                                   ";
				cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
				cout << "[当前键盘] : ";
				cout << " " << cmd[0] << "行" << cmd[1] << "列" << endl;

			}//end of else if(ret == CCT_KEYBOARD_EVENT）
		}
	}
	return 0;
}

/***************************************************************************
  函数名称：reset
  功    能：每次消除后自动预选一个有效位置
  输入参数：行 列 数组首地址 分隔参数 上一次选中的坐标
  返 回 值：void
  说    明：
****************************************************************************/
void reset(int row, int column, char arr[][10], bool divide, char cmd[2])
{
	for (int j = 0; j < column; j++) {
		for (int i = 0; i < row; i++) {
			if (arr[i][j] != '0') {
				cmd[0] = i + 'A';
				cmd[1] = j + '0';
				highlight(cmd[1], cmd[0], arr, divide);//标亮重置位置
				return;
			}
			else
				continue;
		}
	}
}
