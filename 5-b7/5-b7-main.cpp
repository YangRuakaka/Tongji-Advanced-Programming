/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
#include<windows.h>
#include".h"
#define base_a 14
#define base_b 24
#define base_c 34
#define bottom 20

using namespace std;

int top_A, top_B, top_C; int stack_A[10], stack_B[10], stack_C[10];
int speed, show;
void hanoi(int n, char src, char tmp, char dst, int show)
{

    int static i = 0;
    int k, y;

    if (n > 1) {

        hanoi(n - 1, src, dst, tmp, show);

        if (src == 'A') {
            if (dst == 'B') {
                cct_gotoxy(base_a, bottom - top_A);
                cout << setw(2) << "  ";
                cct_gotoxy(base_b, bottom - top_B - 1);
                cout <<setw(2)<< stack_A[top_A - 1];
                stack_B[top_B++] = stack_A[--top_A];
            }

            else if (dst == 'C') {
                cct_gotoxy(base_a, bottom - top_A);
                cout << setw(2) << "  ";
                cct_gotoxy(base_c, bottom - top_C - 1);
                cout << setw(2) << stack_A[top_A - 1];
                stack_C[top_C++] = stack_A[--top_A];
            }
            stack_A[top_A] = 0;
        }
        else if (src == 'B') {
            if (dst == 'A') {
                cct_gotoxy(base_b, bottom - top_B);
                cout << setw(2) << "  ";
                cct_gotoxy(base_a, bottom - top_A - 1);
                cout << setw(2) << stack_B[top_B - 1];
                stack_A[top_A++] = stack_B[--top_B];
            }

            else if (dst == 'C') {
                cct_gotoxy(base_b, bottom - top_B);
                cout << setw(2) << "  ";
                cct_gotoxy(base_c, bottom - top_C - 1);
                cout << setw(2) << stack_B[top_B - 1];
                stack_C[top_C++] = stack_B[--top_B];
            }

            stack_B[top_B] = 0;
        }
        else {
            if (dst == 'A') {
                cct_gotoxy(base_c, bottom - top_C);
                cout << setw(2) << "  ";
                cct_gotoxy(base_a, bottom - top_A - 1);
                cout << setw(2) << stack_C[top_C - 1];
                stack_A[top_A++] = stack_C[--top_C];
            }

            else if (dst == 'B') {
                cct_gotoxy(base_c, bottom - top_C);
                cout << setw(2) << "  ";
                cct_gotoxy(base_b, bottom - top_B - 1);
                cout << setw(2) << stack_C[top_C - 1];
                stack_B[top_B++] = stack_C[--top_C];
            }
            stack_C[top_C] = 0;
        }
        i++;




        cct_gotoxy(20, 25);
        cout << "第" << setw(4) << i << " 步" << "(" << setw(2) << n << "): " << char(src) << "-->" << char(dst);
        if (show == 1) {
            cout << " A:";
            for (k = 0; k < 10; k++) {
                if (stack_A[k] != 0) {
                    cout << setw(2) << stack_A[k];
                }
                else {
                    cout << "  ";
                }
            }
            cout << " B:";
            for (k = 0; k < 10; k++) {
                if (stack_B[k] != 0) {
                    cout << setw(2) << stack_B[k];
                }
                else {
                    cout << "  ";
                }
            }
            cout << " C:";
            for (k = 0; k < 10; k++) {
                if (stack_C[k] != 0) {
                    cout << setw(2) << stack_C[k];
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
        if (speed != 0)
            Sleep(500 / speed);
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
        hanoi(n - 1, tmp, src, dst, show);
    }
    else {

        if (src == 'A') {
            if (dst == 'B') {
                cct_gotoxy(base_a, bottom - top_A);
                cout << setw(2) << "  ";
                cct_gotoxy(base_b, bottom - top_B - 1);
                cout << setw(2) << stack_A[top_A - 1];
                stack_B[top_B++] = stack_A[--top_A];
            }

            else if (dst == 'C') {
                cct_gotoxy(base_a, bottom - top_A);
                cout << setw(2) << "  ";
                cct_gotoxy(base_c, bottom - top_C - 1);
                cout << setw(2) << stack_A[top_A - 1];
                stack_C[top_C++] = stack_A[--top_A];
            }
            stack_A[top_A] = 0;
        }
        else if (src == 'B') {
            if (dst == 'A') {
                cct_gotoxy(base_b, bottom - top_B);
                cout << setw(2) << "  ";
                cct_gotoxy(base_a, bottom - top_A - 1);
                cout << setw(2) << stack_B[top_B - 1];
                stack_A[top_A++] = stack_B[--top_B];
            }

            else if (dst == 'C') {
                cct_gotoxy(base_b, bottom - top_B);
                cout << setw(2) << "  ";
                cct_gotoxy(base_c, bottom - top_C - 1);
                cout << setw(2) << stack_B[top_B - 1];
                stack_C[top_C++] = stack_B[--top_B];
            }

            stack_B[top_B] = 0;
        }
        else {
            if (dst == 'A') {
                cct_gotoxy(base_c, bottom - top_C);
                cout << setw(2) << "  ";
                cct_gotoxy(base_a, bottom - top_A - 1);
                cout << setw(2) << stack_C[top_C - 1];
                stack_A[top_A++] = stack_C[--top_C];
            }

            else if (dst == 'B') {
                cct_gotoxy(base_c, bottom - top_C);
                cout << setw(2) << "  ";
                cct_gotoxy(base_b, bottom - top_B - 1);
                cout << setw(2) << stack_C[top_C - 1];
                stack_B[top_B++] = stack_C[--top_C];
            }
            stack_C[top_C] = 0;
        }
        i++;

        cct_gotoxy(20, 25);
        cout << "第" << setw(4) << i << " 步" << "(" << setw(2) << 1 << "): " << char(src) << "-->" << char(dst);
        if (show == 1) {
            cout << " A:";
            for (k = 0; k < 10; k++) {
                if (stack_A[k] != 0) {
                    cout << setw(2) << stack_A[k];
                }
                else {
                    cout << "  ";
                }
            }
            cout << " B:";
            for (k = 0; k < 10; k++) {
                if (stack_B[k] != 0) {
                    cout << setw(2) << stack_B[k];
                }
                else {
                    cout << "  ";
                }
            }
            cout << " C:";
            for (k = 0; k < 10; k++) {
                if (stack_C[k] != 0) {
                    cout << setw(2) << stack_C[k];
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
        if (speed != 0)
            Sleep(500 / speed);
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }



}


int main()
{
    int n = 0, m, j, k, i = 0, y; char src, dst, tmp;


    while (1) {
        cout << "请输入汉诺塔的层数(1-10)" << endl;
        cin >> n;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

        if (cin.good() == 0) {

            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }
        else if (n >= 1 && n <= 10) {
            cin.clear();
            cin.ignore(1234, '\n');
            break;
        }

        else {
            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }
    }
    m = n;

    while (1) {
        cout << "请输入起始柱(A-C)" << endl;
        cin >> src;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

        if (src == 'a' || src == 'A' || src == 'B' || src == 'C' || src == 'b' || src == 'c') {
            if (src == 'a' || src == 'A') {
                src = 'A';
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
            else if (src == 'b' || src == 'B') {
                src = 'B';
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
            else {
                src = 'C';
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
        cin >> dst;

        if (dst == 'a' || dst == 'A') {
            dst = 'A';
            if (dst == src) {
                cout << "目标柱(A)不能与起始柱(A)相同" << endl;
                cin.clear();
                cin.ignore(1234, '\n');
                continue;
            }
            else {
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
        }
        if (dst == 'b' || dst == 'B') {
            dst = 'B';
            if (dst == src) {
                cout << "目标柱(B)不能与起始柱(B)相同" << endl;
                cin.clear();
                cin.ignore(1234, '\n');
                continue;
            }
            else {
                cin.clear();
                cin.ignore(1234, '\n');
                break;
            }
        }
        if (dst == 'c' || dst == 'C') {
            dst = 'C';
            if (dst == src) {
                cout << "目标柱(C)不能与起始柱(C)相同" << endl;
                cin.clear();
                cin.ignore(1234, '\n');
                continue;
            }
            else {
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

    if (src == 'A') {
        top_A = n;
        top_B = 0;
        top_C = 0;

        for (j = 0; n >= 1; j++, n--) {
            stack_A[j] = n;
            stack_B[j] = 0;
            stack_C[j] = 0;
        }

    }
    else if (src == 'B') {
        top_B = n;
        top_A = 0;
        top_C = 0;
        for (j = 0; n >= 1; j++, n--) {
            stack_B[j] = n;
            stack_A[j] = 0;
            stack_C[j] = 0;
        }
    }
    else {
        top_C = n;
        top_A = 0;
        top_B = 0;
        for (j = 0; n >= 1; j++, n--) {
            stack_C[j] = n;
            stack_B[j] = 0;
            stack_A[j] = 0;
        }
    }
    n = m;
    tmp = 'A' + 'B' + 'C' - src - dst;
    while (1) {
        cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
        cin >> speed;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

        if (cin.good() == 0) {

            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }
        else if (speed >= 0 && speed <= 5) {
            cin.clear();
            cin.ignore(1234, '\n');
            break;
        }
        else {
            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }
    }
    while (1) {
        cout << "请输入是否显示内部数组值(0-不显示 1-显示)" << endl;
        cin >> show;   //读入x的方式必须是 cin>>int型变量，不允许其他方式

        if (cin.good() == 0) {

            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }
        else if (show == 0 || show == 1) {
            cin.clear();
            cin.ignore(1234, '\n');
            break;
        }

        else {
            cin.clear();
            cin.ignore(1234, '\n');
            continue;
        }
    }
    cout << endl;
    cct_cls();
    if (show == 1) {
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed << "，显示内部数组值" << endl;
    }
    else {
        cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed << "，不显示内部数组值" << endl;
    }

    cct_gotoxy(12, bottom);
    cout << "=========================" << endl;
    cct_gotoxy(base_a+1, bottom + 1);
    cout << "A         B         C";

    for (k = 0, y = bottom - 1; k < top_A; k++, y--) {
        cct_gotoxy(base_a, y);
        cout << setw(2) << stack_A[k];

    }
    for (k = 0, y = bottom - 1; k < top_B; k++, y--) {
        cct_gotoxy(base_b, y);
        cout << setw(2) << stack_B[k];

    }
    for (k = 0, y = bottom - 1; k < top_B; k++, y--) {
        cct_gotoxy(base_c, y);
        cout << setw(2) << stack_C[k];
    }


    if (show == 1) {
        cct_gotoxy(20, 25);
        cout << "初始:               ";
        cout << " A:";
        for (k = 0; k < 10; k++) {
            if (stack_A[k] != 0) {
                cout << setw(2) << stack_A[k];
            }
            else {
                cout << "  ";
            }
        }
        cout << " B:";
        for (k = 0; k < 10; k++) {
            if (stack_B[k] != 0) {
                cout << setw(2) << stack_B[k];
            }
            else {
                cout << "  ";
            }
        }
        cout << " C:";
        for (k = 0; k < 10; k++) {
            if (stack_C[k] != 0) {
                cout << setw(2) << stack_C[k];
            }
            else {
                cout << "  ";
            }
        }
    }
    cout << endl;
    if (speed != 0)
        Sleep(500 / speed);
    else {
        while (getchar() != '\n') {
            continue;
        }
    }
    hanoi(n, src, tmp, dst, show);
    system("pause"); //最后用这句表示暂停（注意：只适合于特定程序，无特别声明的程序加此句则得分为0）
    return 0;
}