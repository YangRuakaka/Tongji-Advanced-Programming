/* —о”озы –≈01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i = 0;
    int m = 1, n = 1;

    while (i < 9) {
        m = 1;
        while (m <= n) {
            if (m * n < 10) {
                printf("%dx%d=%d   ", m, n, m * n); 
            }
            else {
                printf("%dx%d=%d  ", m, n, m * n);
            }
            m++;
        }
        i++;
        n++;
        printf("\n");



    }

    return 0;
}