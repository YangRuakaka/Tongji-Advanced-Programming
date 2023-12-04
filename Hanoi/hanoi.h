/* ��01 2252843 ������ */
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

     ���ļ����ܣ�
	1��Ϊ�˱�֤ hanoi_main.cpp/hanoi_menu.cpp/hanoi_multiple_solutions.cpp ���໥���ʺ����ĺ�������
	2��һ�����ϵ�cpp���õ��ĺ궨�壨#define����ȫ��ֻ����const����������������
	3�����Բο� cmd_console_tools.h ��д���������Ķ�����ᣩ
   ------------------------------------------------------------------------------------------------------ */

