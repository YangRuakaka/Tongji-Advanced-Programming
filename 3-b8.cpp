/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>    //��ʽ���
#include <cmath>      //fabs
#include <windows.h>  //ȡϵͳʱ��
using namespace std;

int main()
{
    double x;
   
    while(1) {
        cout << "������x��ֵ[-10 ~ +65]" << endl;
        cin >> x;
        if (x >= -10 && x <= 65) {
            double a = 1, i = 2, n = 1, t = 1, s;

            t = x;
            s = x;
            while (fabs(t) > 1e-6) {
                a = a + t;

                n = n * i;

                i++;
                s = s * x;

                t = s / n;

            }
            cout << "e^" << x << "=" << setprecision(10) << a << endl;
            break;
        }
        else {
            cout << "����Ƿ�������������" << endl;
        }
       
       
    }
   
    return 0;
}