/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�����������hanoi�ж���һ����̬�ֲ�����
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
               3��������һ����̬�ֲ�����
   ***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    static int i=0;
   
   
    if (n > 1) {
        hanoi(n - 1, src, dst, tmp);
        i++;
        cout << setw(5) << i << ":";
        
        cout <<setw(3)<< n << "# " << char(src) << "-->" << char(dst) << endl;
       
        hanoi(n - 1, tmp, src, dst);

    }
    else {
        i++;
        cout << setw(5) << i << ":";
       
        cout << setw(3)<<1<<"# " << char(src) << "-->" << char(dst) << endl;
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
    int n = 0; char src, dst, tmp;


    while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
        cin >> n;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ

        if (cin.good() == 0) {

            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }
        else if (n >= 1 && n <= 16) {
            break;
        }

        else {
            continue;
        }
    }


    while (1) {
        cout << "��������ʼ��(A-C)" << endl;
        cin >> src;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ

        if (src == 97 || src == 65 || src == 66 || src == 67 || src == 98 || src == 99) {
            if (src == 97 || src == 65) {
                src = 65;
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
            else if (src == 98 || src == 66) {
                src = 66;
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
            else {
                src = 67;
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }

        }
        else {
            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }

    }
    while (1) {
        cout << "������Ŀ����(A-C)" << endl;
        cin >> dst;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ

        if (dst == 97 || dst == 65) {
            if (dst == src) {
                cout << "Ŀ����(A)��������ʼ��(A)��ͬ" << endl;
                cin.clear();
                cin.ignore(1234, '\n');
                continue;
            }
            else {
                dst = 65;
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
        }
        if (dst == 98 || dst == 66) {
            if (dst == src) {
                cout << "Ŀ����(B)��������ʼ��(B)��ͬ" << endl;
                cin.clear();
                cin.ignore(1234, '\n');
                continue;
            }
            else {
                dst = 66;
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
        }
        if (dst == 99 || dst == 67) {
            if (dst == src) {
                cout << "Ŀ����(C)��������ʼ��(C)��ͬ" << endl;
                cin.clear();
                cin.ignore(1234, '\n');
                continue;
            }
            else {
                dst = 67;
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
        }
        else {
            cin.clear();
            cin.ignore(1234, '\n');
        }

    }
    cout << "�ƶ�����Ϊ:" << endl;
    tmp = 198 - src - dst;
    hanoi(n, src, tmp, dst);
}
