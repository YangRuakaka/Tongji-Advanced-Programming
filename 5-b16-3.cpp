/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

void input(string number[], string name[], int point[])
{
	int i;
	for (i = 0; i < 10; i++) {
		cout << "�������" << i + 1 << "���˵�ѧ�š��������ɼ�" << endl;
		cin >> number[i] >> name[i] >> point[i];
	}

}

void sort(string number[], string name[], int point[], int num_f[])
{
	int i, j, k, m,top=0;
	for (i = 0; i < 10; i++) {
		num_f[top++] = i;
	}
	for (k = 0; k < 10; k++) {
		for (j = k + 1; j < 10; j++) {
			if (number[num_f[k]] < number[num_f[j]])
				continue;
			if (number[num_f[k]] > number[num_f[j]]) {
				m = num_f[k];
				num_f[k] = num_f[j];
				num_f[j] = m;
			}
		}
	}

}

void output(string number[], string name[], int point[], int num_f[])
{
	int k;
	cout << endl;
	cout << "ȫ��ѧ��(ѧ������):" << endl;
	for (k = 0; k < 10; k++) {
		cout << name[num_f[k]] << " " << number[num_f[k]] << " " << point[num_f[k]] << endl;
	}
}

int main()
{
	string number[10], name[10];
	int point[10] = { 0 }, num_f[10] = { 0 };
	input(number, name, point);
    sort(number, name, point, num_f);
	output(number, name, point, num_f);
	return 0;
}
