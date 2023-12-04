/* 杨宇琨 信01 2252843*/

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

const int MAX_X = 69;	//定义*组成的边框的宽度
const int MAX_Y = 17;	//定义*组成的边框的高度

/***************************************************************************
  函数名称：
  功    能：完成与system("cls")一样的功能，但效率高
  输入参数：
  返 回 值：
  说    明：清除整个屏幕缓冲区，不仅仅是可见窗口区域(使用当前颜色)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* 取当前缓冲区信息 */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* 填充字符 */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* 填充属性 */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* 光标回到(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  函数名称：gotoxy
  功    能：将光标移动到指定位置
  输入参数：HANDLE hout：输出设备句柄
			int X      ：指定位置的x坐标
			int Y      ：指定位置的y坐标
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  函数名称：showch
  功    能：在指定位置处打印一个指定的字符
  输入参数：HANDLE hout：输出设备句柄
			int X      ：指定位置的x坐标
			int Y      ：指定位置的y坐标
			char ch    ：要打印的字符
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  函数名称：init_border
  功    能：显示初始的边框及随机字符
  输入参数：HANDLE hout：输出设备句柄
  返 回 值：无
  说    明：此函数不准修改
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//光标移回左上角(0,0)
	printf("***********************************************************************\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("*                                                                     *\n");
	printf("***********************************************************************\n");

	/* 随机显示20个大写字母，字母的值、XY坐标都随机显示
	   rand()函数的功能：随机生成一个在 0-32767 之间的整数
	   思考：在什么情况下，下面这个循环执行生成后，你看到的实际字母个数不足20个？ */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- 按需增加的若干函数可以放在此处 --*/

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数仅用于初始演示，可以按题目要求全部推翻重写
***************************************************************************/
int menu()
{

	printf ( "1.用I、J、K、L键控制上下左右(大小写均可，边界停止)\n" );
	printf("2.用I、J、K、L键控制上下左右(大小写均可，边界回绕)\n");
	printf ( "3.用箭头键控制上下左右，边界停止\n");
	printf("4.用箭头键控制上下左右，边界回绕\n");
	printf("5.用I、J、K、L键控制上下左右(大小写均可，边界停止)正确版\n");
	printf("6.用I、J、K、L键控制上下左右(大小写均可，边界回绕)正确版\n");
	printf("0.退出\n");
	printf("[请选择0-6]");
	int a;
	a = _getch();
	return a;


}
void move_by_ijkl(const HANDLE hout)
{
	gotoxy(hout, 35, 9);
	int x, y, a;
	x = 35, y = 9;
	while (1) {
		a = _getch();

		if (a == 'I' || a == 'i') {
			if (y == 1) {
				continue;
			}
			y--;
			gotoxy(hout, x, y);
		}
		if (a == 'k' || a == 'K') {
			if (y == 17) {
				continue;
			}
			y++;
			gotoxy(hout, x, y);
		}
		if (a == 'j' || a == 'J') {
			if (x == 1) {
				continue;
			}
			x--;
			gotoxy(hout, x, y);
		}
		if (a == 'L' || a == 'l') {
			if (x == 69) {
				continue;
			}
			x++;
			gotoxy(hout, x, y);
		}
		if (a == ' ') {
			putchar(' ');
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
			printf( "游戏结束，按回车键退出.\n" );
			while (1) {
				int b = _getch();
				if (b == 13) {
					return ;
				}
			}
		}


	}
}
void move_by_arrow(const HANDLE hout) {

	gotoxy(hout, 35, 9);
	int x, y, a;
	x = 35, y = 9;
	while (1) {

		a = _getch();

		if (a == 224) {
			a = _getch();
			if (a == 72) {
				if (y == 1) {
					continue;
				}
				y--;
				gotoxy(hout, x, y);
			}
			if (a == 80) {
				if (y == 17) {
					continue;
				}
				y++;
				gotoxy(hout, x, y);
			}
			if (a == 75) {
				if (x == 1) {
					continue;
				}
				x--;
				gotoxy(hout, x, y);
			}
			if (a == 77) {
				if (x == 69) {
					continue;
				}
				x++;
				gotoxy(hout, x, y);
			}
		}

		if (a == ' ') {
			putchar(' ');
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
		printf( "游戏结束，按回车键退出.\n" );
			while (1) {
				int b = _getch();
				if (b == 13) {
					return;
				}
			}
		}


	}

}
void move_by_ijkl2(const HANDLE hout)
{
	gotoxy(hout, 35, 9);
	int x, y, a;
	x = 35, y = 9;
	while (1) {
		a = _getch();

		if (a == 'I' || a == 'i') {
			if (y == 1) {
				gotoxy(hout, x, 18);
				y = 18;
			}
			y--;
			gotoxy(hout, x, y);
		}
		if (a == 'k' || a == 'K') {
			if (y == 17) {
				gotoxy(hout, x, 0);
				y = 0;
			}
			y++;
			gotoxy(hout, x, y);
		}
		if (a == 'j' || a == 'J') {
			if (x == 1) {
				gotoxy(hout, 70, y);
				x = 70;
			}
			x--;
			gotoxy(hout, x, y);
		}
		if (a == 'L' || a == 'l') {
			if (x == 69) {
				gotoxy(hout, 0, y);
				x = 0;
			}
			x++;
			gotoxy(hout, x, y);
		}
		if (a == ' ') {
			putchar(' ');
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
			printf("游戏结束，按回车键退出.\n");
			while (1) {
				int b = _getch();
				if (b == 13) {
					return;
				}
			}
		}


	}
}
void move_by_arrow2(const HANDLE hout)
{

	gotoxy(hout, 35, 9);
	int x, y, a;
	x = 35, y = 9;
	while (1) {

		a = _getch();

		if (a == 224) {
			a = _getch();
			if (a == 72) {
				if (y == 1) {
					gotoxy(hout, x, 18);
					y = 18;
				}
				y--;
				gotoxy(hout, x, y);
			}
			if (a == 80) {
				if (y == 17) {
					gotoxy(hout, x, 0);
					y = 0;
				}
				y++;
				gotoxy(hout, x, y);
			}
			if (a == 75) {
				if (x == 1) {
					gotoxy(hout, 70, y);
					x = 70;
				}
				x--;
				gotoxy(hout, x, y);
			}
			if (a == 77) {
				if (x == 69) {
					gotoxy(hout, 0, y);
					x = 0;
				}
				x++;
				gotoxy(hout, x, y);
			}
		}

		if (a == ' ') {
			putchar(' ');
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
			printf("游戏结束，按回车键退出.\n");
			while (1) {
				int b = _getch();
				if (b == 13) {
					return;
				}
			}
		}


	}



}
void move_by_ijkl3(const HANDLE hout)
{
	gotoxy(hout, 35, 9);
	int x, y, a;
	x = 35, y = 9;
	while (1) {
		a = _getch();
		if (a == 224) {
			a = _getch();
			continue;
		}
		if (a == 'I' || a == 'i') {
			if (y == 1) {
				continue;
			}
			y--;
			gotoxy(hout, x, y);
		}
		if (a == 'k' || a == 'K') {
			if (y == 17) {
				continue;
			}
			y++;
			gotoxy(hout, x, y);
		}
		if (a == 'j' || a == 'J') {
			if (x == 1) {
				continue;
			}
			x--;
			gotoxy(hout, x, y);
		}
		if (a == 'L' || a == 'l') {
			if (x == 69) {
				continue;
			}
			x++;
			gotoxy(hout, x, y);
		}
		if (a == ' ') {
			putchar(' ');
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
		printf( "游戏结束，按回车键退出.\n" );
			while (1) {
				int b = _getch();
				if (b == 13) {
					return;
				}
			}
		}



	}
}
void move_by_ijkl4(const HANDLE hout)
{
	gotoxy(hout, 35, 9);
	int x, y, a;
	x = 35, y = 9;
	while (1) {
		a = _getch();

		if (a == 224) {
			a = _getch();
			continue;
		}
		if (a == 'I' || a == 'i') {
			if (y == 1) {
				gotoxy(hout, x, 18);
				y = 18;
			}
			y--;
			gotoxy(hout, x, y);
		}
		if (a == 'k' || a == 'K') {
			if (y == 17) {
				gotoxy(hout, x, 0);
				y = 0;
			}
			y++;
			gotoxy(hout, x, y);
		}
		if (a == 'j' || a == 'J') {
			if (x == 1) {
				gotoxy(hout, 70, y);
				x = 70;
			}
			x--;
			gotoxy(hout, x, y);
		}
		if (a == 'L' || a == 'l') {
			if (x == 69) {
				gotoxy(hout, 0, y);
				x = 0;
			}
			x++;
			gotoxy(hout, x, y);
		}
		if (a == ' ') {
			putchar(' ');
			gotoxy(hout, x, y);
		}
		if (a == 'q' || a == 'Q') {
			gotoxy(hout, 0, 23);
		printf( "游戏结束，按回车键退出.\n" );
			while (1) {
				int b = _getch();
				if (b == 13) {
					return;
				}
			}
		}


	}
}
int main()
{

	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄

	/* 生成伪随机数的种子，只需在程序开始时执行一次即可 */
	srand((unsigned int)(time(0)));

	/* 此句的作用是调用系统的cls命令清屏 */
	cls(hout);


	while (1) {
		cls(hout);
		int b;
		b = menu();
		if (b == 48) {
			return 0;
		}
		if (b == 49) {
			cls(hout);
			init_border(hout);
			move_by_ijkl(hout);
		}
		if (b == 50) {
			cls(hout);
			init_border(hout);
			move_by_ijkl2(hout);
		}
		if (b == 51) {
			cls(hout);
			init_border(hout);
			move_by_arrow(hout);
		}
		if (b == 52) {
			cls(hout);
			init_border(hout);
			move_by_arrow2(hout);
		}
		if (b == 53) {
			cls(hout);
			init_border(hout);
			move_by_ijkl3(hout);
		}
		if (b == 54) {
			cls(hout);
			init_border(hout);
			move_by_ijkl3(hout);
		}
	}



	return 0;
}
//随机数无法显示出20个的原因：两个随机字母位置出现重合 后随机出现的字母覆盖了原有字母的位置//