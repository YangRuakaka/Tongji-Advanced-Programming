/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>  
using namespace std;

void zeller(int y,int m,int d)
{
	int w,  c;
	
	 if (m != 1 && m != 2) {
		 c = int(y / 100) + 1;
		 y = y - int(y / 100)*100;
		 w = y + int(y / 4) + int((c-1) / 4) - (c-1) * 2 + int(13 * (m + 1) / 5) + d - 1;
    	}
	 else {
		 c = int((y-1) / 100) + 1;
		 y = y-1 - int((y - 1) / 100)*100;
		 w = y   + int(y / 4) + int((c-1) / 4) -( c-1) * 2 + int(13 * (m + 13) / 5) + d - 1;
	    }
	
	 if (w < 0) {
		 w = w + 700;
	 }
	 w = w % 7;
	 switch (w) {
		 case 0:
			 cout << "星期日" << endl;
			 break;
		 case 1:
			 cout << "星期一" << endl;
			 break;
		 case 2:
			 cout << "星期二" << endl;
			 break;
		 case 3:
			 cout << "星期三" << endl;
			 break;
		 case 4:
			 cout << "星期四" << endl;
			 break;
		 case 5:
			 cout << "星期五" << endl;
			 break;
		 case 6:
			 cout << "星期六" << endl;
			 break;

	 }
	
	}

int main()
{
	int y,  m,  d,  i;

	while (1) {
		cout << "请输入年[1900-2100]、月、日：" << endl;
		cin >> y >> m >> d;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

		if (cin.good() == 0) {
			cout << "输入非法，请重新输入" << endl;
			cin.clear();
			cin.ignore(1234, '\n');
			continue;
		}
	
		else {
			if (y < 1900 || y > 2100) {
				cout << "年份不正确，请重新输入" << endl;
				continue;
			}
			else if (m < 1 || m>12) {
				cout << "月份不正确，请重新输入" << endl;
				continue;
			}
			else {

			}
		}
		if (y % 4 == 0) {
			if (y % 100 == 0) {
				i = 0;
			}
			else {
				i = 1;
			}
		}
		else if (y % 400 == 0) {
			i = 1;
		}
		else {
			i = 0;
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
			if (d < 0 || d>31) {
				cout << "日不正确，请重新输入" << endl;
				continue;
			}
			else {
				break;
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (d < 0 || d>30) {
				cout << "日不正确，请重新输入" << endl;
				continue;
			}
			else {
				break;
			}
		}
		else if (i == 1 && m == 2) {
			if (d < 0 || d>29) {
				cout << "日不正确，请重新输入" << endl;
				continue;
			}
			else {
				break;
			}
		}
		else if (i == 0 && m == 2) {
			if (d < 0 || d>28) {
				cout << "日不正确，请重新输入" << endl;
				continue;
			}
			else {
				break;
			}
		}
		
	}
	zeller(y, m, d);
	return 0;
}


	
	
	