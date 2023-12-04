/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int leap(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		return 1;
	else
		return 0;
}

int sumdate( int y ,int m,int date) {
	int k,i,sum;
	i = leap(y);

	if (m <= 0 || m > 12) {
		printf("输入错误-月份不正确\n");
		return 0;
	}
	
		if (i == 1) {
			int arr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
			if (date > arr[m-1]) {
				printf("输入错误-日与月的关系非法\n");
				return 0;
			}
			else {
				for (k = 0,sum=0; k < m-1; k++) {
					
					sum = sum + arr[k];
						
				}
				sum = sum + date;
				return sum;
			}
				
				
		}
		else {
			int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
			if (date > arr[m-1]) {
				printf("输入错误-日与月的关系非法\n");
				return 0;
			}
			else {
				for (k = 0, sum = 0; k < m -1; k++) {

					sum = sum + arr[k ];

				}
				sum = sum + date;
				return sum;
			}
		}
		
	
	


}









int main()
{
	printf("请输入年，月，日\n");
	int y, m, date, sum;
	scanf("%d %d %d", &y, &m, &date);
	sum = sumdate(y, m, date);
	if (sum == 0) {
		return 0;
	}
	else {
		printf("%d-%d-%d是%d年的第%d天\n", y, m, date, y, sum);
		return 0;
	}

}
