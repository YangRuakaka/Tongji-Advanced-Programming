/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h> //ȡϵͳʱ��
using namespace std;


int main()
{
	LARGE_INTEGER tick, begin, end;

	QueryPerformanceFrequency(&tick);	//��ü�����Ƶ��
	QueryPerformanceCounter(&begin);	//��ó�ʼӲ������������

	/* �˴�����ĳ���ʼ */
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
										j = a * 100 + b* 10 + c;
										k = d * 100 + e * 10 + f;
										if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i && b != c && b != d && b != e && b != f && b != g && b != h && b != i && c != d && c != e && c != f && c != g && c != h && c != i && d != e && d != f && d != g && d != h && d != i && e != f && e != g && e != h && e != i && f != g && f != h && f != i && g != h && g != i && h != i && l + k + j == 1953&&j<k&&k<l) {
											count++;
												cout << "No." << setw(3) << count << " : " << j << "+" << k << "+" << l << "=" << "1953" << endl;
											
											
											
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
		/* �˴�����ĳ������ */

		QueryPerformanceCounter(&end);		//�����ֹӲ������������

		cout << "������Ƶ�� : " << tick.QuadPart << "Hz" << endl;
		cout << "���������� : " << end.QuadPart - begin.QuadPart << endl;
		cout << setiosflags(ios::fixed) << setprecision(6) << double(end.QuadPart - begin.QuadPart) / tick.QuadPart << "��" << endl;

		return 0;
	
}