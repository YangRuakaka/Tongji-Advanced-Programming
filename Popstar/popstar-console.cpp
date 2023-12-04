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
  �������ƣ�exframe
  ��    �ܣ������ͱ������ӳٻ���
  ����������� �� �ָ����� 
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void exframe(int row, int column, bool divide)
{
	cout << endl;//����

	if (!divide)
		cout << " ";//���ָ�����

	for (int j = 0; j < column; j++) {
		if (divide)
			cout << setw(7) << j << " ";
		else
			cout << setw(6) << j;
	}
	cout << endl;//��������

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
		}//��ÿ�п�ͷ��������

		cct_setcolor(COLOR_HWHITE, COLOR_BLACK);//������ɫ

		if (i == 0)
			cout << "�X";
		else if ((i == 3 * row + 1 && !divide) || (i == 4 * row && divide))
			cout << "�^";
		else {
			if (!divide)
				cout << "�U";
			else {
				if (i % 4 == 0)
					cout << "�d";
				else
					cout << "�U";
			}
		}//��ÿ�п�ͷ�Ŀ�

		for (int j = 0; j < (divide ? 8 * column - 2 : 6 * column); j = j + 2) {
			if (!divide) {
				if (i == 0 || i == 3 * row + 1)
					cout << "�T";
				else
					cout << "  ";
			}//������ָ���ֻ�ڵ�һ�к����һ�л��� �����л��ո�
			else {
				if (!(i % 4)) {
					if ((j + 2) % 8)
						cout << "�T";
					else {
						if (i == 0)
							cout << "�j";
						else if (i == 4 * row)
							cout << "�m";
						else
							cout << "�p";
					}
				}
				else {
					if (!((j + 2) % 8))
						cout << "�U";
					else
						cout << "  ";
				}
			}//�ָ���ÿ���ĸ����ӿ���һ�ηָ��ߵ�����

			if (!(j % 3))
				Sleep(1);//�ӳ�Ч��

		}//��ÿ���м�Ŀ�

		if (!divide) {
			if (i == 0)
				cout << "�[" << endl;
			else if (i == 3 * row + 1)
				cout << "�a" << endl;
			else
				cout << "�U" << endl;
		}
		else {
			if (i == 0)
				cout << "�[" << endl;
			else if (i == 4 * row + 1)
				cout << "�a" << endl;
			else if (!(i % 4))
				cout << "�g" << endl;
			else
				cout << "�U" << endl;
		}//��ÿ�н�β�Ŀ�

		cct_setcolor(COLOR_BLACK, COLOR_WHITE);//�ָ�ȱʡ��ɫ����
	}
}

/***************************************************************************
  �������ƣ�inframe
  ��    �ܣ����ڿ�����ɫ�飩
  ����������� �� �����׵�ַ �ָ�����
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void inframe(int row, int column, char arr[][10], bool divide)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
	
				cct_setcolor(arr[i][j] - '0', COLOR_BLACK);//�������ǵ���ɫ

				cct_gotoxy(4 + j * (divide ? 8 : 6), 3 + i * (divide ? 4 : 3));
				cout << "�X�T�[";
				cct_gotoxy(4 + j * (divide ? 8 : 6), 4 + i * (divide ? 4 : 3));
				cout << "�U��U";
				cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + i * (divide ? 4 : 3));
				cout << "�^�T�a";//һ���Ի��������ǣ���һ��������

		}
	}
	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//�ָ�ȱʡ��ɫ����
}

/***************************************************************************
  �������ƣ�centralhighlight
  ��    �ܣ�ѡ�к�ѡ�еĸ�����ʾ����
  ���������XY������ �����׵�ַ �ָ����� ��һ��ѡ�е�����
  �� �� ֵ��void
  ˵    ����ʹ�ñ�ǹ�������
****************************************************************************/
void centralhighlight(char ch_X, char ch_Y, char arr[][10], bool divide)
{
	cct_setcolor(arr[ch_Y - 'A'][ch_X - '0'] - '0'-'*', COLOR_HWHITE);//��������ɫ

	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 3 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "�X�T�[";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 4 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "�U��U";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 5 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "�^�T�a";

	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//�ָ�ȱʡ��ɫ����
}

/***************************************************************************
  �������ƣ�highlight
  ��    �ܣ�����ĳһ��ɫ��
  ���������XY������ �����׵�ַ �ָ�����
  �� �� ֵ��void
  ˵    ����ʹ��δ��ǵ�����
****************************************************************************/
void highlight(char ch_X, char ch_Y, char arr[][10], bool divide)
{
	cct_setcolor(arr[ch_Y - 'A'][ch_X - '0'] - '0', COLOR_WHITE);//������ɫ����

	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 3 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "�X�T�[";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 4 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "�U��U";
	cct_gotoxy(4 + (ch_X - '0') * (divide ? 8 : 6), 5 + (ch_Y - 'A') * (divide ? 4 : 3));
	cout << "�^�T�a";

	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//�ָ�ȱʡ��ɫ����
}

/***************************************************************************
  �������ƣ�dishighlight
  ��    �ܣ�ȡ������ĳһ������
  �����������XY������ �����׵�ַ �ָ����� 
  �� �� ֵ��void
  ˵    ����ʹ��δ��ǹ�������
****************************************************************************/
void dishighlight(char old_X, char old_Y, char arr[][10], bool divide)
{
	cct_setcolor(arr[old_Y - 'A'][old_X - '0'] - '0', COLOR_BLACK);//ȡ��������ɫ����

	cct_gotoxy(4 + (old_X - '0') * (divide ? 8 : 6), 3 + (old_Y - 'A') * (divide ? 4 : 3));
	cout << "�X�T�[";
	cct_gotoxy(4 + (old_X - '0') * (divide ? 8 : 6), 4 + (old_Y - 'A') * (divide ? 4 : 3));
	cout << "�U��U";
	cct_gotoxy(4 + (old_X - '0') * (divide ? 8 : 6), 5 + (old_Y - 'A') * (divide ? 4 : 3));
	cout << "�^�T�a";

	cct_setcolor(COLOR_BLACK, COLOR_WHITE);//�ָ�ȱʡ��ɫ����
}

/***************************************************************************
  �������ƣ�markshighlight
  ��    �ܣ������б�ǹ���ɫ�����
  ����������� �� �����׵�ַ �ָ�����
  �� �� ֵ��void
  ˵    ����ʹ�ñ�ǹ�������
****************************************************************************/
void markshighlight(char arr[][10], int row, int column, bool divide)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			if (arr[i][j] > '9' + 1) {
				arr[i][j] = arr[i][j] - '*';
				highlight(j + '0', i + 'A', arr, divide);
				arr[i][j] = arr[i][j] + '*';
				Sleep(1);//�ӳ�Ч��
			}
		}
	}

}

/***************************************************************************
  �������ƣ�marksdishighlight
  ��    �ܣ������б�ǹ���ɫ��ȡ������
  ����������� �� �����׵�ַ �ָ�����
  �� �� ֵ��void
  ˵    ����ʹ�ñ�ǹ�������
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
  �������ƣ�markseliminate
  ��    �ܣ���ʾɫ�������Ķ���
  ��������������׵�ַ �� �� �ָ�����
  �� �� ֵ��void
  ˵    ����
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
  �������ƣ�movestar
  ��    �ܣ���ʾɫ���ƶ��Ķ���
  ����������� �� �����׵�ַ �ָ����� ����
  �� �� ֵ��void
  ˵    ����
****************************************************************************/
void movestar(int row, int column, char arr[][10], bool divide)
{

	//�����ƶ�
	for (int j = 0; j < column; j++) {
		for (int i = 0; i < row; i++) {

			//������ǵ�ɫ��
			if (arr[i][j] > '9' + 1 ) {

				int bottomblank = 0, ret_i = i;//���浱ǰ�������������������
				for (; arr[i + 1][j] >= '9'+1 && (i + 1) != row; i++) {
					bottomblank++;
				}
				i = ret_i;

				//һ��ɫ�������ѭ����ÿ��ѭ������һ��ɫ����䵽�ײ���
				for (int n = i + bottomblank; n - 1 - bottomblank >= 0; n--) {
					
					arr[n][j] = arr[n - 1 - bottomblank][j];//���������λ��������ֵ

					//һ��ɫ������ѭ����ÿ��ѭ������ɫ������һ��
					for (int a = 0; a < (divide ? 4 : 3) + bottomblank * (divide ? 4 : 3); a++) {
						
						if (arr[n - 1 - bottomblank][j] - '0') {
							if ((!divide || divide && (5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a) % 4) && 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2 > 2) {
								cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
								cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2);
								cout << "      ";
							}//Ϳ��
							if ((divide && !((5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a) % 4)) && 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2 > 2) {
								cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
								cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a - 2);
								cout << "�T�T�T";
							}//���ָ���


							//��ɫ��
							cct_setcolor(arr[n - 1 - bottomblank][j] - '0', COLOR_BLACK);
							cct_gotoxy(4 + j * (divide ? 8 : 6), 3 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a + 1);
							cout << "�X�T�[";
							cct_setcolor(arr[n - 1 - bottomblank][j] - '0', COLOR_BLACK);
							cct_gotoxy(4 + j * (divide ? 8 : 6), 4 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a + 1);
							cout << "�U��U";
							cct_setcolor(arr[n - 1 - bottomblank][j] - '0', COLOR_BLACK);
							cct_gotoxy(4 + j * (divide ? 8 : 6), 5 + (n - 1 - bottomblank) * (divide ? 4 : 3) + a + 1);
							cout << "�^�T�a";

						}
						Sleep(10);
						
					}//endl of movestep


				}

				//�����ÿ�еĶ�������
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

	//�����ƶ�
	for (int j = 0; j < column; j++) {

		if (arr[row - 1][j] == '0') {

			//�����ƶ�����
			int rightblank = 0, ret_j = j;
			for (; arr[row - 1][j + 1] == '0' && (j + 1) >= 0; j++) {
				rightblank++;
			}
			j = ret_j;
			
			//��������е��ƶ���ÿ��ѭ����һ�У�
			for (int m = j; m < column - 1 - rightblank; m++) {

				//���ÿ�е��ƶ���ÿ��ѭ����ÿ���ƶ�һ����
				for (int a = 0; a < (divide ? 8 : 6) + rightblank * (divide ? 8 : 6); a = a + 2) {

					//���ÿ���ƶ�һ����ÿ��ѭ����ÿ���ƶ�һ����
					for (int n = 0; n < row; n++) {

						arr[n][m] = arr[n][m + 1 + rightblank];//���������λ���ƶ����ֵ
					
							if (arr[n][m + 1 + rightblank] != '0') {

								//Ϳ��
								if (!divide || (divide && (10 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4) % 8)) {
									cct_setcolor(COLOR_HWHITE, COLOR_HWHITE);
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 3 + n * (divide ? 4 : 3));
									cout << "  ";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 4 + n * (divide ? 4 : 3));
									cout << "  ";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 5 + n * (divide ? 4 : 3));
									cout << "  ";
								}

								//���ָ���
								if ((divide && !((10 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4) % 8))) {
									cct_setcolor(COLOR_HWHITE, COLOR_BLACK);
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 3 + n * (divide ? 4 : 3));
									cout << "�U";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 4 + n * (divide ? 4 : 3));
									cout << "�U";
									cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 4, 5 + n * (divide ? 4 : 3));
									cout << "�U";
								}

								//��ɫ��
								cct_setcolor(arr[n][m + 1 + rightblank] - '0', COLOR_BLACK);
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a - 2, 3 + n * (divide ? 4 : 3));
								cout << "�X";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a - 2, 4 + n * (divide ? 4 : 3));
								cout << "�U";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a - 2, 5 + n * (divide ? 4 : 3));
								cout << "�^";

								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a, 3 + n * (divide ? 4 : 3));
								cout << "�T";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a, 4 + n * (divide ? 4 : 3));
								cout << "��";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a, 5 + n * (divide ? 4 : 3));
								cout << "�T";

								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 2, 3 + n * (divide ? 4 : 3));
								cout << "�[";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 2, 4 + n * (divide ? 4 : 3));
								cout << "�U";
								cct_gotoxy(4 + (m + 1 + rightblank) * (divide ? 8 : 6) - a + 2, 5 + n * (divide ? 4 : 3));
								cout << "�a";

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