/* 杨宇琨 信01 2252843*/
#include <stdio.h>
#include <windows.h> //取系统时间

int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//获得计数器频率
	QueryPerformanceCounter(&begin);	//获得初始硬件计数器计数

	/* 此处是你的程序开始 */
	int a, b, c, d, e, f, g, h, i, j, k, l, count = 0;

	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= 9; b++) {
			for (c = 1; c <= 9; c++) {
				for (d = 1; d <= 9; d++) {
					for (e = 1; e <= 9; e++) {
						for (f = 1; f <= 9; f++) {
							for (g = 1; g <= 9; g++) {
								for (h = 1; h <= 9; h++) {
									for (i = 1; i <= 9; i++) {
										l = g * 100 + h * 10 + i;
										j = a * 100 + b * 10 + c;
										k = d * 100 + e * 10 + f;
										if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i && b != c && b != d && b != e && b != f && b != g && b != h && b != i && c != d && c != e && c != f && c != g && c != h && c != i && d != e && d != f && d != g && d != h && d != i && e != f && e != g && e != h && e != i && f != g && f != h && f != i && g != h && g != i && h != i && l + k + j == 1953 && j < k && k < l) {
											count++;
											printf("No.%3d : %d+%d+%d=1953\n", count, j, k, l); 



										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	/* 此处是你的程序结束 */

	QueryPerformanceCounter(&end);		//获得终止硬件计数器计数

	printf("计数器频率 : %lldHz\n", tick.QuadPart);
	printf("计数器计数 : %lld\n", end.QuadPart - begin.QuadPart);
	printf("%.6f秒\n", (double)(end.QuadPart - begin.QuadPart) / tick.QuadPart);

	return 0;
}