/* ������ ��01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	printf("�������꣬�£���\n");
    int a, b, c, d, i;
	scanf("%d %d %d" ,&a,&b,&c);
	
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
	if (i == 1) {
		if (b == 1) {
			if (c >= 0 && c <= 31) {
				d = c;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 2) {
			if (c >= 0 && c <= 29) {
				d = c + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 3) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 29;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 4) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 29 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 5) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 29 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 6) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 29 + 31 + 30 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 7) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 29 + 31 + 30 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 8) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 29 + 31 + 30 + 31 + 30 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 9) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 10) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 11) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 12) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else {
			printf("�������-�·ݲ���ȷ\n"); 
		}
	}
	if (i == 0) {
		if (b == 1) {
			if (c >= 0 && c <= 31) {
				d = c;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 2) {
			if (c >= 0 && c <= 28) {
				d = c + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 3) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 28;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 4) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 28 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 5) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 28 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 6) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 28 + 31 + 30 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 7) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 28 + 31 + 30 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 8) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 28 + 31 + 30 + 31 + 30 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 9) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 10) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 11) {
			if (c >= 0 && c <= 30) {
				d = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else if (b == 12) {
			if (c >= 0 && c <= 31) {
				d = c + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
				printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, d);
			}
			else {
				printf("�������-�����µĹ�ϵ�Ƿ�\n");
			}
		}
		else {
			printf("�������-�·ݲ���ȷ\n"); 
		}
	}

	return 0;
}


