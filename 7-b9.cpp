/* 2252843 ������ ��01 */

/* ���������ϵͳ�ĺ궨�塢��Ҫ��ͷ�ļ��� */
#include <iostream>
#include<iomanip>
#include "read_stulist.h"
using namespace std;

#define MAX_FILENAME_LEN		512	//�����ļ�������󳤶�

/* stu_metge ����ÿ��ѧ������Ϣ������ѧ�š�������������Ҫ��˽����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_merge {
private:
	int  stu_no;					//ѧ��
	char stu_name[MAX_NAME_LEN];  //����
	friend class stu_list;
	/* ���������private���ݳ�Ա����Ա�����Լ�������Ҫ������ */

public:
	//���಻�������κεĹ������ݳ�Ա����Ա����
};

/* stu_list ������ѡ����Ϣ���������ݲ�׼�����ɼ����������Ҫ��������� */
class stu_list {
private:
	student list_round_1[MAX_STU_NUM];	//��һ��ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_1;						//��һ��ѡ�ε�ѧ������

	student list_round_2[MAX_STU_NUM];	//�ڶ���ѡ�ε�ѧ�������������򡢲�ȥ�أ�
	int list_num_2;						//�ڶ���ѡ�ε�ѧ������

	stu_merge list_merge[MAX_STU_NUM];	//�ϲ����ѧ��������ȥ�أ����������У�
	int list_merge_num;					//�ϲ����ѧ��������Ŀǰ����ӡ�����������ڲ������������Ҫ��Ҳ��Ҫɾ����

	/* ���������private���ݳ�Ա�ͳ�Ա����
	   ע�⣬���������array / set / map / vector��STL���� */

public:
	stu_list();										//���캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
	int read(const char* filename, const int round);	//���ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
	int print(const char* prompt = NULL);				//��ӡ���յ�ѡ������
	void combination();
	/* �������������public��Ա��������ʾ���ϲ���ȥ�ء�����ȣ�
	   �������幫�е����ݳ�Ա
	   �������ڳ�Ա������ʹ��array / set / map / vector��STL���� */

};

/* --- ������Ը���stu_merge/stu_list������ĳ�Ա����������ʵ�� --- */
/***************************************************************************
  �������ƣ�
  ��    �ܣ��Զ�ȡ�ļ�������������ȥ��
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
void stu_list::combination()
{
	student temp;
	for (int i = 0; i < list_num_1 - 1; i++) {
		for (int j = i + 1; j < list_num_1; j++) {
			if (list_round_1[i].no > list_round_1[j].no) {
				temp = list_round_1[i];
				list_round_1[i] = list_round_1[j];
				list_round_1[j] = temp;
			}
		}
	}
	for (int i = 0; i < list_num_1 - 1; i++) {
		if (list_round_1[i].no == list_round_1[i + 1].no) {
			for (int j = i ; j < list_num_1 -1; j++) {
				list_round_1[j] = list_round_1[j + 1];
			}
			list_num_1--;
		}
	}
	for (int i = 0; i < list_num_2 - 1; i++) {
		for (int j = i + 1; j < list_num_2; j++) {
			if (list_round_2[i].no > list_round_2[j].no) {
				temp = list_round_2[i];
				list_round_2[i] = list_round_2[j];
				list_round_2[j] = temp;
			}
		}
	}
	for (int i = 0; i < list_num_2 - 1; i++) {
		if (list_round_2[i].no == list_round_2[i + 1].no) {
			for (int j = i; j < list_num_2 - 1; j++) {
				list_round_2[j] = list_round_2[j + 1];
			}
			list_num_2--;
		}
	}
	
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ����ļ��ж���ѡ����Ϣ��roundΪ1/2����ʾѡ���ִ�
  ���������
  �� �� ֵ��
  ˵    �������캯����������ɳ�ʼ�����ܣ��������Ҫ�������պ�������
***************************************************************************/
stu_list::stu_list()
{

}

/***************************************************************************
  �������ƣ�
  ��    �ܣ���ʾ��̬���ӿ��ʹ�ã��������е��þ�̬���ӿ��е�Ԥ�ú���
  ���������
  �� �� ֵ��
  ˵    ��������������Ҫ�޸�
***************************************************************************/
int stu_list::read(const char* filename, const int round)
{
	int ret = 0;
	/* ��ȡ��1/2�ֵ�ѡ����������ӡ */
	switch (round) {
		case 1:
			this->list_num_1 = read_stulist(filename, this->list_round_1, MAX_STU_NUM);
			if (this->list_num_1 > 0)
				print_stulist("��һ��ѡ��������", this->list_round_1, this->list_num_1);
			else
				ret = -1;
			break;
		case 2:
			this->list_num_2 = read_stulist(filename, this->list_round_2, MAX_STU_NUM);
			if (this->list_num_2 > 0)
				print_stulist("�ڶ���ѡ��������", this->list_round_2, this->list_num_2);
			else
				ret = -1;
			break;
		default:
			ret = -1;
			break;
	}

	return ret;
}


/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ������ӡ���յ�ѡ������
***************************************************************************/
int stu_list::print(const char* prompt)
{
	combination();
	print_stulist("��һ��ѡ��������", this->list_round_1, this->list_num_1);
	print_stulist("�ڶ���ѡ��������", this->list_round_2, this->list_num_2);

	cout << "����ѡ������" << endl;
	cout << "===========================================================" << endl;
	cout << "��� ѧ��     ����                            ��һ�� �ڶ���" << endl;
	cout << "============================================================" << endl;
	for (int i = 0,j = 0, k = 0; j != list_num_1 || k != list_num_2;) {
		if (list_round_1[j].no == list_round_2[k].no&&j< list_num_1&&k< list_num_2) {
			cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_1[j].no << setw(32) << list_round_1[j].name << "Y      Y" << endl;
			i++;
			k++;
			j++;
		}
		else if (list_round_1[j].no < list_round_2[k].no && j < list_num_1 && k < list_num_2) {
			bool withdrawal = 1;
			for (int m = 0; m < list_num_2; m++) {
				if (list_round_1[j].no == list_round_2[m].no) {
					student temp;
					temp = list_round_2[m];
					list_round_2[m] = list_round_2[k];
					list_round_2[k] = temp;
					withdrawal = 0;
					break;
				}
				
			}
			if (withdrawal) {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_1[j].no << setw(32) << list_round_1[j].name << "Y      �˿�" << endl;
				i++;
				j++;
			}
			else {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_1[j].no << setw(32) << list_round_1[j].name << "Y      Y" << endl;
				i++;
				k++;
				j++;
			}
		}
		else if (list_round_1[j].no > list_round_2[k].no && j < list_num_1 && k < list_num_2) {
			bool makeup = 1;
			for (int m = 0; m < list_num_1; m++) {
				if (list_round_2[k].no == list_round_1[m].no) {
					student temp;
					temp = list_round_1[m];
					list_round_1[m] = list_round_1[j];
					list_round_1[j] = temp;
					makeup = 0;
					break;
				}

			}
			if (makeup) {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_2[k].no << setw(32) << list_round_2[k].name << "/      ��ѡ" << endl;
				i++;
				k++;
			}
			else {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_2[k].no << setw(32) << list_round_2[k].name << "Y      Y" << endl;
				i++;
				k++;
				j++;
			}
		}
		else if (j == list_num_1) {
			bool makeup = 1;
			for (int m = 0; m < list_num_1; m++) {
				if (list_round_2[k].no == list_round_1[m].no) {
					makeup = 0;
					break;
				}
			}
			if (makeup) {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_2[k].no << setw(32) << list_round_2[k].name << "/      ��ѡ" << endl;
				i++;
				k++;
			}
			else {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_2[k].no << setw(32) << list_round_2[k].name << "Y      Y" << endl;
				i++;
				k++;
			}
		}
		else{
			bool withdrawal = 1;
			for (int m = 0; m < list_num_2; m++) {
				if (list_round_1[j].no == list_round_2[m].no) {
					withdrawal = 0;
					break;
				}

			}
			if (withdrawal) {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_1[j].no << setw(32) << list_round_1[j].name << "Y      �˿�" << endl;
				i++;
				j++;
			}
			else {
				cout << setw(5) << setiosflags(ios::left) << i + 1 << setw(9) << list_round_1[j].no << setw(32) << list_round_1[j].name << "Y      Y" << endl;
				i++;
				j++;
			}
		}
	}
	cout << "============================================================" << endl;
	return 0;
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main(int argc, char** argv)
{
	char file1[MAX_FILENAME_LEN], file2[MAX_FILENAME_LEN];

	cout << "������ǰһ��ѡ�ε������ļ� : ";
	gets_s(file1); //cin���ܶ��пո���ļ�

	cout << "�������һ��ѡ�ε������ļ� : ";
	gets_s(file2);

	stu_list list;

	/* �������� */
	if (list.read(file1, 1) < 0)
		return -1;
	if (list.read(file2, 2) < 0)
		return -1;

	/* �������� */


	/* ��ӡ */
	list.print("����ѡ������");

	return 0;
}

