/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ret, a,b,c;

	while (1) {
		printf("请输入年份(2000-2030)和月份(1-12) : ");
		ret = scanf("%d %d", &a,&b); //读入a的方式必须是scanf且格式符为%d，不准用非scanf
		char k = 1;

		if (ret != 2) {

			while (k != '\n') {
				k = getchar();
			}
		}
		else if (a >= 2000 && a <= 2030 && b >= 1 && b <= 12) {
			break;
		}

		printf("输入非法，请重新输入\n"); //确认一下，ret的值（即scanf的返回值）是什么含义？ 


	}
	int   d = 1, i;
	if (a % 4 == 0) {
		if (a % 100 == 0) {
			i = 0;
		}
		else {
			i = 1;
		}
	}
	else if (a % 400 == 0) {
		i = 1;
	}
	else {
		i = 0;
	}
	while (1) {
		printf("请输入"); printf("%d", a); printf("年"); printf("%d", b); printf("月1日的星期(0 - 6表示星期日 - 星期六) : ");
		ret = scanf("%d", &c); //读入x的方式必须是scanf且格式符为%d，不准用非scanf
		char k = 1;

		if (ret != 1) {

			while (k != '\n') {
				k = getchar();
			}
		}
		else if (ret == 1 && (c >= 0 && c <= 6)) {
			break;
		}

		printf("输入非法，请重新输入\n"); //确认一下，ret的值（即scanf的返回值）是什么含义？ 


	}
	
	
	printf("\n");
	printf("%d年%d月的月历为:\n",a,b); 
	printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
		if (c == 0) {
			printf("%4d", d);
			for (d = 2; d <= 31; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 1) {
			printf("%12d", d);
			for (d = 2; d <= 31; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 2) {
			printf("%20d", d);
			for (d = 2; d <= 31; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 3) {
			printf("%28d", d);
			for (d = 2; d <= 31; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 4) {
			printf("%36d", d);
			for (d = 2; d <= 31; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 5) {
			printf("%44d", d);
			for (d = 2; d <= 31; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 6) {
			printf("%52d", d);
			for (d = 2; d <= 31; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		
	}
	else if (b == 4 || b == 6 || b == 9 || b == 11) {
	     	if (c == 0) {
			printf("%4d", d);
			for (d = 2; d <= 30; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 1) {
			printf("%12d", d);
			for (d = 2; d <= 30; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 2) {
			printf("%20d", d);
			for (d = 2; d <= 30; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 3) {
			printf("%28d", d);
			for (d = 2; d <= 30; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 4) {
			printf("%36d", d);
			for (d = 2; d <= 30; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 5) {
			printf("%44d", d);
			for (d = 2; d <= 30; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
		else if (c == 6) {
			printf("%52d", d);
			for (d = 2; d <= 30; d++) {
				printf("%8d", d);
				if ((d + c) % 7 == 0) {
					printf("\n");
					d++;
					printf("%4d", d);
					continue;
				}

			}
		}
	}
  else	if (b ==2&&i==1) {
			if (c == 0) {
				printf("%4d", d);
				for (d = 2; d <= 29; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 1) {
				printf("%12d", d);
				for (d = 2; d <= 29; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 2) {
				printf("%20d", d);
				for (d = 2; d <= 29; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 3) {
				printf("%28d", d);
				for (d = 2; d <= 29; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 4) {
				printf("%36d", d);
				for (d = 2; d <= 29; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 5) {
				printf("%44d", d);
				for (d = 2; d <= 29; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 6) {
				printf("%52d", d);
				for (d = 2; d <= 29; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
   }
		else {

			if (c == 0) {
				printf("%4d", d);
				for (d = 2; d <= 28; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 1) {
				printf("%12d", d);
				for (d = 2; d <= 28; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 2) {
				printf("%20d", d);
				for (d = 2; d <= 28; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 3) {
				printf("%28d", d);
				for (d = 2; d <= 28; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 4) {
				printf("%36d", d);
				for (d = 2; d <= 28; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 5) {
				printf("%44d", d);
				for (d = 2; d <= 28; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}
			else if (c == 6) {
				printf("%52d", d);
				for (d = 2; d <= 28; d++) {
					printf("%8d", d);
					if ((d + c) % 7 == 0) {
						printf("\n");
						d++;
						printf("%4d", d);
						continue;
					}

				}
			}

		

		}
		printf("\n");
		

	return 0;
}