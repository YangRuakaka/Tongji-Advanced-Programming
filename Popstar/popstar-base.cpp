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

int total = 0;

/***************************************************************************
  �������ƣ�option_A
  ��    �ܣ�ʵ��Aѡ��Ĺ���
  ���������
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void option_A()
{

	int column, row;
	char coordinate[20] = { 0 }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;//����Ϊ1�����У�����Ϊ0������
	
	cct_cls();//����

	row = inputnum(inputrow);//������
	column = inputnum(inputcolumn);//������
	generatearr(row, column, arr);//��������
	cout << endl;

	originarr(row, column, arr);//��ʾ���ɵ�����
	cout << endl;

	inputcoordinate(coordinate, row, column, arr);//��������
	cout << endl;

	search_and_mark(coordinate, arr, row, column);//���Ҳ��������
	searcharr(coordinate,row, column, arr);//��ʾ���ұ�Ǻ�����
	cout << endl;

	currentarr(row, column, arr);//��ʾ��ǰ����
	cout << endl;

	end();//����
	return;
}

/***************************************************************************
  �������ƣ�option_B
  ��    �ܣ�ʵ��Bѡ��Ĺ���
  ���������
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void option_B()
{
	int column, row;
	char coordinate[20] = { 0 }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;//����Ϊ1�����У�����Ϊ0������

	cct_cls();//����

	row = inputnum(inputrow);//������
	column = inputnum(inputcolumn);//������
	generatearr(row, column, arr);//��������
	cout << endl;

	eliminate(row, column, arr, coordinate);//��ʾһ������������

	end();
}

/***************************************************************************
  �������ƣ�option_C
  ��    �ܣ�ʵ��Cѡ��Ĺ���
  ���������
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void option_C()
{
	int column, row;
	char coordinate[20] = { 0 }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//����

	row = inputnum(inputrow);//������
	column = inputnum(inputcolumn);//������
	generatearr(row, column, arr);//��������
	cout << endl;

	while (1) {

		if (check(row, column, arr)) //�����Ϊ1�����
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
			cout << "ʣ��" << left << "��������������ؽ�����";
			cout << endl;
			cct_setcolor(COLOR_BLACK, COLOR_WHITE);
			end();
			return ;
		}//�����Ϊ0������������

		if (eliminate(row, column, arr, coordinate)) {
			cout << endl;
			cout << "�����������������س���������һ������...";
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
  �������ƣ�option_D
  ��    �ܣ�ʵ��Dѡ��Ĺ���
  ���������divide_or_not(�Ƿ񻭷ָ��ߣ�����Ϊ1�򻭣�Ϊ0�򲻻���
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void option_D(bool divide_or_not)
{
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//����

	row = inputnum(inputrow);//������
	column = inputnum(inputcolumn);//������
	generatearr(row, column, arr);//��������

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//���ô���

	exframe(row, column, divide_or_not);//�����

	cct_gotoxy(0, 0);
	cout << "��ĻĿǰ����Ϊ��" << 3 * row + 8 << "��" << 6 * column + 7 << "��" << endl;//�ڵ�һ������������

	inframe(row, column, arr, divide_or_not);//���ڿ�

	cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
	cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���";//�ڽ�����һ�������ʾ

	mouseandkey(row, column, arr, divide_or_not, coordinate);//������

	cct_gotoxy(0, 6 + (divide_or_not ? 4 : 3) * row);

	end();//�˳�����
}

/***************************************************************************
  �������ƣ�option_E
  ��    �ܣ�ʵ��Eѡ��Ĺ���
  ���������divide_or_not(�Ƿ񻭷ָ��ߣ�����Ϊ1�򻭣�Ϊ0�򲻻���
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void option_E(bool divide_or_not)
{
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//����

	row = inputnum(inputrow);//������
	column = inputnum(inputcolumn);//������
	generatearr(row, column, arr);//��������

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//���ô���

	exframe(row, column, divide_or_not);//�����

	cct_gotoxy(0, 0);
	cout << "��ĻĿǰ����Ϊ��" << 3 * row + 8 + divide_or_not * (row - 1) << "��" << 6 * column + 7 + divide_or_not * 2 * (column - 1) << "��" << endl;//��ʾ�����������

	inframe(row, column, arr, divide_or_not);//���ڿ�

	cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
	cout << "��ͷ��/����ƶ����س���/�������ѡ�񲢽���";//�ڽ�����һ�������ʾ

	mouseandkey(row, column, arr, divide_or_not, coordinate);//������

	cct_gotoxy(0, 6 + (divide_or_not ? 4 : 3) * row);

	end();//�˳�����
}

/***************************************************************************
  �������ƣ�option_F
  ��    �ܣ�ʵ��Fѡ��Ĺ���
  ���������divide_or_not(�Ƿ񻭷ָ��ߣ�����Ϊ1�򻭣�Ϊ0�򲻻���
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void option_F(bool divide_or_not)
{
	int X = 0, Y = 0;
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//����

	row = inputnum(inputrow);//������
	column = inputnum(inputcolumn);//������
	generatearr(row, column, arr);//��������

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//���ô���

	exframe(row, column, divide_or_not);//�����

	cct_gotoxy(0, 0);
	cout << "��ĻĿǰ����Ϊ��" << 3 * row + 8 + divide_or_not * (row - 1) << "��" << 6 * column + 7 + divide_or_not * 2 * (column - 1) << "��" << endl;//��ʾ�����������

	inframe(row, column, arr, divide_or_not);//���ڿ�

	cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
	cout << "��ͷ��/����ƶ����س���/�������ѡ��ѡ��һ��ɫ���q�����Ҽ�����";//�ڽ�����һ�������ʾ

	total = 0;

	onecombination(row, column, arr, divide_or_not, coordinate);//һ������

	cct_gotoxy(0, 6 + (divide_or_not ? 4 : 3) * row);

	end();//�˳�����
}

/***************************************************************************
  �������ƣ�option_G
  ��    �ܣ�ʵ��Gѡ��Ĺ���
  ���������divide_or_not(�Ƿ񻭷ָ��ߣ�����Ϊ1�򻭣�Ϊ0�򲻻���
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void option_G(bool divide_or_not)
{
		int X = 0, Y = 0;
	int column, row;
	char coordinate[20] = { 'A','0' }; char  arr[10][10] = { 0 };
	bool inputrow = 1, inputcolumn = 0;

	cct_cls();//����

	row = inputnum(inputrow);//������
	column = inputnum(inputcolumn);//������

	cct_setconsoleborder(6 * column + 7 + divide_or_not * 2 * (column - 1), 3 * row + 8 + divide_or_not * 2 * (row - 1));//���ô���

	bool loopmax = 1, onecourse = 1;
	bool initial = 1;

	total = 0;

	//ÿ��ѭ����һ��
	while (loopmax) {

		cct_cls();//����

		exframe(row, column, divide_or_not);//�����

		generatearr(row, column, arr);//��������

		if (initial) {
			cct_gotoxy(0, 0);
			cout << "��ĻĿǰ����Ϊ��" << 3 * row + 8 << "��" << 6 * column + 7 << "��" << endl;
			initial = 0;
		}//��ʼʱ��Ҫ��ʾ��Ļ�������

		inframe(row, column, arr, divide_or_not);//���ڿ�

		cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
		cout << "��ͷ��/����ƶ����س���/�������ѡ��ѡ��һ��ɫ���q�����Ҽ�����";//��ʾ��ʾ

		//ÿ��ѭ����һ���������ϼ���Ƿ�ͨ�صĲ���
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
				}//����ʣ�����

				cct_setcolor(COLOR_HYELLOW, COLOR_RED);
				cct_gotoxy(0, 4 + (divide_or_not ? 4 : 3) * row);
				cout << "ʣ��" << left << "��������������ؽ��������س����������";//�����ʾ
				cct_setcolor(COLOR_BLACK, COLOR_WHITE);

				//���㽱���÷�
				if (left > 10) {
					cct_gotoxy(0, 0);
					cout << "�����÷֣�" << 0 << " �ܷ֣�" << total << "         ";
				}
				else {
					total = total + (10 - left) * 180;
					cct_gotoxy(0, 0);
					cout << "���ε÷֣�" << (10 - left) * 180 << " �ܷ֣�" << total << "         ";
				}

				//�ȴ�������߻س�
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

			reset(row, column, arr, divide_or_not, coordinate);//�Զ���λ��ЧԤѡλ��

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
