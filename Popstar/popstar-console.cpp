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

/***************************************************************************
  函数名称：exframe
  功    能：画外框和背景（延迟画）
  输入参数：行 列 分隔参数 
  返 回 值：void
  说    明：
****************************************************************************/
void exframe(int row, int column, bool divide)
{
	cout << endl;//空行

	if (!divide)
		cout << " ";//不分隔则需

	for (int j = 0; j < column; j++) {
		if (divide)
			cout << setw(7) << j << " ";
		else
			cout << setw(6) << j;
	}
	cout << endl;//画横坐标

	for (int i = 0; i < (divide ? 4 * row + 1 : 3 * row + 2); i++) {

		if (!divide) {
			if (!((i + 1) % 3))
				cout << char('A' + (i + 1) / 3 - 1) << " ";
			else
				cout << "  ";
		}
		else {
			if (!((i + 2) % 4))
				cout << char('A' + (i + 2) / 4 - 1) << " ";
			else
				cout << "  ";
		}//画每行开头的纵坐标

		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);//设置颜色

		if (i == 0)
			cout << "╔";
		else if ((i == 3 * row + 1 && !divide) || (i == 4 * row && divide))
			cout << "╚";
		else {
			if (!divide)
				cout << "║";
			else {
				if (i % 4 == 0)
					cout << "╠";
				else
					cout << "║";
			}
		}//画每行开头的框

		for (int j = 0; j < (divide ? 8 * column - 2 : 6 * column); j = j + 2) {
			if (!divide) {
				if (i == 0 || i == 3 * row + 1)
					cout << "═";
				else
					cout << "  ";
			}//如果不分隔则只在第一行和最后一行画框 其他行画空格
			else {
				if (!(i % 4)) {
					if ((j + 2) % 8)
						cout << "═";
					else {
						if (i == 0)
							cout << "╦";
						else if (i == 4 * row)
							cout << "╩";
						else
							cout << "╬";
					}
				}
				else {
					if (!((j + 2) % 8))
						cout << "║";
					else
						cout << "  ";
				}
			}//分隔则每画四个格子考虑一次分割线的特判

			if (!(j % 3))
				Sleep(1);//延迟效果

		}//画每行中间的框

		if (!divide) {
			if (i == 0)
				cout << "╗" << endl;
			else if (i == 3 * row + 1)
				cout << "╝" << endl;
			else
				cout << "║" << endl;
		}
		else {
			if (i == 0)
				cout << "╗" << endl;
			else if (i == 4 * row + 1)
				cout << "╝" << endl;
			else if (!(i % 4))
				cout << "╣" << endl;
			else
				cout << "║" << endl;
		}//画每行结尾的框

		cct_setcolor(COLOR_BLACK, COLOR_WHITE);//恢复缺省颜色设置
	}
}

/***************************************************************************
  函数名称：inframe
  功    能：画内框（星星色块）
  输入参数：行 列 数组首地址 分隔参数
  返 回 值：void
  说    明：
****************************************************************************/
void inframe(int row, int column, char arr[][10], bool divide)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
	
				cct_setcolor(arr[i][j] - '0', COLOR_BLACK);//设置星星的颜色

				cct_gotoxy(4 + j * (divide ? 8 : 6), 3 + i * (divide ? 4 : 3));
				cout << "╔═╗";
				cct_gotoxy(4 + j * (divide ? 8 : 6), 4 + i * (divide ? 4 : 3));
				cout << "║★║";
				cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + i * (divide ? 4 : 3));
				cout << "╚═╝";//一次性画三行星星，画一整个星星

		}
	}
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//恢复缺省颜色设置
}

/***************************************************************************
  函数名称：centralhighlight
  功    能：选中后选中的格子显示亮白
  输入参数：XY的坐标 数组首地址 分隔参数 上一次选中的坐标
  返 回 值：void
  说    明：使用标记过的数组
****************************************************************************/
void centralhighlight(char ch_X, char ch_Y, char arr[][10], bool divide)
{
	cct_setcolor(arr[ch_Y - 'A'][ch_X - '0'] - '0'-'*', COLOR_HWHITE);//设置亮白色

	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 3 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "╔═╗";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 4 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "║★║";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 5 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "╚═╝";

	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//恢复缺省颜色设置
}

/***************************************************************************
  函数名称：highlight
  功    能：标亮某一个色块
  输入参数：XY的坐标 数组首地址 分隔参数
  返 回 值：void
  说    明：使用未标记的数组
****************************************************************************/
void highlight(char ch_X, char ch_Y, char arr[][10], bool divide)
{
	cct_setcolor(arr[ch_Y - 'A'][ch_X - '0'] - '0', COLOR_WHITE);//反显颜色设置

	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 3 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "╔═╗";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 4 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "║★║";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 5 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "╚═╝";

	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//恢复缺省颜色设置
}

/***************************************************************************
  函数名称：dishighlight
  功    能：取消标亮某一个坐标
  输入参数：旧XY的坐标 数组首地址 分隔参数 
  返 回 值：void
  说    明：使用未标记过的数组
****************************************************************************/
void dishighlight(char old_X, char old_Y, char arr[][10], bool divide)
{
	cct_setcolor(arr[old_Y - 'A'][old_X - '0'] - '0', COLOR_BLACK);//取消反显颜色设置

	cct_gotoxy(4 + (old_X - '0') * (divide ? 8 : 6), 3 + (old_Y - 'A') * (divide ? 4 : 3));
	cout << "╔═╗";
	cct_gotoxy(4 + (old_X - '0') * (divide ? 8 : 6), 4 + (old_Y - 'A') * (divide ? 4 : 3));
	cout << "║★║";
	cct_gotoxy(4 + (old_X - '0') * (divide ? 8 : 6), 5 + (old_Y - 'A') * (divide ? 4 : 3));
	cout << "╚═╝";

	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//恢复缺省颜色设置
}

/***************************************************************************
  函数名称：markshighlight
  功    能：把所有标记过的色块标亮
  输入参数：行 列 数组首地址 分隔参数
  返 回 值：void
  说    明：使用标记过的数组
****************************************************************************/
void markshighlight(char arr[][10], int row, int column, bool divide)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1) {
				arr[i][j] = arr[i][j] - '*';
				highlight(j + '0', i + 'A', arr, divide);
				arr[i][j] = arr[i][j] + '*';
				Sleep(1);//延迟效果
			}
		}
	}

}

/***************************************************************************
  函数名称：marksdishighlight
  功    能：把所有标记过的色块取消标亮
  输入参数：行 列 数组首地址 分隔参数
  返 回 值：void
  说    明：使用标记过的数组
****************************************************************************/
void marksdishighlight(char arr[][10], int row, int column, bool divide)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1) {
				arr[i][j] = arr[i][j] - '*';
				dishighlight(j + '0', i + 'A', arr, divide);
				arr[i][j] = arr[i][j] + '*';
				Sleep(1);
			}
		}
	}
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);
}

/***************************************************************************
  函数名称：markseliminate
  功    能：显示色块消除的动画
  输入参数：数组首地址 行 列 分隔参数
  返 回 值：void
  说    明：
****************************************************************************/
void markseliminate(char arr[][10], int row, int column, bool divide)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1) {
				arr[i][j] = arr[i][j] - '*';

				cct_setcolor(COLOR_HWHITE, COLOR_BLACK);

				cct_gotoxy(4 + j * (divide ? 8 : 6), 3 + i * (divide ? 4 : 3));
				cout << "      ";
				cct_gotoxy(4 + j * (divide ? 8 : 6), 4 + i * (divide ? 4 : 3));
				cout << "      ";
				cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + i * (divide ? 4 : 3));
				cout << "      ";

				arr[i][j] = arr[i][j] + '*';
				Sleep(1);
			}
		}
	}
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);
}

/***************************************************************************
  函数名称：movestar
  功    能：显示色块移动的动画
  输入参数：行 列 数组首地址 分隔参数 坐标
  返 回 值：void
  说    明：
****************************************************************************/
void movestar(int row, int column, char arr[][10], bool divide)
{

	//纵向移动
	for (int j = 0; j < column; j++) {
		for (int i = 0; i < row; i++) {

			//碰到标记的色块
			if (arr[i][j] > '9' + 1 ) {

				int bottomblank = 0, ret_i = i;//保存当前行数，并计算下落格数
				for (; arr[i + 1][j] >= '9'+1 && (i + 1) != row; i++) {
					bottomblank++;
				}
				i = ret_i;

				//一列色块下落的循环（每次循环代表一个色块掉落到底部）
				for (int n = i + bottomblank; n - 1 - bottomblank >= 0; n--) {
					
					arr[n][j] = arr[n - 1 - bottomblank][j];//计算出消除位置下落后的值

					//一个色块下落循环（每次循环代表色块下落一格）
					for (int a = 0; a < (divide ? 4 : 3) + bottomblank * (divide ? 4 : 3); a++) {
						
						if (arr[n - 1 - bottomblank][j] - '0') {
							if ((!divide || divide && (5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a) % 4) && 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2 > 2) {
								cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
								cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2);
								cout << "      ";
							}//涂白
							if ((divide && !((5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a) % 4)) && 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2 > 2) {
								cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
								cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2);
								cout << "═══";
							}//画分割线


							//画色块
							cct_setcolor(arr[n - 1 - bottomblank][j] - '0', COLOR_BLACK);
							cct_gotoxy(4 + j * (divide ? 8 : 6), 3 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a + 1);
							cout << "╔═╗";
							cct_setcolor(arr[n - 1 - bottomblank][j] - '0', COLOR_BLACK);
							cct_gotoxy(4 + j * (divide ? 8 : 6), 4 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a + 1);
							cout << "║★║";
							cct_setcolor(arr[n - 1 - bottomblank][j] - '0', COLOR_BLACK);
							cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a + 1);
							cout << "╚═╝";

						}
						Sleep(10);
						
					}//endl of movestep


				}

				//下落后每列的顶部置零
				for (int n = 0; n < bottomblank + 1; n++) {
					arr[n][j] = '0';
					cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);

					cct_gotoxy(4 + j * (divide ? 8 : 6), 3 + n * (divide ? 4 : 3));
					cout << "      ";
					cct_gotoxy(4 + j * (divide ? 8 : 6), 4 + n * (divide ? 4 : 3));
					cout << "      ";
					cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + n * (divide ? 4 : 3));
					cout << "      ";

				}
			}
			else
				continue;
		}
	}

	//横向移动
	for (int j = 0; j < column; j++) {

		if (arr[row - 1][j] == '0') {

			//计算移动格数
			int rightblank = 0, ret_j = j;
			for (; arr[row - 1][j + 1] == '0' && (j + 1) >= 0; j++) {
				rightblank++;
			}
			j = ret_j;
			
			//完成所有列的移动（每次循环是一列）
			for (int m = j; m < column - 1 - rightblank; m++) {

				//完成每列的移动（每次循环是每列移动一步）
				for (int a = 0; a < (divide ? 8 : 6) + rightblank * (divide ? 8 : 6); a = a + 2) {

					//完成每列移动一步（每次循环是每行移动一步）
					for (int n = 0; n < row; n++) {

						arr[n][m] = arr[n][m + 1 + rightblank];//计算出消除位置移动后的值
					
							if (arr[n][m + 1 + rightblank] != '0') {

								//涂白
								if (!divide || (divide && (10 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4) % 8)) {
									cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 3 + n * (divide ? 4 : 3));
									cout << "  ";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 4 + n * (divide ? 4 : 3));
									cout << "  ";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 5 + n * (divide ? 4 : 3));
									cout << "  ";
								}

								//画分割线
								if ((divide && !((10 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4) % 8))) {
									cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 3 + n * (divide ? 4 : 3));
									cout << "║";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 4 + n * (divide ? 4 : 3));
									cout << "║";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 5 + n * (divide ? 4 : 3));
									cout << "║";
								}

								//画色块
								cct_setcolor(arr[n][m + 1 + rightblank] - '0', COLOR_BLACK);
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a - 2, 3 + n * (divide ? 4 : 3));
								cout << "╔";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a - 2, 4 + n * (divide ? 4 : 3));
								cout << "║";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a - 2, 5 + n * (divide ? 4 : 3));
								cout << "╚";

								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a, 3 + n * (divide ? 4 : 3));
								cout << "═";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a, 4 + n * (divide ? 4 : 3));
								cout << "★";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a, 5 + n * (divide ? 4 : 3));
								cout << "═";

								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 2, 3 + n * (divide ? 4 : 3));
								cout << "╗";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 2, 4 + n * (divide ? 4 : 3));
								cout << "║";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 2, 5 + n * (divide ? 4 : 3));
								cout << "╝";

							}
						
					}
					Sleep(1);
				}
			}

			for (int n = 0; n < row; n++) {
				for (int b = 0; b < rightblank + 1; b++) {
					arr[n][column - 1 - b] = '0';
					for (int k = 0; k < 3; k++) {
						cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
						if (k == 0) {
							cct_gotoxy(4 + (column - 1 - b) * (divide ? 8 : 6), 3 + n * (divide ? 4 : 3));
							cout << "      ";
						}
						else if (k == 1) {
							cct_gotoxy(4 + (column - 1 - b) * (divide ? 8 : 6), 4 + n * (divide ? 4 : 3));
							cout << "      ";
						}
						else {
							cct_gotoxy(4 + (column - 1 - b) * (divide ? 8 : 6), 5 + n * (divide ? 4 : 3));
							cout << "      ";
						}
					}
				}

			}
		}
	}
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);
}