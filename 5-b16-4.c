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

void sort(char name[10][9], char number[10][8], int point[10], int num_p[10])
{
	int  i,j, k, m,top=0;
	for (i = 0; i < 10; i++) {
		num_p[top++] = i;
	}
	for (k = 0; k < 10; k++) {
		for (j = k + 1; j < 10; j++) {
			if (point[num_p[k]] > point[num_p[j]])
				continue;
			if (point[num_p[k]] < point[num_p[j]]) {
				m = num_p[k];
				num_p[k] = num_p[j];
				num_p[j] = m;
			}
		}
	}
}

void output(char name[10][9], char number[10][8], int point[10], int num_p[10])
{
	int k;
	printf("\n");
	printf("全部学生(成绩降序):\n");
	for (k = 0; k <10; k++) {
		printf("%s %s %d\n", &name[num_p[k]][0], &number[num_p[k]][0], point[num_p[k]]);
	}
}

int main()
{
	char name[10][9] = { 0 }, number[10][8] = { 0 };
	int point[10] = { 0 }, num_p[10] = { 0 };
	input(name, number, point);
    sort(name, number, point, num_p);
	output(name, number, point, num_p);
	return 0;
}