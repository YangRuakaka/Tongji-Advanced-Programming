/* 2252843 ������ ��01 */
#define _CRT_SECURE_NO_WARNINGS		//ʹ����VS��Ϊunsafe�ĺ���
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <conio.h>	//��getch����˲���Ҫ֧��Linux
#include <string.h>	//Dev/CB��strlen��Ҫ
using namespace std;

/* ˵�������Ը������������������Ӧ�Ľṹ�壬Ҳ���Բ�������������ݣ����а��趨�壨�������ݳ�Ա����3���ȣ� */
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
	{'A', "�������ȱ�",			19.5},//0//
	{'B', "���༦�ȱ�",			19.5},//1//
	{'C', "�°¶��������ȱ�",		20.0},//2//
	{'D', "�ϱ��������",			18.5},//3//
	{'E', "�ƽ�SPA���ű�(�ٽ���ζ)",	18.0},//4//
	{'F', "������ʽ��ζ��ţ��(����)",	18.0},//5//
	{'G', "˱ָԭζ��(1��)",		12.5},//6//
	{'H', "�ƽ��Ƥ��",			13.5},//7//
	{'I', "�°¶�������(2��)",		13.5},//8//
	{'J', "�������׻�",			12.0},//9//
	{'K', "��������(2��)",			12.5},//10//
	{'L', "������Ǽ�(3��)",		12.5},//11//
	{'M', "֭֭������������ţ��",	55.0},//12//
	{'N', "����(С)",				9.0},//13//
	{'O', "����(��)",				12.5},//14//
	{'P', "����(��)",				14.5},//15//
	{'Q', "ܽ��������",			9.0},//16//
	{'R', "ԭζ��Ͳ������",			6.0},//17//
	{'S', "����������",			7.5},//18//
	{'T', "�ƽ𼦿�",				12.5},//19//
	{'U', "��ʽ��̢",				8.0},//20//
	{'V', "���¿���(С)",			8.5},//21//
	{'W', "���¿���(��)",			10.0},//22//
	{'X', "���¿���(��)",			12.0},//23//
	{'Y', "�����֭",				13.0},//24//
	{'Z', "ѩ������",				14.5},//25//
	{'\0', NULL,				0}
};

const struct SPECIAL special[] = {
   	{"AOW", "OK������(�������ȱ�)",		31},//����11��//
	{"HHHHHKKKSUWWW", "����ȫ��Ͱ(��Ƥ��)",	101},//49.5//
	{"APUY", "�����������ļ���(8��)",		44},//11//
	{"GG","˱ָԭζ��(2��)",			21},//4//
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
			cout << "                             KFC 2023�����˵�" << endl;
			cout << "========================================================================" << endl;
			cout << "A �������ȱ�                19.5   |   B ���༦�ȱ�                19.5" << endl;
			cout << "C �°¶��������ȱ�          20     |   D �ϱ��������              18.5" << endl;
			cout << "E �ƽ�SPA���ű�(�ٽ���ζ)   18     |   F ������ʽ��ζ��ţ��(����)  18" << endl;
			cout << "G ˱ָԭζ��(1��)           12.5   |   H �ƽ��Ƥ��                13.5" << endl;
			cout << "I �°¶�������(2��)         13.5   |   J �������׻�                12" << endl;
			cout << "K ��������(2��)             12.5   |   L ������Ǽ�(3��)           12.5" << endl;
			cout << "M ֭֭������������ţ��    55     |   N ����(С)                  9" << endl;
			cout << "O ����(��)                  12.5   |   P ����(��)                  14.5" << endl;
			cout << "Q ܽ��������                9      |   R ԭζ��Ͳ������            6" << endl;
			cout << "S ����������                7.5    |   T �ƽ𼦿�                  12.5" << endl;
			cout << "U ��ʽ��̢                  8      |   V ���¿���(С)              8.5" << endl;
			cout << "W ���¿���(��)              10     |   X ���¿���(��)              12" << endl;
			cout << "Y �����֭                  13     |   Z ѩ������                  14.5" << endl;
			cout << endl;
			cout << "���Ż���Ϣ����" << endl;
			cout << "OK������(�°¶��������ȱ�)=�°¶��������ȱ�+����(��)+���¿���(��)=33.5" << endl;
			cout << "����ȫ��Ͱ(��Ƥ��)=�ƽ��Ƥ��*5+��������(2��)*3+����������+��ʽ��̢+���¿���(��)*3=101" << endl;
			cout << "�����������ļ���(8��)=�������ȱ�+����(��)+��ʽ��̢+�����֭=44" << endl;
			cout << "˱ָԭζ��(2��)=˱ָԭζ��(1��)*2=21" << endl;
			cout << endl;
			cout << "���������˵������" << endl;
			cout << "ANV=�������ȱ�+����(С)+���¿���(С) / akaak=�������ȱ�*3+��������*2" << endl;
			cout << "��ĸ���ִ�Сд������˳�򣬵�������0���˳�����" << endl;
			cout << endl;
			cout << endl;
			cout << "��㵥: ";
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
				cout << "������󣬰����������." << endl;
				char pause = _getch();
				continue;
			}
		}
		cout << "���ĵ��=";
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
		cout << "���ƣ�";
		
	
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
		cout << total<<"Ԫ"<<endl;
		cout << "�㵥��ɣ������������." << endl;
		char pause = _getch();
		continue;
	}
	





}



