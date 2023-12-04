/* ÑîÓîçû ÐÅ01 2252843*/

#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
    srand((unsigned int)(time(0)));
    char s[10][26] ;
    int sum = 0,i,j;

    while (sum != 50) {
        sum = 0;
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 26; j++) {
                if (s[i][j] == '*') {
                    s[i][j] ='0';
                }
                else
                    continue;
            }
        }
        for ( i = 0; i < 50; i++) {
            s[rand() % 10][rand() % 26] = '*';
        }

        for ( i = 0; i < 10; i++) {
            for ( j = 0; j < 26; j++) {
                if (s[i][j] == '*') {
                    sum = sum + 1;
                }
                else
                    continue;
            }
        }
    }  
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 26; j++) {
            if (s[i][j] != '*') {
                int sum = 0;
                if (s[i][j + 1] == '*' && (j + 1) < 26)
                    sum = sum + 1;
                if (s[i][j - 1] == '*' && (j - 1) >=0)
                    sum = sum + 1;
                if (s[i + 1][j] == '*' && (i + 1) < 10)
                    sum = sum + 1;
                if (s[i - 1][j] == '*' && (i - 1) >= 0)
                    sum = sum + 1;
                if (s[i + 1][j + 1] == '*' && (j + 1) < 26 && (i + 1) < 10)
                    sum = sum + 1;
                if (s[i - 1][j + 1] == '*' && (j + 1) < 26 && (i - 1) >= 0)
                    sum = sum + 1;
                if (s[i + 1][j - 1] == '*' && (i + 1) < 10 && (j - 1) >= 0)
                    sum = sum + 1;
                if (s[i - 1][j - 1] == '*' && (i - 1) >= 0 && (j - 1) >= 0)
                    sum = sum + 1;
                s[i][j] = sum + 48;
            }
            else
                continue;
        }
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 26; j++) {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}