/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

//�ɰ���������Ҫ��ͷ�ļ�

const char chnstr[] = "��Ҽ��������½��ƾ�ʰ"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
char result[256]={0};  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
		case 0:
			if (flag_of_zero)	//�˱��ʲô��˼������˼��
				strncat(result, &chnstr[0], 2);	
			break;
		case 1:
			strncat(result, &chnstr[2], 2);	
			break;
		case 2:
			strncat(result, &chnstr[4], 2);	
			break;
		case 3:
			strncat(result, &chnstr[6], 2);
			break;
		case 4:
			strncat(result, &chnstr[8], 2);	
			break;
		case 5:
			strncat(result, &chnstr[10], 2);	
			break;
		case 6:
			strncat(result, &chnstr[12], 2);	
			break;
		case 7:
			strncat(result, &chnstr[14], 2);		
			break;
		case 8:
			strncat(result, &chnstr[16], 2);
			break;
		case 9:
			strncat(result, &chnstr[18], 2);
			break;
		default:
			
			break;
	}
}


int main()
{
    /* --���������Ҫ������ --*/
	int ret;
	double a;
	while (1) {
		printf("������[0-100��)֮�������:\n");
		ret = scanf("%lf", &a); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf


		if (ret != 1) {

			while (getchar() != '\n');
			continue;

		}
		else if (ret == 1 && (a >= 0 && a<= 9999999999)) {
			break;
		}
		else {
			continue;
		}


	}
	int shiyi = (int)(a / 1000000000), yi = (int)(a / 100000000) % 10, qianwan = (int)(a / 10000000) % 10, baiwan = (int)(a / 1000000) % 10, shiwan = (int)(a / 100000) % 10, wan = (int)(a / 10000) % 10, qian = (int)(a / 1000) % 10, bai = (int)(a / 100) % 10, shi = (int)(a / 10) % 10, yuan = (int)(a - (int)(a / 1e9) * 1e9) % 10, fen = (int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8 - (int)(a / 10000000) % 10 * 1e7) / 0.01) % 10, jiao = (int)((a + 0.0001 - (int)(a / 1000000000) * 1e9 - (int)(a / 100000000) % 10 * 1e8) / 0.1) % 10;
	
	printf("��д�����:\n"); 
	if (shiyi != 0) {
		 daxie(shiyi, yi); strcat(result, "ʰ") ;
	}
	if (yi != 0) {
		 daxie(yi, qianwan); 
	}
	if (shiyi != 0 || yi != 0) {
		strcat(result,  "��"); 
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0) {
		 daxie(qianwan, baiwan); 
		if (qianwan != 0) {
			strcat(result, "Ǫ"); 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0) {
		 daxie(baiwan, shiwan); 
		if (baiwan != 0) {
			strcat(result, "��"); 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0) {
		daxie(shiwan, wan); 
		if (shiwan != 0) {
			strcat(result, "ʰ"); 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
		if (wan != 0) {
	     daxie(wan, qian);
		}
		if (qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0) {
			strcat(result, "��"); 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0) {
		 daxie(qian, bai);
		if (qian != 0) {
			strcat(result, "Ǫ"); 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0) {
		 daxie(bai, shi); 
		if (bai != 0) {
			strcat(result, "��"); 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0) {
		 daxie(shi, yuan); 
		if (shi != 0) {
			strcat(result, "ʰ"); 
		}
	}
	if (shiyi != 0 || yi != 0 || qianwan != 0 || baiwan != 0 || shiwan != 0 || wan != 0 || qian != 0 || bai != 0 || shi != 0 || yuan != 0) {
		if (yuan != 0) {
		 daxie(yuan, jiao);
		}
		strcat(result, "Բ"); 
		if (jiao == 0 && fen == 0) {
			strcat(result, "��"); 
		}


	}
	if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0 && jiao == 0 && fen == 0) {
		 daxie(yuan, 1); 
		 strcat(result, "Բ��"); 
	}
	if (jiao != 0 && fen == 0) {
		 daxie(jiao, fen); strcat(result, "����") ;
	}
	if (jiao == 0 && fen != 0) {
		if (shiyi == 0 && yi == 0 && qianwan == 0 && baiwan == 0 && shiwan == 0 && wan == 0 && qian == 0 && bai == 0 && shi == 0 && yuan == 0) {
			daxie(fen, 1); strcat(result, "��") ;
		}
		else {
			 daxie(jiao, fen); daxie(fen, 1); strcat(result, "��") ;
		}
	}
	if (jiao != 0 && fen != 0) {
		 daxie(jiao, fen); strcat(result, "��") ;daxie(fen, 1)  ; strcat(result, "��") ;
	}
    printf("%s\n", result);  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
    
    return 0;
}
