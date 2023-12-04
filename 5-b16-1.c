/* 杨宇琨 信01 2252843*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

void input(char name[10][9], char number[10][8], int point[10])
{
	int i;
	for (i = 0; i < 10; i++) {
		printf("请输入第%d个人的学号、姓名、成绩\n", i + 1);
		scanf("%s %s %d", &number[i][0], &name[i][0], &point[i]);
	}
}

int sort(char name[10][9], char number[10][8], int point[10], int num_p[10])
{
	int i, j, k, m, top = 0;
	for (i = 0; i < 10; i++) {
		if (point[i] >= 60) {
			num_p[top++] = i;
		}
	}
	for (k = 0; k < top; k++) {
		for (j = k + 1; j < top; j++) {
			if (strcmp(number[num_p[k]], number[num_p[j]]) > 0)
				continue;
			if (strcmp(number[num_p[k]], number[num_p[j]]) < 0) {
				m = num_p[k];
				num_p[k] = num_p[j];
				num_p[j] = m;
			}
		}
	}
	return top;
}

void output(char name[10][9], char number[10][8], int point[10], int num_p[10], int top)
{
	int k;
	printf("\n");
	printf("及格名单(学号降序):\n");
	for (k = 0; k < top; k++) {
		printf("%s %s %d\n", &name[num_p[k]][0], &number[num_p[k]][0], point[num_p[k]]);
	}
}

int main()
{
	char name[10][9] = { 0 }, number[10][8] = { 0 };
	int point[10] = { 0 }, num_p[10] = { 0 }, top;
	input(name, number, point);
	top = sort(name, number, point, num_p);
	output(name, number, point, num_p, top);
	return 0;
}