/* ��01 2252843 ������ */
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
  �������ƣ�menu
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
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
  �������ƣ�main
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
****************************************************************************/
int main()
{

	while (1) {
		cct_cls();
		cout << "--------------------------------------------" << endl;
		cout << "A.�������ҳ����������ʶ" << endl;
		cout << "B.���������һ���������ֲ�����ʾ��" << endl;
		cout << "C.���������һ�أ��ֲ�����ʾ��" << endl;
		cout << "D.αͼ�ν����������ѡ��һ��ɫ�飨�޷ָ��ߣ�" << endl;
		cout << "E.αͼ�ν����������ѡ��һ��ɫ�飨�зָ��ߣ�" << endl;
		cout << "F.αͼ�ν������һ���������ֲ��裩" << endl;
		cout << "G.αͼ�ν���������" << endl;
		cout << "Q.�˳�" << endl;
		cout << "--------------------------------------------" << endl;
		cout << "[��ѡ��:] ";
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