/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ret, a,b,c;

	while (1) {
		printf("���������(2000-2030)���·�(1-12) : ");
		ret = scanf("%d %d", &a,&b); //����a�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
		char k = 1;

		if (ret != 2) {

			while (k != '\n') {
				k = getchar();
			}
		}
		else if (a >= 2000 && a <= 2030 && b >= 1 && b <= 12) {
			break;
		}

		printf("����Ƿ�������������\n"); //ȷ��һ�£�ret��ֵ����scanf�ķ���ֵ����ʲô���壿 


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
		printf("������"); printf("%d", a); printf("��"); printf("%d", b); printf("��1�յ�����(0 - 6��ʾ������ - ������) : ");
		ret = scanf("%d", &c); //����x�ķ�ʽ������scanf�Ҹ�ʽ��Ϊ%d����׼�÷�scanf
		char k = 1;

		if (ret != 1) {

			while (k != '\n') {
				k = getchar();
			}
		}
		else if (ret == 1 && (c >= 0 && c <= 6)) {
			break;
		}

		printf("����Ƿ�������������\n"); //ȷ��һ�£�ret��ֵ����scanf�ķ���ֵ����ʲô���壿 


	}
	
	
	printf("\n");
	printf("%d��%d�µ�����Ϊ:\n",a,b); 
	printf("������  ����һ  ���ڶ�  ������  ������  ������  ������\n");
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