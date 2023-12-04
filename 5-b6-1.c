/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int top_A, top_B, top_C; int stack_A[10], stack_B[10], stack_C[10];
void hanoi(int n, char src, char tmp, char dst)
{
    int static i = 0;
    int k;



    if (n > 1) {
        hanoi(n - 1, src, dst, tmp);
        if (src == 'A') {
            if (dst == 'B')
                stack_B[top_B++] = stack_A[--top_A];
            else if (dst == 'C')
                stack_C[top_C++] = stack_A[--top_A];
            stack_A[top_A] = 0;
        }
        else if (src == 'B') {
            if (dst == 'A')
                stack_A[top_A++] = stack_B[--top_B];
            else if (dst == 'C')
                stack_C[top_C++] = stack_B[--top_B];
            stack_B[top_B] = 0;
        }
        else {
            if (dst == 'A')
                stack_A[top_A++] = stack_C[--top_C];
            else if (dst == 'B')
                stack_B[top_B++] = stack_C[--top_C];
            stack_C[top_C] = 0;
        }
        i++;
        printf("第%4d 步(%2d): %c-->%c", i, n, src, dst);
        printf(" A:");
        for (k = 0; k < 10; k++) {
            if (stack_A[k] != 0) {
                printf("%2d", stack_A[k]);
            }
            else {
                printf("  ");
            }
        }
        printf(" B:");
        for (k = 0; k < 10; k++) {
            if (stack_B[k] != 0) {
                printf("%2d", stack_B[k]);
            }
            else {
                printf("  ");
            }
        }
        printf(" C:");
        for (k = 0; k < 10; k++) {
            if (stack_C[k] != 0) {
                printf("%2d", stack_C[k]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
        hanoi(n - 1, tmp, src, dst);

    }
    else {
        if (src == 'A') {
            if (dst == 'B')
                stack_B[top_B++] = stack_A[--top_A];
            else if (dst == 'C')
                stack_C[top_C++] = stack_A[--top_A];
            stack_A[top_A] = 0;
        }
        else if (src == 'B') {
            if (dst == 'A')
                stack_A[top_A++] = stack_B[--top_B];
            else if (dst == 'C')
                stack_C[top_C++] = stack_B[--top_B];
            stack_B[top_B] = 0;
        }
        else {
            if (dst == 'A')
                stack_A[top_A++] = stack_C[--top_C];
            else if (dst == 'B')
                stack_B[top_B++] = stack_C[--top_C];
            stack_C[top_C] = 0;
        }
        i++;
        printf("第%4d 步(%2d): %c-->%c", i, 1, src, dst);
        printf(" A:");
        for (k = 0; k < 10; k++) {
            if (stack_A[k] != 0) {
                printf("%2d", stack_A[k]);
            }
            else {
                printf("  ");
            }
        }
        printf(" B:");
        for (k = 0; k < 10; k++) {
            if (stack_B[k] != 0) {
                printf("%2d", stack_B[k]);
            }
            else {
                printf("  ");
            }
        }
        printf(" C:");
        for (k = 0; k < 10; k++) {
            if (stack_C[k] != 0) {
                printf("%2d", stack_C[k]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n = 0,m,j,k,ret; char src, dst, tmp;

    while (1) {
        printf("请输入汉诺塔的层数(1-10)\n");
        if (scanf("%d", &n) && (n >= 1 && n <= 10)) {
            while (getchar() != '\n')
                continue;
            break;
        }
        else {
            while (getchar() != '\n')
                continue;
        }
    }
    m = n;
    while (1) {
        printf("请输入起始柱(A-C)\n");
        if ((scanf("%c", &src) == 1) && (src == 'a' || src == 'A' || src == 'B' || src == 'C' || src == 'b' || src == 'c'))
        {
            while (getchar() != '\n')
                continue;
            if (src == 'a' || src == 'A') {
                src = 'A';
            }
            else if (src == 'b' || src == 'B') {
                src = 'B';
            }
            else {
                src = 'C';
            }
            break;
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
        

    while (1) {
        printf("请输入目标柱(A-C)\n");  
        if ((scanf("%c", &dst) == 1) && (src == 'a' || src == 'A' || src == 'B' || src == 'C' || src == 'b' || src == 'c'))
        {
            if (dst == 'a' || dst == 'A') {
                dst = 'A';
                if (dst == src) {
                    printf("目标柱(A)不能与起始柱(A)相同\n");
                    while (getchar() != '\n')
                        continue;
                    continue;
                }
                else {
                    while (getchar() != '\n')
                        continue;
                    break;
                }
            }
            if (dst == 'b' || dst == 'B') {
                dst = 'B';
                if (dst == src) {
                    printf("目标柱(B)不能与起始柱(B)相同\n");
                    while (getchar() != '\n')
                        continue;
                    continue;
                }
                else {
                    while (getchar() != '\n')
                        continue;
                    break;
                }
            }
            if (dst == 'c' || dst == 'C') {
                dst = 'C';
                if (dst == src) {
                    printf("目标柱(C)不能与起始柱(C)相同\n");
                    while (getchar() != '\n')
                        continue;
                    continue;
                }
                else {
                    while (getchar() != '\n')
                        continue;
                    break;
                }
            }


            else {
                while (getchar() != '\n')
                    continue;
                continue;
            }


        }
       
         

    }
    if (src =='A') {
        top_A = n;
        top_B = 0;
        top_C = 0;
        for (j = 0; n>=1; j++,n--) {
            stack_A[j] = n;
            stack_B[j] =0;
            stack_C[j] = 0;
        }
        
    }
    else if (src =='B') {
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
            stack_A[j] = 0;
            stack_B[j] = 0;
        }
    }
    n=m;
    tmp = 'A' + 'B' + 'C' - src - dst;
    printf("初始:                ");
    printf("A:");
    for (k = 0; k < 10; k++) {
        if (stack_A[k] != 0) {
            printf("%2d", stack_A[k]);
        }
        else {
            printf("  ");
        }
    }
    printf(" B:");
    for (k = 0; k < 10; k++) {
        if (stack_B[k] != 0) {
            printf("%2d", stack_B[k]);
        }
        else {
            printf("  ");
        }
    }
    printf(" C:");
    for (k = 0; k < 10; k++) {
        if (stack_C[k] != 0) {
            printf("%2d", stack_C[k]);
        }
        else {
            printf("  ");
        }
    }
    printf("\n");
    hanoi(n, src, tmp, dst);
}