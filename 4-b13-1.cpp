/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、仅允许hanoi中定义一个静态局部变量
   3、不允许添加其它函数
   4、main函数处理输入，允许循环
   --------------------------------------------------------------------- */

   /***************************************************************************
     函数名称：
     功    能：打印n层汉诺塔的移动顺序
     输入参数：int n：层数
               char src：起始柱
               char tmp：中间柱
               char dst：目标柱
     返 回 值：
     说    明：1、函数名、形参、返回类型均不准动
               2、本函数不允许出现任何形式的循环
               3、允许定义一个静态局部变量
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
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：1、完成输入、调用递归函数
            2、处理输入错误时，允许使用循环
            3、为了统一检查，不再允许添加其它函数（输入起始/目标柱的代码不要求统一函数处理，均直接放在main中）
***************************************************************************/
int main()
{
    int n = 0; char src, dst, tmp;


    while (1) {
        cout << "请输入汉诺塔的层数(1-16)" << endl;
        cin >> n;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

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
        cout << "请输入起始柱(A-C)" << endl;
        cin >> src;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

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
        cout << "请输入目标柱(A-C)" << endl;
        cin >> dst;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

        if (dst == 97 || dst == 65) {
            if (dst == src) {
                cout << "目标柱(A)不能与起始柱(A)相同" << endl;
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
                cout << "目标柱(B)不能与起始柱(B)相同" << endl;
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
                cout << "目标柱(C)不能与起始柱(C)相同" << endl;
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
    cout << "移动步骤为:" << endl;
    tmp = 198 - src - dst;
    hanoi(n, src, tmp, dst);
}
