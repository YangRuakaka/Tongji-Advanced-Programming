#include<iostream>
#include"ex.h"
using namespace std;

int j = 0, k = 0;
void arr(char* p,int &d)
{
	d++;
	char* g = p;
	cout << *(g) << endl;
}
void count(int *x)
{
	int n = 0;
	static int m = 0;
	j++;
	m++;
	n++;
	x++;
	cout << *x << endl;
	return;
}
int main()
{
	const char* l = "avc";
	int a = 10, b = 15;
	char c[10] = { 0 },d[2][3];
	char s = 's';
	float f = 1.25;

	int e[8];
	char* p1;
	cout << l << endl;
	cout << &l << endl;
	for (int i = 0; i < 8; i++) {
		c[i] = i+'0';
		e[i] = i;
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			d[i][j] = i + j+'0';
		}
	}
	p1 = c;
	for (int i = 0; i < 10; i++) {
		a = rand() % 10, b = rand() % 10;
		display();
		cout << "max=" << max(a, b) << endl;
		a = a + 1;
		cout << a << "     " << b << endl;
		cout << "max=" << max(a, c[i]) << endl;
		count(e);
		arr(d[i], a);
		cout << c[5 + i] << endl;
		cout << c[11] << endl;
	}
	return 0;
}