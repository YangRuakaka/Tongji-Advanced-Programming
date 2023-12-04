/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>  
using namespace std;

int zeller(int y, int m)
{
	int w, c;

	if (m != 1 && m != 2) {
		c = int(y / 100) + 1;
		y = y - int(y / 100) * 100;
		w = y + int(y / 4) + int((c - 1) / 4) - (c - 1) * 2 + int(13 * (m + 1) / 5) ;
	}
	else {
		c = int((y - 1) / 100) + 1;
		y = y - 1 - int((y - 1) / 100) * 100;
		w = y + int(y / 4) + int((c - 1) / 4) - (c - 1) * 2 + int(13 * (m + 13) / 5);
	}

	if (w < 0) {
		w = w + 700;
	}
	w = w % 7;


	return w;
}

int main()
{
	int year,i;
	int bigmonth[31],smallmonth[30], leapfeb[29], normalfeb[28];
	bool leap;
	int j = 0, f = 0, m = 0, apr = 0, may = 0, june = 0, july = 0, aug = 0, sep = 0, o = 0, nov = 0, dec = 0;
	while (1) {
		cout << "请输入年份[1900-2100]" << endl;
		cin >> year;
		if (cin.good() == 0) {

			cin.clear();
			cin.ignore(1234, '\n');
		}
		else if (year >= 1900 && year <= 2100)
			break;
		else {
			continue;
		}
	}
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		leap = 1;
	else
		leap = 0;
	
	
	for (i = 0; i < 31; i++) {
		bigmonth[i] = i + 1;
		if (i < 30)
			smallmonth[i] = i + 1;
		if (i < 29)
			leapfeb[i] = i + 1;
		if (i < 28)
			normalfeb[i] = i + 1;
	}
	cout << year << "年的日历:" << endl;
	cout << endl;
	cout << "            1月                             2月                             3月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
	if(zeller(year, 1)!=0)
	     cout <<setfill(' ') << setw(4 * zeller(year, 1)) << " ";//第一排//

	for (int k = zeller(year, 1); k < 7; k++, j++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[j] << " ";
	cout << "    ";
	if (leap) {
		if (zeller(year, 2) != 0)
			cout << setfill(' ') << setw(4 * zeller(year, 2)) << " ";

		for (int k = zeller(year, 2); k <7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << leapfeb[f] << " ";
		cout << "    ";
	}
	else {
		if (zeller(year, 2) != 0)
			cout << setfill(' ') << setw(4 * zeller(year, 2)) << " ";

		for (int k = zeller(year, 2); k < 7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << normalfeb[f] << " ";
		cout << "    ";
	}
	if (zeller(year, 3) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 3)) << " ";

	for (int k = zeller(year, 3); k < 7; k++, m++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[m] << " ";
	cout << endl;
	for (int k=0; k < 7; k++, j++)//第二排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[j] << " ";
	cout << "    ";
	if (leap) {
		for (int k = 0; k < 7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << leapfeb[f] << " ";
		cout << "    ";
	}
	else {
		for (int k = 0; k < 7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << normalfeb[f] << " ";
		cout << "    ";
	}
	for (int k = 0; k < 7; k++, m++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[m] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, j++)//第三排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[j] << " ";
	cout << "    ";
	if (leap) {
		for (int k = 0; k < 7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << leapfeb[f] << " ";
		cout << "    ";
	}
	else {
		for (int k = 0; k < 7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << normalfeb[f] << " ";
		cout << "    ";
	}
	for (int k = 0; k < 7; k++, m++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[m] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, j++)//第四排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[j] << " ";
	cout << "    ";
	if (leap) {
		for (int k = 0; k < 7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << leapfeb[f] << " ";
		cout << "    ";
	}
	else {
		for (int k = 0; k < 7; k++, f++)
			cout << setiosflags(ios::left) << setw(3) << normalfeb[f] << " ";
		cout << "    ";
	}
	for (int k = 0; k < 7; k++, m++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[m] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, j++) { //第五排//
		if (j < 31) {
			cout << setiosflags(ios::left) << setw(3) << bigmonth[j] << " ";	
		}
		else {
			cout << "    ";
		}
	} 
	cout << "    ";
	if (leap) {
		for (int k = 0; k < 7; k++, f++) {
			if(f<29)
				cout << setiosflags(ios::left) << setw(3) << leapfeb[f] << " ";
			else
				cout << "    ";
		}	
		cout << "    ";
	}
	else {
		for (int k = 0; k < 7; k++, f++) {
			if(f<28)
				cout << setiosflags(ios::left) << setw(3) << normalfeb[f] << " ";
			else
				cout << "    ";
		}
		cout << "    ";
	}
	for (int k = 0; k < 7; k++, m++) {
		if (m < 31) 
			cout << setiosflags(ios::left) << setw(3) << bigmonth[m] << " ";
		else
			cout << "    ";
	}
	cout << endl;
	if (j < 31 || m < 31) {//第六排//
		for (int k = 0; k < 7; k++, j++) { 
			if (j < 31) {
				cout << setiosflags(ios::left) << setw(3) << bigmonth[j] << " ";
			}
			else {
				cout << "    ";
			}
		}
		cout << "    ";
		if (leap) {
			for (int k = 0; k < 7; k++, f++) {
				if (f < 29)
					cout << setiosflags(ios::left) << setw(3) << leapfeb[f] << " ";
				else
					cout << "    ";
			}
			cout << "    ";
		}
		else {
			for (int k = 0; k < 7; k++, f++) {
				if (f < 28)
					cout << setiosflags(ios::left) << setw(3) << normalfeb[f] << " ";
				else
					cout << "    ";
			}
			cout << "    ";
		}
		for (int k = 0; k < 7; k++, m++) {
			if (m < 31)
				cout << setiosflags(ios::left) << setw(3) << bigmonth[m] << " ";
			else
				cout << "    ";
		}
		cout << endl;
		cout << endl;
	}
	else
		cout << endl;
	cout << "            4月                             5月                             6月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
	if (zeller(year, 4) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 4)) << " ";//第一排//

	for (int k = zeller(year, 4); k < 7; k++, apr++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[apr] << " ";
	cout << "    ";
	if (zeller(year, 5) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 5)) << " ";

	for (int k = zeller(year, 5); k < 7; k++, may++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[may] << " ";
	if (zeller(year, 6) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 6)) << " ";

	cout << "    ";
	for (int k = zeller(year, 6); k < 7; k++, june++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[june] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, apr++)//第二排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[apr] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, may++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[may] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, june++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[june] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, apr++)//第三排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[apr] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, may++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[may] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, june++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[june] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, apr++)//第四排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[apr] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, may++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[may] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, june++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[june] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, apr++) { //第五排//
		if (apr < 30) {
			cout << setiosflags(ios::left) << setw(3) << bigmonth[apr] << " ";
		}
		else {
			cout << "    ";
		}
	}
	cout << "    ";
	for (int k = 0; k < 7; k++, may++) {
		if (may < 31)
			cout << setiosflags(ios::left) << setw(3) << bigmonth[may] << " ";
		else
			cout << "    ";
	}
	cout << "    ";
	for (int k = 0; k < 7; k++, june++) {
		if (june < 30)
			cout << setiosflags(ios::left) << setw(3) << bigmonth[june] << " ";
		else
			cout << "    ";
	}
	cout << endl;
	if (apr < 30 || may < 31||june<30) {//第六排//
		for (int k = 0; k < 7; k++, apr++) {
			if (apr < 30) {
				cout << setiosflags(ios::left) << setw(3) << bigmonth[apr] << " ";
			}
			else {
				cout << "    ";
			}
		}
		cout << "    ";
		for (int k = 0; k < 7; k++, may++) {
			if (m < 31)
				cout << setiosflags(ios::left) << setw(3) << bigmonth[may] << " ";
			else
				cout << "    ";
		}
		cout << "    ";
		for (int k = 0; k < 7; k++, june++) {
			if (june < 30)
				cout << setiosflags(ios::left) << setw(3) << bigmonth[june] << " ";
			else
				cout << "    ";
		}
		cout << endl;
		cout << endl;
	}
	else
		cout << endl;
	cout << "            7月                             8月                             9月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
	if (zeller(year, 7) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 7)) << " ";//第一排//

	for (int k = zeller(year, 7); k < 7; k++, july++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[july] << " ";
	cout << "    ";
	if (zeller(year, 8) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 8)) << " ";

	for (int k = zeller(year, 8); k < 7; k++, aug++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[aug] << " ";
	if (zeller(year, 9) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 9)) << " ";

	cout << "    ";
	for (int k = zeller(year, 9); k < 7; k++, sep++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[sep] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, july++)//第二排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[july] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, aug++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[aug] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, sep++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[sep] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, july++)//第三排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[july] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, aug++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[aug] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, sep++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[sep] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, july++)//第四排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[july] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, aug++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[aug] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, sep++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[sep] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, july++) { //第五排//
		if (july < 31) {
			cout << setiosflags(ios::left) << setw(3) << bigmonth[july] << " ";
		}
		else {
			cout << "    ";
		}
	}
	cout << "    ";
	for (int k = 0; k < 7; k++, aug++) {
		if (aug < 31)
			cout << setiosflags(ios::left) << setw(3) << bigmonth[aug] << " ";
		else
			cout << "    ";
	}
	cout << "    ";
	for (int k = 0; k < 7; k++, sep++) {
		if (sep < 30)
			cout << setiosflags(ios::left) << setw(3) << bigmonth[sep] << " ";
		else
			cout << "    ";
	}
	cout << endl;
	if (july < 31 || aug < 31 || sep < 30) {//第六排//
		for (int k = 0; k < 7; k++, july++) {
			if (july < 31) {
				cout << setiosflags(ios::left) << setw(3) << bigmonth[july] << " ";
			}
			else {
				cout << "    ";
			}
		}
		cout << "    ";
		for (int k = 0; k < 7; k++, aug++) {
			if (m < 31)
				cout << setiosflags(ios::left) << setw(3) << bigmonth[aug] << " ";
			else
				cout << "    ";
		}
		cout << "    ";
		for (int k = 0; k < 7; k++, sep++) {
			if (sep < 30)
				cout << setiosflags(ios::left) << setw(3) << bigmonth[sep] << " ";
			else
				cout << "    ";
		}
		cout << endl;
		cout << endl;
	}
	else
		cout << endl;
	cout << "           10月                            11月                            12月" << endl;
	cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
	if (zeller(year, 10) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 10)) << " ";//第一排//

	for (int k = zeller(year, 10); k < 7; k++, o++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[o] << " ";
	cout << "    ";
	if (zeller(year, 11) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 11)) << " ";

	for (int k = zeller(year, 11); k < 7; k++, nov++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[nov] << " ";
	if (zeller(year, 12) != 0)
		cout << setfill(' ') << setw(4 * zeller(year, 12)) << " ";

	cout << "    ";
	for (int k = zeller(year, 12); k < 7; k++, dec++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[dec] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, o++)//第二排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[o] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, nov++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[nov] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, dec++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[dec] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, o++)//第三排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[o] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, nov++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[nov] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, dec++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[dec] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, o++)//第四排//
		cout << setiosflags(ios::left) << setw(3) << bigmonth[o] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, nov++)
		cout << setiosflags(ios::left) << setw(3) << leapfeb[nov] << " ";
	cout << "    ";
	for (int k = 0; k < 7; k++, dec++)
		cout << setiosflags(ios::left) << setw(3) << bigmonth[dec] << " ";
	cout << endl;
	for (int k = 0; k < 7; k++, o++) { //第五排//
		if (o < 31) {
			cout << setiosflags(ios::left) << setw(3) << bigmonth[o] << " ";
		}
		else {
			cout << "    ";
		}
	}
	cout << "    ";
	for (int k = 0; k < 7; k++, nov++) {
		if (nov < 30)
			cout << setiosflags(ios::left) << setw(3) << bigmonth[nov] << " ";
		else
			cout << "    ";
	}
	cout << "    ";
	for (int k = 0; k < 7; k++, dec++) {
		if (dec < 31)
			cout << setiosflags(ios::left) << setw(3) << bigmonth[dec] << " ";
		else
			cout << "    ";
	}
	cout << endl;
	if (o < 31 || nov < 30 || dec < 31) {//第六排//
		for (int k = 0; k < 7; k++, o++) {
			if (o < 31) {
				cout << setiosflags(ios::left) << setw(3) << bigmonth[o] << " ";
			}
			else {
				cout << "    ";
			}
		}
		cout << "    ";
		for (int k = 0; k < 7; k++, nov++) {
			if (m < 31)
				cout << setiosflags(ios::left) << setw(3) << bigmonth[nov] << " ";
			else
				cout << "    ";
		}
		cout << "    ";
		for (int k = 0; k < 7; k++, dec++) {
			if (dec < 31)
				cout << setiosflags(ios::left) << setw(3) << bigmonth[dec] << " ";
			else
				cout << "    ";
		}
		cout << endl;
		cout << endl;
	}
	else
		cout << endl;

	cout << endl;
	return 0;


}