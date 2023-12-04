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

extern int total;
/***************************************************************************
  �������ƣ�generatearr
  ��    �ܣ���������
  ������������������Լ������׵�ַ
  �� �� ֵ��void
  ˵    ����
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
  �������ƣ�inputnum
  ��    �ܣ������л�����
  ���������option��1��0��
  �� �� ֵ��void
  ˵    ����ʹ��option����������������л�����
****************************************************************************/
int inputnum(bool option)
{
	int i;
	while (1) {
		if (option)//����Ϊ1������
			cout << "����������(8-10)��" << endl;
		else//����Ϊ0������
			cout << "����������(8-10)��" << endl;
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
  �������ƣ�originarr
  ��    �ܣ���ʾ��ǰ����
  ������������������Լ������׵�ַ
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void originarr(int row, int column, char arr[][10])
{

	cout << "��ǰ���飺" << endl;
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
  �������ƣ�inputcoordinate
  ��    �ܣ��������겢�жϸ������Ƿ���Ч
  ������������������Լ������׵�ַ�Լ�������������
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void inputcoordinate(char* cmd, int row, int column, char arr[][10])
{
	while (1) {
		cout << "������ĸ+������ʽ[����c2]����������꣺";
		coordinates(cmd, row, column);
		if (checkvalid(cmd, arr, row, column)) {
			cout << "����Ϊ" << *cmd << "��" << *(cmd + 1) << "��" << endl;
			if (arr[cmd[0] - 'A'][cmd[1] - '0'] != '0') {
				break;
			}
			else {
				cout << endl;
				cout << "�����������Ϊ0���Ƿ�λ�ã�������������" << endl;
			}
		}
		else {
			cout << endl;
			cout << "����Ϊ" << *cmd << "��" << *(cmd + 1) << "��" << endl;
			cout << "����ľ�������λ�ô���������ֵͬ������������" << endl;
			continue;
		}
	}
}

/***************************************************************************
  �������ƣ�coordinates
  ��    �ܣ��������겢�ж������ʽ�Ƿ���ȷ
  ������������������Լ�������������
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void coordinates(char* cmd, int row, int column)
{
	char* ret = cmd;
	while (1) {

		for (; cmd - ret < 20; cmd++) {
			*cmd = 0;
		}
		cmd = ret;//��������Դ������������г�ʼ������

		int x, y;
		cct_getxy(x, y);//��ʼ�����λ��

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
		}//��������

		if (*ret >= 'A' && *ret <= 'A' + row - 1 && *(ret + 1) >= '0' && *(ret + 1) <= '0' + column - 1 && *(ret + 2) == '\r') //�����ʽ��ȷ���˳�ѭ��
			break;
		else {
			cout << endl;
			cout << "�����������������.";
			cct_gotoxy(x, y);
			cct_showch(x, y, ' ', COLOR_BLACK, COLOR_WHITE, 20);
			cct_gotoxy(x, y);
			continue;
		}
	}
}

/***************************************************************************
  �������ƣ�checkvalid
  ��    �ܣ��ж���Χ�Ƿ�����ֵͬ
  ������������� ���� ����
  �� �� ֵ���Ƿ���Χ����ֵͬ
  ˵    ����
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
  �������ƣ�search_and_mark
  ��    �ܣ��������鲢���
  ������������� ���� ����
  �� �� ֵ��void
  ˵    ����
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
  �������ƣ�dismarks
  ��    �ܣ��������鲢���
  ������������� ���� ����
  �� �� ֵ��void
  ˵    ����
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
  �������ƣ�searcharr
  ��    �ܣ���ʾ�����������
  ������������� ���� ����
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void searcharr(char* cmd,int row, int column, char arr[][10])
{

	cout << "���ҽ�����飺" << endl;
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
  �������ƣ�currentarr
  ��    �ܣ���ʾ��ǰ���飨��ͬɫ��ʶ��
  ������������� ���� ����
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void currentarr(int row, int column, char arr[][10])
{
	cout << "��ǰ���飨��ͬɫ��ʶ����" << endl;
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
  �������ƣ�end
  ��    �ܣ��˳�����
  ���������
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void end()
{
	char exit[1000] = { 0 };
	while (1) {
		cout << "��С�������������End����...";
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
  �������ƣ�confirmeliminate
  ��    �ܣ��ж��Ƿ�Ҫ����
  ���������
  �� �� ֵ��void
  ˵    ����
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
  �������ƣ�combine
  ��    �ܣ���ʾ��ֵͬ�鲢������飨��ͬ��ɫ��ʶ��������÷�
  ����������� �� �����׵�ַ
  �� �� ֵ���÷�
  ˵    ����
****************************************************************************/
int combine(int row, int column, char arr[][10])
{
	int sum = 0;

	cout << "��ֵͬ�鲢������飨��ͬɫ��ʶ����" << endl;
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
  �������ƣ�eliminate
  ��    �ܣ����һ������������ʾ������鵽��ʾ����������
  ����������� �� �����׵�ַ ����
  �� �� ֵ���÷�
  ˵    ����
****************************************************************************/
int eliminate(int row, int column, char arr[][10], char coordinate[20])
{
	while (1) {
		originarr(row, column, arr);//��ʾ���ɵ�����
		cout << endl;

		inputcoordinate(coordinate, row, column, arr);//��������
		cout << endl;

		search_and_mark(coordinate, arr, row, column);//���Ҳ��������
		searcharr(coordinate, row, column, arr);//��ʾ���ұ�Ǻ�����
		cout << endl;

		currentarr(row, column, arr);//��ʾ��ǰ����
		cout << endl;

		cout << "��ȷ���Ƿ��" << coordinate[0] << coordinate[1] << "����Χ����ֵͬ������Y/N/Q����";
		int eliminate_or_not = confirmeliminate();
		cout << endl;

		if (eliminate_or_not == 1) {
			int score = combine(row, column, arr);

			cout << endl;//����

			cout << "���ε÷֣�" << score << " " << "�ܵ÷֣�" << score << endl;

			cout << endl;//����

			cout << "���س������������������...";
			while (_getch() != '\r')
				;
			cout << endl;

			drop(row, column, arr);//������������
			droparr(row, column, arr);//��ʾ��������
			return 1;

		}

		else if (eliminate_or_not == -1) {

			for (int i = 0; i < row; i++) {
				for (int j = 0; j < column; j++) {
					if (arr[i][j] > '9' + 1) {
						arr[i][j] = arr[i][j] - '*';
					}
				}
			}//�������

		}

		else
			return 0;

	}//endl of while
}

/***************************************************************************
  �������ƣ�droparr
  ��    �ܣ���ʾ�����������
  ����������� �� �����׵�ַ 
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void droparr(int row, int column, char arr[][10])
{

	cout << "��������飺" << endl;
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
  �������ƣ�drop
  ��    �ܣ���������������������
  ����������� �� �����׵�ַ
  �� �� ֵ��void
  ˵    ����
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
  �������ƣ�check
  ��    �ܣ��ж�һ���Ƿ����
  ����������� �� �����׵�ַ
  �� �� ֵ��bool 
  ˵    ��������0����� ����1��δ���
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
  �������ƣ�mouseandkey
  ��    �ܣ�����겢�������һ��ѡ�в���������ʱ����ѡ������
  ����������� �� �����׵�ַ �ָ����� ��һ��ѡ�е�����
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void mouseandkey(int row, int column, char arr[][10], bool divide, char cmd[2])
{

	int X = 0, Y = 0;//����ʵ������
	char ch_Y, ch_X, old_Y = cmd[0],old_X = cmd[1] ;//���������
	int ret, maction;
	int keycode1, keycode2;
	int loop = 1, loop1 = 1;

	cct_enable_mouse();
	cct_setcursor(CURSOR_INVISIBLE);

	while (loop) {
		/* �����/���̣�����ֵΪ���������е�ĳһ��, ��ǰ���λ����<X,Y>�� */
		ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);

		cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
		cct_setcolor(COLOR_BLACK, COLOR_WHITE);//���ո���ɫ����
		cout << "                                                                                                   ";//������ѡ���������ʾ���

		if (ret == CCT_MOUSE_EVENT) {

			cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
			cout << "[��ǰ���] : ";

			if ((X >= 4 && X < 4 + (divide ? 8 : 6) * column && Y >= 3 && Y < 3 + (divide ? 4 : 3) * row) && (!divide || (divide && (X + 6) % 8 && (X + 5) % 8 && (Y + 2) % 4))) {

				ch_Y = 'A' + (Y - 3) / (divide ? 4 : 3);
				ch_X = '0' + (X - 4) / (divide ? 8 : 6);//����Ԥѡʱ�����������

				if (arr[ch_Y - 'A'][ch_X - '0'] == '0') {
					cout << "λ�÷Ƿ�";
					dishighlight(old_X, old_Y, arr, divide);

					ch_Y = old_Y;
					ch_X = old_X;//���ü���������꣬�Ƿ�λ�õ����겻����

					continue;
				}//�����ͣ���ڷǷ�λ�������¶�ȡ

				cout << " " << ch_Y << "��" << ch_X << "��" << endl;//����Чλ������ʾԤѡλ��

				highlight(ch_X, ch_Y, arr, divide);//����Ԥѡλ��

				if ((old_X != ch_X || old_Y != ch_Y) && old_X && old_Y)//�����������ڣ������һ�ζ�����ʱ�������ȡ��������������Ҳ����������غ���ȡ����λ�õı���
					dishighlight(old_X, old_Y, arr, divide);

				old_X = ch_X;
				old_Y = ch_Y;//����λ�õ������Ϊ������

				switch (maction) {
					case MOUSE_LEFT_BUTTON_CLICK:			//�������
					case MOUSE_LEFT_BUTTON_DOUBLE_CLICK:	//˫�����

						cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
						cout << "ѡ���� " << ch_Y << "��" << ch_X << "��         " << endl;

						cmd[0] = ch_Y;
						cmd[1] = ch_X;//��ѡ�е������������������

						return;
					default:	//�����������
						break;
				} //end of switch(maction)

			}//end of it(���λ���ںϷ�λ�ã�
			else {
				cout << "λ�÷Ƿ�";//��ʾλ�÷Ƿ�

				dishighlight(old_X, old_Y, arr, divide);//ȡ���ϴ�ѡ��λ�õķ���

			}
		} //end of if (CCT_MOUSE_EVENT)
		else if (ret == CCT_KEYBOARD_EVENT) {
			switch (keycode1) {
				case 224:
					switch (keycode2) {
						case KB_ARROW_UP:

							//����������
							ch_Y = old_Y - 1;
							ch_X = old_X;

							//�߽�����
							if (ch_Y < 'A')
								ch_Y = ch_Y + row;

							//���������꣬ȡ�������귴�ԣ���������Ϊ��Чλ�ã�
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							//������Ϊ��Ϊ����ķ���Чλ�򰴱߽����д���
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
							//����������
							ch_Y = old_Y + 1;
							ch_X = old_X;

							//�߽�����
							if (ch_Y >= 'A' + row)
								ch_Y = 'A';

							//���������꣬ȡ�������귴�ԣ���������Ϊ��Чλ�ã�
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							//������Ϊ��Ϊ����ķ���Чλ�򰴱߽����д���
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
							//����������
							ch_Y = old_Y;
							ch_X = old_X - 1;

							//�߽�����
							if (ch_X < '0')
								ch_X = ch_X + column;

							//���������꣬ȡ�������귴�ԣ���������Ϊ��Чλ�ã�
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
							}
							//������Ϊ��Ϊ����ķ���Чλ�򰴱߽����д���
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
							//����������
							ch_Y = old_Y;
							ch_X = old_X + 1;

							//�߽�����
							if (ch_X >= '0' + column) {
								ch_X = '0';
							}

							//���������꣬ȡ�������귴�ԣ���������Ϊ��Чλ�ã�
							if (arr[ch_Y - 'A'][ch_X - '0'] != '0') {
								highlight(ch_X, ch_Y, arr, divide);
								dishighlight(old_X, old_Y, arr, divide);
								
							}
							//������Ϊ��Ϊ����ķ���Чλ�򰴱߽����д���
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
					//ѡ�о�����
					ch_Y = old_Y;
					ch_X = old_X;

					highlight(ch_X, ch_Y, arr, divide);//����������

					cct_setcolor(COLOR_BLACK, COLOR_WHITE);
					cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
					cout << "ѡ���� " << ch_Y << "��" << ch_X << "��         " << endl;

					cmd[0] = ch_Y;
					cmd[1] = ch_X;
					return;

				default:
					continue;
			}//end of swicth(keycode1)

			//���������ʾ��ǰԤѡλ��
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
			cout << "[��ǰ����] : ";
			cout << " " << ch_Y << "��" << ch_X << "��" << endl;

			old_X = ch_X;
			old_Y = ch_Y;
		}//end of else if(ret == CCT_KEYBOARD_EVENT��
	} //end of while(loop)
}

/***************************************************************************
  �������ƣ�onecombination
  ��    �ܣ����һ��һ����ѡ�������Ĳ���
  ����������� �� �����׵�ַ �ָ����� ��һ��ѡ�е�����
  �� �� ֵ��bool
  ˵    ����������ֵ��0����Ч���� ����ֵΪ0����ζ�˳���Ϸ
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
		//�����̣�������������λ�ã������λ��

		mouseandkey(row, column, arr, divide, cmd);//ѡ��һ��λ��

		//�����Χ����ֵͬ

		if (checkvalid(cmd, arr, row, column)) {

			search_and_mark(cmd, arr, row, column);//�����Χ��ֵͬ
			markshighlight(arr, row, column, divide);//�������ɫ��
			centralhighlight(cmd[1], cmd[0], arr, divide);//��ѡ��ɫ��������ױ��
		}
		else {
			search_and_mark(cmd, arr, row, column);//���
			cct_showstr(0, 4 + (divide ? 4 : 3) * row, "��Χ����ֵͬ��", COLOR_BLACK, COLOR_HYELLOW);
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���,��q���Ҽ��˳�";//��ʾ��ʾ
		}

		breaker1 = 0;//������

		while (1) {
			int score, sum = 0;

			if (breaker1)//������ʹ���˷������˵���ص�Ԥѡѭ��
				break;

			ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);

			//�����귴Ӧ
			if (ret == CCT_MOUSE_EVENT) {
				//�������ںϷ�������
				if (X >= 4 && X < 4 + (divide ? 8 : 6) * column && Y >= 3 && Y < 3 + (divide ? 4 : 3) * row/* && (!divide || (divide && (X + 6) % 8 && (X + 5) % 8 && (Y + 2) % 4))*/) {

					ch_Y = 'A' + (Y - 3) / (divide ? 4 : 3);
					ch_X = '0' + (X - 4) / (divide ? 8 : 6);//����������ڵ�����

					if (ch_X != cmd[1] || ch_Y != cmd[0]) {
						if (checkvalid(cmd, arr, row, column)) {
							marksdishighlight(arr, row, column, divide);//ȡ���������ɫ��
							dismarks(cmd, arr, row, column);//��ȡ�����
						}
						else {
							dismarks(cmd, arr, row, column);//ȡ�����
							dishighlight(cmd[1], cmd[0], arr, divide);//ȡ���ϴ�ѡ��ķ���
						}
							
						cmd[1] = ch_X;
						cmd[0] = ch_Y;
						break;
					}//�������ƿ�������ѡ�е�ɫ����ֱ��break�����ʼ��Ԥѡѭ��

					switch (maction) {
						case MOUSE_RIGHT_BUTTON_CLICK:			//�����Ҽ�
						case MOUSE_RIGHT_BUTTON_DOUBLE_CLICK:	//˫���Ҽ�
							return 0;
						case MOUSE_LEFT_BUTTON_CLICK:			//�������
						case MOUSE_LEFT_BUTTON_DOUBLE_CLICK:	//˫�����
						case MOUSE_LEFTRIGHT_BUTTON_CLICK:	//ͬʱ�������Ҽ�

							if (checkvalid(cmd, arr, row, column)) {
								for (int i = 0; i < row; i++) {
									for (int j = 0; j < column; j++) {
										if (arr[i][j] > '9' + 1)
											sum++;
									}
								}//���㱾������ɫ��ĸ���

								score = sum * sum * 5;//����÷�

								total = total + score;//�����ܷ�

								cct_gotoxy(0, 0);
								cout << "���ε÷֣�" << score << " �ܷ֣�" << total << "         ";//��ʾ�����÷���ʾ

								markseliminate(arr, row, column, divide);//��ʾ��������

								cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
								cout << "�ϳ���ɣ����س����������";//��ʾ��ʾ

								while (1) {
									ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
									if (maction == MOUSE_LEFT_BUTTON_CLICK || keycode1 == 13) {
										break;
									}
									else
										continue;
								}//���������

								cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
								cout << "                              ";//������ʾ

								movestar(row, column, arr, divide);//���Ƕ���

								return 1;//���һ����������
							}
							else
								break;
							
						default://�����Ҽ�������ȫ������
							break;

					} //end of switch(maction)

				}
				else
					break;//λ�÷Ƿ����¶�ȡ

			} //end of if (CCT_MOUSE_EVENT)

			//������̷�Ӧ
			else if (ret == CCT_KEYBOARD_EVENT) {
				switch (keycode1) {
					case 224:
						switch (keycode2) {
							case KB_ARROW_UP:

								marksdishighlight(arr, row, column, divide);//ȡ���������ɫ��
								dismarks(cmd, arr, row, column);//��ȡ�����

								cmd[0] = cmd[0] - 1;
								cmd[1] = cmd[1];//������Ԥѡλ��
								if (cmd[0] < 'A')
									cmd[0] = cmd[0] + row;//�ڱ߽�ʱ����

								highlight(cmd[1], cmd[0], arr, divide);//������ѡ��λ��

								breaker1 = 1;
								break;
							case KB_ARROW_DOWN:

								marksdishighlight(arr, row, column, divide);//ȡ���������ɫ�飬��ȡ�����
								dismarks(cmd, arr, row, column);//��ȡ�����

								cmd[0] = cmd[0] + 1;
								cmd[1] = cmd[1];//������Ԥѡλ��
								if (cmd[0] >= 'A' + row)
									cmd[0] = 'A';//�ڱ߽�ʱ����

								highlight(cmd[1], cmd[0], arr, divide);//������ѡ��λ��

								breaker1 = 1;
								break;
							case KB_ARROW_LEFT:

								marksdishighlight(arr, row, column, divide);//ȡ���������ɫ�飬��ȡ�����
								dismarks(cmd, arr, row, column);//��ȡ�����

								cmd[0] = cmd[0];
								cmd[1] = cmd[1] - 1;//������Ԥѡλ��
								if (cmd[1] < '0')
									cmd[1] = cmd[1] + column;//�ڱ߽�ʱ����

								highlight(cmd[1], cmd[0], arr, divide);//������ѡ��λ��

								breaker1 = 1;
								break;
							case KB_ARROW_RIGHT:

								marksdishighlight(arr, row, column, divide);//ȡ���������ɫ�飬��ȡ�����
								dismarks(cmd, arr, row, column);//��ȡ�����

								cmd[0] = cmd[0];
								cmd[1] = cmd[1] + 1;//������Ԥѡλ��
								if (cmd[1] >= '0' + column)
									cmd[1] = '0';//�ڱ߽�ʱ����

								highlight(cmd[1], cmd[0], arr, divide);//������ѡ��λ��

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
							}//���㱾������ɫ��ĸ���

							score = sum * sum * 5;//����÷�

							total = total + score;//�����ܷ�

							cct_gotoxy(0, 0);
							cout << "���ε÷֣�" << score << " �ܷ֣�" << total << "         ";//��ʾ�����÷���ʾ

							markseliminate(arr, row, column, divide);//��ʾ��������

							cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
							cout << "�ϳ���ɣ����س����������";//��ʾ��ʾ

							while (1) {
								ret = cct_read_keyboard_and_mouse(X, Y, maction, keycode1, keycode2);
								if (maction == MOUSE_LEFT_BUTTON_CLICK || keycode1 == 13) {
									break;
								}
								else
									continue;
							}//���������

							cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
							cout << "                              ";//������ʾ

							movestar(row, column, arr, divide);//���Ƕ���

							return 1;//���һ����������
						}

					default:
						continue;

				}//end of swicth(keycode1)

				cct_setcolor(COLOR_BLACK, COLOR_WHITE);
				cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
				cout << "                                                                                                   ";
				cct_gotoxy(0, 4 + (divide ? 4 : 3) * row);
				cout << "[��ǰ����] : ";
				cout << " " << cmd[0] << "��" << cmd[1] << "��" << endl;

			}//end of else if(ret == CCT_KEYBOARD_EVENT��
		}
	}
	return 0;
}

/***************************************************************************
  �������ƣ�reset
  ��    �ܣ�ÿ���������Զ�Ԥѡһ����Чλ��
  ����������� �� �����׵�ַ �ָ����� ��һ��ѡ�е�����
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void reset(int row, int column, char arr[][10], bool divide, char cmd[2])
{
	for (int j = 0; j < column; j++) {
		for (int i = 0; i < row; i++) {
			if (arr[i][j] != '0') {
				cmd[0] = i + 'A';
				cmd[1] = j + '0';
				highlight(cmd[1], cmd[0], arr, divide);//��������λ��
				return;
			}
			else
				continue;
		}
	}
}
