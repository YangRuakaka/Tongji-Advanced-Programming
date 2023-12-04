/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2��������һ��ȫ�ֱ������������徲̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */


   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
   ***************************************************************************/
static int i=0;
void hanoi(int n, char src, char tmp, char dst)
{
   


    if (n > 1) {
        hanoi(n - 1, src, dst, tmp);
        i++;
      
        printf("%5d:", i);
       
        printf("%3d# %c-->%c\n", n, src, dst);
        hanoi(n - 1, tmp, src, dst);

    }
    else {
        i++;
        printf("%5d:", i);
        printf("%3d# %c-->%c\n", 1, src, dst);
       
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
    int n = 0,ret; char src, dst, tmp;


    while (1) {
        printf("�����뺺ŵ���Ĳ���(1-16)\n"); 
       ret = scanf("%d", &n); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
       char k = 1;

		if (ret != 1) {

			while (k != '\n') {
				k = getchar();
			}
		}
		else if (ret == 1 &&n>=1&&n<=16) {
            k = getchar();
			break;
		}

		
    }


    while (1) {
        printf("��������ʼ��(A-C)\n");
        ret = scanf("%c", &src);  
        char k = 1;

        if (ret==1&&(src == 97 || src == 65 || src == 66 || src == 67 || src == 98 || src == 99)) {
            if (src == 97 || src == 65) {
                src = 65;
                while (k != '\n') {
                    k = getchar();
                }
                break;
            }
            else if (src == 98 || src == 66) {
                src = 66;
                while (k != '\n') {
                    k = getchar();
                }
                break;
            }
            else {
                src = 67;
                while (k != '\n') {
                    k = getchar();
                }
                break;
            }

        }
        else {
            while (k != '\n') {
                k = getchar();
            }
            continue;
        }

    }
    while (1) {
        printf("������Ŀ����(A-C)\n");
        ret = scanf("%c", &dst);
        char k = 1;

        if (dst == 97 || dst == 65) {
            if (dst == src) {
                printf("Ŀ����(A)��������ʼ��(A)��ͬ\n"); 
                while (k != '\n') {
                    k = getchar();
                }
                continue;
            }
            else {
                dst = 65;
                while (k != '\n') {
                    k = getchar();
                }
                break;
            }
        }
        if (dst == 98 || dst == 66) {
            if (dst == src) {
                printf("Ŀ����(B)��������ʼ��(B)��ͬ\n"); 
                while (k != '\n') {
                    k = getchar();
                }
                continue;
            }
            else {
                dst = 66;
                while (k != '\n') {
                    k = getchar();
                }
                break;
            }
        }
        if (dst == 99 || dst == 67) {
            if (dst == src) {
                printf("Ŀ����(C)��������ʼ��(C)��ͬ\n");   
                while (k != '\n') {
                    k = getchar();
                }
                continue;
            }
            else {
                dst = 67;
                while (k != '\n') {
                    k = getchar();
                }
                break;
            }
        }
        else {
            while (k != '\n') {
                k = getchar();
            }
        }

    }
    printf("�ƶ�����Ϊ:\n");
    tmp = 198 - src - dst;
    hanoi(n, src, tmp, dst);

}