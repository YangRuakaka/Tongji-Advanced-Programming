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
  函数名称：menu
  功    能：
  输入参数：
  返 回 值：
  说    明：
****************************************************************************/
void menu(char option)
{
	if (option == 'A')
		option_A();
	else if (option == 'B')
		option_B();
	else if (option == 'C')
		option_C();
	else if (option == 'D')
		option_D(0);
	else if (option == 'E')
		option_E(1);
	else if (option == 'F')
		option_F(0);
	else
		option_G(1);
}

/***************************************************************************
  函数名称：main
  功    能：
  输入参数：
  返 回 值：
  说    明：
****************************************************************************/
int main()
{

	while (1) {
		cct_cls();
		cout << "--------------------------------------------" << endl;
		cout << "A.命令行找出可消除项并标识" << endl;
		cout << "B.命令行完成一次消除（分步骤显示）" << endl;
		cout << "C.命令行完成一关（分步骤显示）" << endl;
		cout << "D.伪图形界面下用鼠标选择一个色块（无分隔线）" << endl;
		cout << "E.伪图形界面下用鼠标选择一个色块（有分隔线）" << endl;
		cout << "F.伪图形界面完成一次消除（分步骤）" << endl;
		cout << "G.伪图形界面完整版" << endl;
		cout << "Q.退出" << endl;
		cout << "--------------------------------------------" << endl;
		cout << "[请选择:] ";
		while (1) {
			char ch = _getch();
			if (ch >= 'a' && ch <= 'g') {
				cout << ch;
				ch = ch - 32;
				Sleep(100);
				menu(ch);
				break;
			}
			else if (ch >= 'A' && ch <= 'G') {
				cout << ch;
				Sleep(100);
				menu(ch);
				break;
			}
			else if (ch == 'Q' || ch == 'q')
				return 0;
			else
				continue;
		}
	}

}