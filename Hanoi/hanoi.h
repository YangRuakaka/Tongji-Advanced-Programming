/* 信01 2252843 杨宇琨 */
#pragma once
#define base_a 14
#define base_b 24
#define base_c 34
#define bottom 30
#define meun_x 10
#define meun_y 12
#define polebottom 15
#define polebase_a 12
#define polebase_b 45
#define polebase_c 78
int hanoi_menu();
void hanoi_multiple_solutions(int option);
void reset();
void prevertical();
void game(int layer, char src, char tmp, char dst);
int compare(char src, char dst);
int check(int layer, char src, char dst);
void hanoi(int layer, char src, char tmp, char dst, int option);
void movestack(char src, char dst);
void horizental(int layer, char src, char dst, int option);
void show(int layer, char src, char tmp, char dst, int option);
void figure(int layer, char src, char tmp, char dst, int option);
int moveup(char src, int option);
void preparation();
void vertical(char src, char dst);
/* ------------------------------------------------------------------------------------------------------

     本文件功能：
	1、为了保证 hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp 能相互访问函数的函数声明
	2、一个以上的cpp中用到的宏定义（#define）或全局只读（const）变量，个数不限
	3、可以参考 cmd_console_tools.h 的写法（认真阅读并体会）
   ------------------------------------------------------------------------------------------------------ */

