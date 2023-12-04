/* 杨宇琨 信01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;

int top[3], stack[3][10];
void hanoi(int n, char src, char tmp, char dst)
{
   
    int static i = 0;
    int k;
    if (n > 1) {
        hanoi(n - 1, src, dst, tmp);
        if (src == 'A') {
            if (dst == 'B')
                stack[1][top[1]++] = stack[0][--top[0]];
            else if (dst == 'C')
                stack[2][top[2]++] = stack[0][--top[0]];
            stack[0][top[0]] = 0;
        }
        else if (src == 'B') {
            if (dst == 'A')
                stack[0][top[0]++] = stack[1][--top[1]];
            else if (dst == 'C')
                stack[2][top[2]++] = stack[1][--top[1]];
            stack[1][top[1]] = 0;
        }
        else {
            if (dst == 'A')
                stack[0][top[0]++] = stack[2][--top[2]];
            else if (dst == 'B')
                stack[1][top[1]++] = stack[2][--top[2]];
            stack[2][top[2]] = 0;
        }
        i++;
        cout <<"第"<<setw(4) << i << " 步" << "("<<setw(2)<<n<<"): " << char(src) << "-->" << char(dst) ;
        cout << " A:";
        for (k = 0; k < 10; k++) {
            if (stack[0][k] != 0) {
                cout << setw(2) << stack[0][k]; 
            }
            else {
                cout << "  ";
            }
        }
        cout << " B:";
        for (k = 0; k < 10; k++) {
            if (stack[1][k] != 0) {
                cout << setw(2) << stack[1][k]; 
            }
            else {
                cout << "  ";
            }
        }
        cout << " C:";
        for (k = 0; k < 10; k++) {
            if (stack[2][k] != 0) {
                cout << setw(2) << stack[2][k];  
            }
            else {
                cout << "  ";
            }
        }
        cout << endl; 
        hanoi(n - 1, tmp, src, dst);

    }
    else{
        if (src == 'A') {
            if (dst == 'B')
                stack[1][top[1]++] = stack[0][--top[0]];
            else if (dst == 'C')
                stack[2][top[2]++] = stack[0][--top[0]];
            stack[0][top[0]] = 0;
        }
        else if (src == 'B') {
            if (dst == 'A')
                stack[0][top[0]++] = stack[1][--top[1]];
            else if (dst == 'C')
                stack[2][top[2]++] = stack[1][--top[1]];
            stack[1][top[1]] = 0;
        }
        else {
            if (dst == 'A')
                stack[0][top[0]++] = stack[2][--top[2]];
            else if (dst == 'B')
                stack[1][top[1]++] = stack[2][--top[2]];
            stack[2][top[2]] = 0;
        }
        i++;
        cout << "第" << setw(4) << i << " 步" << "(" << setw(2) << 1 << "): " << char(src) << "-->" << char(dst); 
        cout << " A:";
        for (k = 0; k < 10; k++) {
            if (stack[0][k] != 0) {
                cout << setw(2) << stack[0][k];
            }
            else {
                cout << "  ";
            }
        }
        cout<<" B:";
        for (k = 0; k < 10; k++) {
            if (stack[1][k] != 0) {
                cout << setw(2) << stack[1][k];
            }
            else {
                cout << "  ";
            }
        }
        cout << " C:";
        for (k = 0; k < 10; k++) {
            if (stack[2][k] != 0) {
                cout << setw(2) << stack[2][k];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }



}


int main()
{
    int n = 0,m,j,k; char src, dst, tmp;
    

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
   
    if (src =='A') {
        top[0] = n;
        top[1] = 0;
        top[2] = 0;
       
        for (j = 0; n >= 1; j++, n--) {
            stack[0][j] = n;
            stack[1][j] = 0;
            stack[2][j] = 0;
        }

    }
    else if (src =='B') {
        top[1] = n;
        top[0] = 0;
        top[2] = 0;
        for (j = 0; n >= 1; j++, n--) {
            stack[1][j] = n;
            stack[0][j] = 0;
            stack[2][j] = 0;
        }
    }
    else {
        top[2] = n;
        top[1] = 0;
        top[0] = 0;
        for (j = 0; n >= 1; j++, n--) {
            stack[2][j] = n;
            stack[1][j] = 0;
            stack[0][j] = 0;
        }
    }
    n = m;
    tmp = 'A'+'B'+'C' - src - dst;
    cout << "初始:                ";
    cout << "A:"; 
    for (k = 0; k < 10; k++) {
        if (stack[0][k] != 0) {
            cout << setw(2) << stack[0][k];
        }
        else {
            cout << "  ";
        }
    }
    cout << " B:";
    for (k = 0; k < 10; k++) {
        if (stack[1][k] != 0) {
            cout << setw(2) << stack[1][k]; 
        }
        else {
            cout << "  ";
        }
    }
    cout << " C:";
    for (k = 0; k < 10; k++) {
        if (stack[2][k] != 0) {
            cout << setw(2) << stack[2][k];
        }
        else {
            cout << "  ";
        }
    }
    cout << endl; 
    hanoi(n, src, tmp, dst);
}