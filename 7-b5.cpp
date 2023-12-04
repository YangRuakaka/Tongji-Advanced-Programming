/* 2252843 ������ ��01 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�������ȫ��ֻ��������궨�岻�ܴ����ƣ�
   3������������һ������������Ҫ����Ҫ��
   ---------------------------------------------------------------------
*/

#define N	10

struct course {
	float value;	//ĳ�γ̵ĳɼ����ٷ��ƣ�
	float weight;	//ĳ�γ̵�ѧ�֣�Ȩ�أ�
	int   gpa;		//ĳ�γ̵ļ��㣨ͬ�ù���[0..60) - 0, [60,70) - 2, [70,80) - 3, [80-90) - 4,[90,100] - 5��
};

struct student {
	int   no;               //ѧ�ţ���Ȼ��int���������˴������ǣ�
	char  name[9];          //���������4������
	struct course score[3]; //��������ſεĳɼ���δʹ�ú궨�壬����ʵ��ʱ��ֱ��д3���ɣ�
	float averagegpa;          //��������������Ϊ��Ҫ���ӵĽṹ���Ա����һ��������Ҫ��ɾ������
};

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    �����˴�����������һ���������Һ������βΡ��Զ������ȶ������Ǽ򵥱�������������[]��ʽ��
***************************************************************************/



/***************************************************************************
  �������ƣ�
  ��    �ܣ�����10��ѧ������Ϣ
  ���������
  �� �� ֵ��
  ˵    ������������ֺ궨��N
***************************************************************************/
void input(struct student* stu, int num)
{
	/* �����������ͱ����⣬�����������������κ���ʽ�ı���
		 ������ã�����ɾ�������������ӻ��滻Ϊ������ʽ�ı���
		����for(int k=0; )��ʽ���±�������ͬ����ֹ */
	int i, j;
	for (i = 0; i < num; i++,stu++) {
		cout << "�������" << setw(2) << i + 1 << "��ѧ������Ϣ : "; 
		cin >> stu->no;
		getchar();
		cin.getline(stu->name,9,' ');
		for (j = 0; j < 3; j++) {
			cin >> stu->score[j].value;
			cin >> stu->score[j].weight;
		}
	}

	/* ������ʵ�ֲ��� */
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ����������Ϣ
  ���������
  �� �� ֵ��
  ˵    ������������ֺ궨��N
***************************************************************************/
void output_base(struct student* stu, int num)
{
	/* ��������ָ������⣬�����������������κ���ʽ�ı���
		 ������ã�����ɾ�������������ӻ��滻Ϊ������ʽ�ı���
		����for(int i=0; )��ʽ���±�������ͬ����ֹ */
	struct student* ps=stu;
	struct course* pc=stu->score;
	cout << "10��ѧ���ĳɼ�" << endl;
	cout << "��� ѧ��    ����     ����1 Ȩ��1 ����2 Ȩ��2 ����3 Ȩ��3 ƽ������" << endl;
	cout << "==================================================================" << endl;
	for (;ps-stu<10;ps++,pc = ps->score) {
		cout.unsetf(ios::fixed);
		cout << setiosflags(ios::left) << setw(5) << ps - stu + 1 << setw(8) << ps->no << setw(9) << ps->name;
		if (pc->value >= 60)
			cout << setw(6) << int((pc->value - 60) / 10) + 2 << setw(6) << pc->weight;
		else
			cout << setw(6) << 0 << setw(6) << pc->weight;
		if ((pc + 1)->value >= 60)
			cout << setw(6) << int(((pc + 1)->value - 60) / 10) + 2 << setw(6) << (pc + 1)->weight;
		else
			cout << setw(6) << 0 << setw(6) << (pc + 1)->weight;
		if ((pc + 2)->value >= 60)
			cout << setw(6) << int(((pc + 2)->value - 60) / 10) + 2 << setw(6) << (pc + 2)->weight ;
		else
			cout << setw(6) << 0 << setw(6) << (pc + 2)->weight ;
		if(pc->value >= 60&& (pc + 1)->value >= 60&& (pc + 2)->value >= 60)
			cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight + (int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight + (int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight)<<endl;
		else {
			if (pc->value >= 60 && (pc + 1)->value >= 60)
				cout << setiosflags(ios::fixed)<<setw(6)<<setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight + (int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
			else if (pc->value >= 60 && (pc + 2)->value >= 60)
				cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight + (int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
			else if ((pc + 2)->value >= 60 && (pc + 1)->value >= 60)
				cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight + (int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
			else if (pc->value >= 60)
				cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
			else if ((pc + 1)->value >= 60)
				cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
			else if ((pc + 2)->value >= 60)
				cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
			else
				cout << setw(6) << 0<<endl;
		}
	}
	cout << endl;
	/* ������ʵ�ֲ��֣��������κ���ʽ��[]���� */
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ����������ߵ�ѧ���������в��У�
  ���������
  �� �� ֵ��
  ˵    ������������ֺ궨��N
***************************************************************************/
void output_max(struct student* stu, int num)
{
	cout << "������ߵ�ѧ��Ϊ" << endl;
	cout << "��� ѧ��    ����     ����1 Ȩ��1 ����2 Ȩ��2 ����3 Ȩ��3 ƽ������" << endl;
	cout << "==================================================================" << endl;
	struct student* ps = stu;
	struct course* pc = stu->score;
	struct student max;
	for (; ps - stu < 10; ps++, pc = ps->score) {
		if (pc->value >= 60)
			pc->gpa = int((pc->value - 60) / 10) + 2; 
		else
			pc->gpa = 0;
		if ((pc + 1)->value >= 60)
			(pc + 1)->gpa = int(((pc + 1)->value - 60) / 10) + 2;
		else
			(pc + 1)->gpa = 0;
		if ((pc + 2)->value >= 60)
			(pc + 2)->gpa = int(((pc + 2)->value - 60) / 10) + 2;
		else
			(pc + 2)->gpa = 0;
		ps->averagegpa = (pc->gpa * pc->weight + (pc + 1)->gpa * (pc + 1)->weight + (pc + 2)->gpa * (pc + 2)->weight) / (pc->weight + (pc + 1)->weight + (pc + 2)->weight);
	}
	for (ps = stu; ps - stu < 10; ps++, pc = ps->score) {
		int i = 0;
		for (struct student* p = stu; p - stu < 10; p++) {
			if (ps->averagegpa >= p->averagegpa&&ps!=p)
				i++;
		}
		if (i == 9) {
			cout.unsetf(ios::fixed);
			cout << setiosflags(ios::left) << setw(5) << ps - stu + 1 << setw(8) << ps->no << setw(9) << ps->name;
			if (pc->value >= 60)
				cout << setw(6) << int((pc->value - 60) / 10) + 2 << setw(6) << pc->weight;
			else
				cout << setw(6) << 0 << setw(6) << pc->weight;
			if ((pc + 1)->value >= 60)
				cout << setw(6) << int(((pc + 1)->value - 60) / 10) + 2 << setw(6) << (pc + 1)->weight;
			else
				cout << setw(6) << 0 << setw(6) << (pc + 1)->weight;
			if ((pc + 2)->value >= 60)
				cout << setw(6) << int(((pc + 2)->value - 60) / 10) + 2 << setw(6) << (pc + 2)->weight;
			else
				cout << setw(6) << 0 << setw(6) << (pc + 2)->weight;
			if (pc->value >= 60 && (pc + 1)->value >= 60 && (pc + 2)->value >= 60)
				cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight + (int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight + (int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
			else {
				if (pc->value >= 60 && (pc + 1)->value >= 60)
					cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight + (int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
				else if (pc->value >= 60 && (pc + 2)->value >= 60)
					cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight + (int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
				else if ((pc + 2)->value >= 60 && (pc + 1)->value >= 60)
					cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight + (int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
				else if (pc->value >= 60)
					cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int((pc->value - 60) / 10) + 2) * pc->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
				else if ((pc + 1)->value >= 60)
					cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int(((pc + 1)->value - 60) / 10) + 2) * (pc + 1)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
				else if ((pc + 2)->value >= 60)
					cout << setiosflags(ios::fixed) << setw(6) << setprecision(3) << ((int(((pc + 2)->value - 60) / 10) + 2) * (pc + 2)->weight) / (pc->weight + (pc + 2)->weight + (pc + 1)->weight) << endl;
				else
					cout << setw(6) << 0 << endl;
			}
		}
	}
	/* ��������������������͵ļ򵥱������������������� */
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main������׼��
***************************************************************************/
int main()
{
	struct student stu[N];

	input(stu, N);		//����10��ѧ������Ϣ
	output_base(stu, N);	//���10��ѧ���Ļ�����Ϣ
	output_max(stu, N);	//�����ߣ������ж����

	return 0;
}

/*
�������ݣ����Ƶ�cmd���ɣ�����ʱ����������һ�飩

2150844 ���ں� 76.5 4 82 5 52 2
2154284 �� 63 4 49 1 87 6
2253105 �Ժ��� 56 3 76 4 69 5
2254319 ��ϣ�� 44.5 2 83.5 4 87 6
2251754 ��ҫ�� 91 4 43.5 1 66 3
2250269 ˾ͽ�ɂ� 79 6 85.5 3 62 2
2252558 ������ 86 3 63 3 77.5 4
1951475 �Բ��� 49.5 3 86 6 93.5 3
2153879 ��¬��� 81.5 2 64.5 3 87 4
2253636 ������ 73 3 62 2 85 5

*/