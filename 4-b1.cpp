/* ������ ��01 2252843 */
#include <iostream>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/***************************************************************************
  �������ƣ�
  ��    �ܣ������д��0~9
  ���������
  �� �� ֵ��
  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero)	//�˱��ʲô��˼������˼��
				cout << "��";
			break;
		case 1:
			cout << "Ҽ";
			break;
		case 2:
			cout << "��";
			break;
		case 3:
			cout << "��";
			break;
		case 4:
			cout << "��";
			break;
		case 5:
			cout << "��";
			break;
		case 6:
			cout << "½";
			break;
		case 7:
			cout << "��";
			break;
		case 8:
			cout << "��";
			break;
		case 9:
			cout << "��";
			break;
		default:
			cout << "error";
			break;
	}
}


/* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	cout << "������[0-100��)֮�������:" << endl;
	double a;
	cin >> a;
	int shiyi = int(a / 1000000000), yi = int(a / 100000000) % 10, qianwan = int(a / 10000000) % 10, baiwan = int(a / 1000000) % 10, shiwan = int(a / 100000) % 10, wan = int(a / 10000) % 10, qian = int(a / 1000) % 10, bai = int(a / 100) % 10, shi = int(a / 10) % 10, yuan = int(a - int(a / 1e9) * 1e9) % 10, fen = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10, jiao = int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10;
	cout << "��д�����:" << endl;
	if (shiyi != 0) {
		daxie(shiyi, yi); cout << "ʰ";
	}
	if (yi != 0) {
		daxie(yi, qianwan);
	}
	if (shiyi != 0 || yi != 0) {
		cout << "��";
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0) {
		daxie(qianwan, baiwan);
		if (qianwan != 0) {
			cout << "Ǫ";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0) {
		daxie(baiwan, shiwan);
		if (baiwan != 0) {
			cout << "��";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0) {
		daxie(shiwan, wan);
		if (shiwan != 0) {
			cout << "ʰ";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
		if (wan != 0) {
			daxie(wan, qian);
		}
		if (qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
			cout << "��";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0) {
		daxie(qian, bai);
		if (qian != 0) {
			cout << "Ǫ";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0) {
		daxie(bai, shi);
		if (bai != 0) {
			cout << "��";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0) {
		daxie(shi, yuan);
		if (shi != 0) {
			cout << "ʰ";
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || yuan != 0) {
		if (yuan != 0) {
			daxie(yuan, jiao);
		}
		cout << "Բ";
		if (jiao == 0 && fen == 0) {
			cout << "��";
		}


	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0 && jiao == 0 && fen == 0) {
		daxie(yuan, 1);
		cout << "Բ��";
	}
	if (jiao != 0 && fen == 0) {
		daxie(jiao, fen); cout << "����";
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0) {
			daxie(fen, 1); cout << "��";
		}
		else {
			daxie(jiao, fen); daxie(fen, 1); cout << "��";
		}
	}
	if (jiao != 0 && fen != 0) {
		daxie(jiao, fen); cout << "��"; daxie(fen, 1); cout << "��";
	}
	cout << endl;
	return 0;




	/* ������� */
	return 0;
}