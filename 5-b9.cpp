/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int sodu[9][9],column,row;
	cout << "������9*9�ľ���ֵΪ1-9֮��" << endl;
	for (row = 0; row < 9; row++) {
		for (column = 0; column < 9; column++) {
			while (1) {
				cin >> sodu[row][column];
				if (cin.good() == 0) {
					cout << "�����������" << row << "��" << column << "��(���о���1��ʼ����)��ֵ" << endl;
					cin.clear();
					cin.ignore(1234, '\n');
					continue;
				}
				else if (sodu[row][column] <= 9 && sodu[row][column] >= 1) {
					break;
				}
				else {
					cout << "�����������" << row << "��" << column << "��(���о���1��ʼ����)��ֵ" << endl;
					continue;
				}

			}
		}
	}
	for (row = 0; row < 9; row++) {
		for (column = 0; column < 9; column++) {
			for (int k = column + 1; k < 9; k++) {
				if (sodu[row][column] == sodu[row][k]) {
					cout << "���������Ľ�" << endl;
					return 0;
				}
				else {
					continue;
				}
			}
		}
	}
	for (column = 0; column < 9; column++) {
		for (row = 0; row < 9; row++) {
			for (int k = row + 1; k < 9; k++) {
				if (sodu[column][row] == sodu[column][k]) {
					cout << "���������Ľ�" << endl;
					return 0;
				}
				else {
					continue;
				}
			}
		}
	}
	for (row = 0; row < 9; row = row + 3) {
		for (column = 0; column < 9; column = column + 3) {
			for (int x = row ; x < row + 3; x++) {
				for (int y = column; y < column + 3; y++) {
					for (int j = row; j < row + 3; j++) {
						for (int k = column; k < column + 3; k++) {
							if (sodu[x][y] == sodu[j][k]&&(x!=j&&y!=k)) {
								cout << "���������Ľ�" << endl;
								return 0;
							}
							else {
								continue;
							}
						}
					}
				}
			}
		}
	}
	cout << "�������Ľ�" << endl;
	return 0;
}