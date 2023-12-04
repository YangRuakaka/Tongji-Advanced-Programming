/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>    //格式输出
#include <cmath>      //fabs
#include <windows.h>  //取系统时间
using namespace std;

int main()
{
    double x;
   
    while(1) {
        cout << "请输入x的值[-10 ~ +65]" << endl;
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
            cout << "输入非法，请重新输入" << endl;
        }
       
       
    }
   
    return 0;
}