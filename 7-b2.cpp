/* 2252843 杨宇琨 信01 */
#define _CRT_SECURE_NO_WARNINGS		//使用了VS认为unsafe的函数
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//用getch，因此不需要支持Linux
#include <string.h>	//Dev/CB的strlen需要
using namespace std;

/* 说明：可以根据下面的数据声明对应的结构体，也可以不按照下面的数据，自行按需定义（例如数据成员多余3个等） */
struct KFC {
	char ch;
	const char *name;
	double prize;
};
struct SPECIAL {
	const char *order;
	const char *name;
	double prize;
};
struct SUM {
	char name;
	int num;
	double prize;
};

const struct KFC list[] = {
	{'A', "香辣鸡腿堡",			19.5},//0//
	{'B', "劲脆鸡腿堡",			19.5},//1//
	{'C', "新奥尔良烤鸡腿堡",		20.0},//2//
	{'D', "老北京鸡肉卷",			18.5},//3//
	{'E', "黄金SPA鸡排堡(藤椒风味)",	18.0},//4//
	{'F', "经典美式风味嫩牛堡(单层)",	18.0},//5//
	{'G', "吮指原味鸡(1块)",		12.5},//6//
	{'H', "黄金脆皮鸡",			13.5},//7//
	{'I', "新奥尔良烤翅(2块)",		13.5},//8//
	{'J', "劲爆鸡米花",			12.0},//9//
	{'K', "香辣鸡翅(2块)",			12.5},//10//
	{'L', "热辣香骨鸡(3块)",		12.5},//11//
	{'M', "汁汁厚做培根三层和牛堡",	55.0},//12//
	{'N', "薯条(小)",				9.0},//13//
	{'O', "薯条(中)",				12.5},//14//
	{'P', "薯条(大)",				14.5},//15//
	{'Q', "芙蓉蔬荟汤",			9.0},//16//
	{'R', "原味花筒冰激凌",			6.0},//17//
	{'S', "醇香土豆泥",			7.5},//18//
	{'T', "黄金鸡块",				12.5},//19//
	{'U', "葡式蛋挞",				8.0},//20//
	{'V', "百事可乐(小)",			8.5},//21//
	{'W', "百事可乐(中)",			10.0},//22//
	{'X', "百事可乐(大)",			12.0},//23//
	{'Y', "九珍果汁",				13.0},//24//
	{'Z', "雪顶咖啡",				14.5},//25//
	{'\0', NULL,				0}
};

const struct SPECIAL special[] = {
   	{"AOW", "OK三件套(香辣鸡腿堡)",		31},//降价11块//
	{"HHHHHKKKSUWWW", "超爆全家桶(脆皮鸡)",	101},//49.5//
	{"APUY", "人气明星配四件套(8折)",		44},//11//
	{"GG","吮指原味鸡(2块)",			21},//4//
	{NULL, NULL, 0}
};



int main()
{
	system("mode con cols=130 lines=45");
	char cmd[10000] = { 0 };
	while (1) {
		double total = 0;
		struct SUM sum[] = {
	{'A',0,			19.5},
	{'B', 0,			19.5},
	{'C',0,		20.0},
	{'D',0,			18.5},
	{'E',0,	18.0},
	{'F', 0,	18.0},
	{'G', 0,		12.5},
	{'H', 0,			13.5},
	{'I', 0,		13.5},
	{'J',0,			12.0},
	{'K', 0,			12.5},
	{'L', 0,		12.5},
	{'M', 0,	55.0},
	{'N',0,				9.0},
	{'O',0,				12.5},
	{'P', 0,				14.5},
	{'Q',0,			9.0},
	{'R',0,			6.0},
	{'S', 0,			7.5},
	{'T', 0,				12.5},
	{'U', 0,				8.0},
	{'V', 0,			8.5},
	{'W', 0,			10.0},
	{'X', 0,			12.0},
	{'Y', 0,				13.0},
	{'Z', 0,				14.5},
	{'\0', 0,				0}
	}; 		
		while (1) {
			system("cls");
			cout << "=========================================================================" << endl;
			cout << "                             KFC 2023春季菜单" << endl;
			cout << "========================================================================" << endl;
			cout << "A 香辣鸡腿堡                19.5   |   B 劲脆鸡腿堡                19.5" << endl;
			cout << "C 新奥尔良烤鸡腿堡          20     |   D 老北京鸡肉卷              18.5" << endl;
			cout << "E 黄金SPA鸡排堡(藤椒风味)   18     |   F 经典美式风味嫩牛堡(单层)  18" << endl;
			cout << "G 吮指原味鸡(1块)           12.5   |   H 黄金脆皮鸡                13.5" << endl;
			cout << "I 新奥尔良烤翅(2块)         13.5   |   J 劲爆鸡米花                12" << endl;
			cout << "K 香辣鸡翅(2块)             12.5   |   L 热辣香骨鸡(3块)           12.5" << endl;
			cout << "M 汁汁厚做培根三层和牛堡    55     |   N 薯条(小)                  9" << endl;
			cout << "O 薯条(中)                  12.5   |   P 薯条(大)                  14.5" << endl;
			cout << "Q 芙蓉蔬荟汤                9      |   R 原味花筒冰激凌            6" << endl;
			cout << "S 醇香土豆泥                7.5    |   T 黄金鸡块                  12.5" << endl;
			cout << "U 葡式蛋挞                  8      |   V 百事可乐(小)              8.5" << endl;
			cout << "W 百事可乐(中)              10     |   X 百事可乐(大)              12" << endl;
			cout << "Y 九珍果汁                  13     |   Z 雪顶咖啡                  14.5" << endl;
			cout << endl;
			cout << "【优惠信息】：" << endl;
			cout << "OK三件套(新奥尔良烤鸡腿堡)=新奥尔良烤鸡腿堡+薯条(中)+百事可乐(中)=33.5" << endl;
			cout << "超爆全家桶(脆皮鸡)=黄金脆皮鸡*5+香辣鸡翅(2块)*3+醇香土豆泥+葡式蛋挞+百事可乐(中)*3=101" << endl;
			cout << "人气明星配四件套(8折)=香辣鸡腿堡+薯条(大)+葡式蛋挞+九珍果汁=44" << endl;
			cout << "吮指原味鸡(2块)=吮指原味鸡(1块)*2=21" << endl;
			cout << endl;
			cout << "【输入规则说明】：" << endl;
			cout << "ANV=香辣鸡腿堡+薯条(小)+百事可乐(小) / akaak=香辣鸡腿堡*3+香辣鸡翅*2" << endl;
			cout << "字母不分大小写，不限顺序，单独输入0则退出程序" << endl;
			cout << endl;
			cout << endl;
			cout << "请点单: ";
			int i = 0, key = 0;
			for (;; i++) {
				cmd[i] = getchar();
				if (cmd[i] == '\n')
					break;
			}
			if (cmd[0] == '\n')
				continue;
			cmd[i] = '\0';
			for (char* p = cmd; *p != '\0'; p++) {
				if (p == cmd && *(p + 1) == '\0' && *p == '0')
					return 0;
				else {
					if (*p >= 'a' && *p <= 'z') {
						key = 1;
						*p = *p - 32;
						continue;
					}
					else if (*p >= 'A' && *p <= 'Z') {
						key = 1;
						continue;
					}
					else {
						key = 0;
						break;
					}

				}
			}
			if (key)
				break;
			else {
				cout << "输入错误，按任意键继续." << endl;
				char pause = _getch();
				continue;
			}
		}
		cout << "您的点餐=";
		for (char* p = cmd; *p != '\0'; p++) {
			for (int i = 0; i < 26; i++) {
				if (*p == sum[i].name) {
					sum[i].num++;
				}
			}
		}
		for (int i = 0,k=0; i < 26; i++) {
			
			if (sum[i].num != 0) {
				if (k) {
					if (sum[i].num == 1) {
						cout << "+" << list[i].name;					
					}
					else {
						cout << "+" << list[i].name << "*" << sum[i].num;				
					}
				}
				else {
					if (sum[i].num == 1) {
						cout <<  list[i].name;
						k = 1;
					}
					else {
						cout << list[i].name << "*" << sum[i].num;
						k = 1;
					}
				}
			
			}
		}
		cout << endl;
		cout << "共计：";
		
	
		while (sum[7].num >= 5 && sum[10].num >= 3 && sum[18].num >= 1 && sum[20].num >= 1 && sum[22].num >= 3) {
			sum[7].num = sum[7].num - 5;
			sum[10].num = sum[10].num - 3;
			sum[18].num = sum[18].num - 1; 
			sum[20].num = sum[20].num - 1; 
			sum[22].num = sum[22].num - 3;
			total = total + 101;
		}
		while (sum[0].num >= 1 && sum[15].num >= 1 && sum[20].num >= 1 && sum[24].num >= 1) {
			sum[0].num = sum[0].num - 1;
			sum[15].num = sum[15].num - 1;		
			sum[20].num = sum[20].num - 1;
			sum[24].num = sum[24].num - 1;
			total = total + 44;
		}
		while (sum[0].num >= 1 && sum[14].num >= 1 && sum[22].num >= 1 ) {
			sum[0].num = sum[0].num - 1;
			sum[14].num = sum[14].num - 1;
			sum[22].num = sum[22].num - 1;		
			total = total +31;
		}
		while (sum[6].num>=2) {
			sum[6].num = sum[6].num - 2;
			total = total + 21;
		}
		for (int i = 0; i < 26; i++) {
			if (sum[i].num != 0) {
				total = total + list[i].prize * sum[i].num;
			}
		}
		cout << total<<"元"<<endl;
		cout << "点单完成，按任意键继续." << endl;
		char pause = _getch();
		continue;
	}
	





}



