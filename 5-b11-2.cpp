/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
//�ɰ���������Ҫ��ͷ�ļ�
using namespace std;

const char chnstr[] = "��Ҽ��������½��ƾ�ʰ"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
string result ; /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero)	//�˱��ʲô��˼������˼��
				result = result + chnstr[0]+ chnstr[1];
			break;
		case 1:
			result = result + chnstr[2] + chnstr[3]; 
			break;
		case 2:
			result = result + chnstr[4] + chnstr[5]; 
			break;
		case 3:
			result = result + chnstr[6] + chnstr[7]; 
			break;
		case 4:
			result = result + chnstr[8] + chnstr[9]; 
			break;
		case 5:
			result = result + chnstr[10] + chnstr[11]; 
			break;
		case 6:
			result = result + chnstr[12] + chnstr[13]; 
			break;
		case 7:
			result = result + chnstr[14] + chnstr[15];
			break;
		case 8:
			result = result + chnstr[16] + chnstr[17]; 
			break;
		case 9:
			result = result + chnstr[18] + chnstr[19]; 
			break;
		default:

			break;
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{

	/* --���������Ҫ������ --*/
	double a;
	while (1) {
		cout << "������[0-100��)֮�������:" << endl; 
		cin >> a;  //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf


		if (cin.good()!=1) {

			cin.clear();
			cin.ignore(1234, '\n');

		}
		else if (cin.good() ==1&& (a >= 0 && a <= 9999999999)) {
			break;
		}
		else {
			continue;
		}


	}
	int shiyi = int(a / 1000000000), yi = int(a / 100000000) % 10, qianwan = int(a / 10000000) % 10, baiwan = int(a / 1000000) % 10, shiwan = int(a / 100000) % 10, wan = int(a / 10000) % 10, qian = int(a / 1000) % 10, bai = int(a / 100) % 10, shi = int(a / 10) % 10, yuan = int(a - int(a / 1e9) * 1e9) % 10, fen = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10, jiao = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10;

	cout << "��д�����:" << endl;
	if (shiyi != 0) {
		daxie(shiyi, yi); result = result + "ʰ"; 
	}
	if (yi != 0) {
		daxie(yi, qianwan);
	}
	if (shiyi != 0 || yi != 0) {
		result = result + "��";
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0) {
		daxie(qianwan, baiwan);
		if (qianwan != 0) {
			result = result + "Ǫ";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0) {
		daxie(baiwan, shiwan);
		if (baiwan != 0) {
			result = result + "��"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0) {
		daxie(shiwan, wan);
		if (shiwan != 0) {
			result = result + "ʰ"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
		if (wan != 0) {
			daxie(wan, qian);
		}
		if (qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
			result = result + "��"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0) {
		daxie(qian, bai);
		if (qian != 0) {
			result = result + "Ǫ"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0) {
		daxie(bai, shi);
		if (bai != 0) {
			result = result + "��"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0) {
		daxie(shi, yuan);
		if (shi != 0) {
			result = result + "ʰ"; 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || yuan != 0) {
		if (yuan != 0) {
			daxie(yuan, jiao);
		}
		result = result + "Բ"; 
		if (jiao == 0 && fen == 0) {
			result = result + "��"; 
		}


	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0 && jiao == 0 && fen == 0) {
		daxie(yuan, 1);
		result = result + "Բ��"; 
	}
	if (jiao != 0 && fen == 0) {
		daxie(jiao, fen); result = result + "����"; 
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0) {
			daxie(fen, 1); result = result + "��";  
		}
		else {
			daxie(jiao, fen); daxie(fen, 1); result = result + "��"; 
		}
	}
	if (jiao != 0 && fen != 0) {
		daxie(jiao, fen); result = result + "��"; daxie(fen, 1); result = result + "��"; 
	}
	cout << result << endl;  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */

	return 0;
}