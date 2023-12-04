/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----具体要求----
   1、不允许添加其它头文件
   2、允许定义一个全局变量、不允许定义静态局部变量
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
    int n = 0,ret; char src, dst, tmp;


    while (1) {
        printf("请输入汉诺塔的层数(1-16)\n"); 
       ret = scanf("%d", &n); //读入x的方式必须是scanf且格式符为%d，不准用非scanf
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
        printf("请输入起始柱(A-C)\n");
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
        printf("请输入目标柱(A-C)\n");
        ret = scanf("%c", &dst);
        char k = 1;

        if (dst == 97 || dst == 65) {
            if (dst == src) {
                printf("目标柱(A)不能与起始柱(A)相同\n"); 
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
                printf("目标柱(B)不能与起始柱(B)相同\n"); 
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
                printf("目标柱(C)不能与起始柱(C)相同\n");   
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
    printf("移动步骤为:\n");
    tmp = 198 - src - dst;
    hanoi(n, src, tmp, dst);

}