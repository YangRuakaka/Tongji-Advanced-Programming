/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int triangle[13][13]={ {0},{1} };

void Pascal(int row)
{
	int j;
	for (j = 0; j < row; j++) {
		if (j != 0 && j != row - 1){
			Pascal(row - 1);
			triangle[row][j] = triangle[row-1][j - 1] + triangle[row-1][j];
		}
		else {
			triangle[row][j] = 1;
			
		}
	}
}
void output(int row) {
	for (int i = 1; i < row + 1; i++) {
		if (i!=row)
			cout << setfill(' ') << setw((row - i) * 3) << " ";
		for (int j = 0; j < i; j++) {
			cout << setw(6) << triangle[i][j];
		}
		cout << endl;
	}
}


int main()
{
	int row;
	cout << "请输入要打印的行数[3..13]" << endl;
	cin >> row;
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "0         1         2         3         4         5         6         7         " << endl;
	cout << "01234567890123456789012345678901234567890123456789012345678901234567890123456789" << endl;
	cout << "--------------------------------------------------------------------------------" << endl;
	Pascal(row);
	output(row);
	
	cout << "--------------------------------------------------------------------------------" << endl;
	cout << "01234567890123456789012345678901234567890123456789012345678901234567890123456789" << endl;
	cout << "0         1         2         3         4         5         6         7         " << endl;
	cout << "--------------------------------------------------------------------------------" << endl;

}