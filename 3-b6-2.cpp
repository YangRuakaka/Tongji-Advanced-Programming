/* ������ ��01 2252843*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "������[0,100��)֮�������:" << endl;
	double a;
	cin >> a;
	cout << "��д�����:";
	if (a ==0) {
		cout << "��Բ";
	}
	if (!(int(a / 1000000000) == 0)) {
		switch (int(a / 1000000000)) {
			case 1:
				cout << "Ҽʰ";
				break;
			case 2:
				cout << "��ʰ";
				break;
			case 3:
				cout << "��ʰ";
				break;
			case 4:
				cout << "��ʰ";
				break;
			case 5:
				cout << "��ʰ";
				break;
			case 6:
				cout << "½ʰ";
				break;
			case 7:
				cout << "��ʰ";
				break;
			case 8:
				cout << "��ʰ";
				break;
			case 9:
				cout << "��ʰ";
				break;
		}
	}
	
	
	if (!(int(a / 1000000000) % 10 == 0&& int(a / 100000000) % 10==0)) {
		switch (int(a / 100000000) % 10) {
			case 1:
				cout << "Ҽ��";
				break;
			case 2:
				cout << "����";
				break;
			case 3:
				cout << "����";
				break;
			case 4:
				cout << "����";
				break;
			case 5:
				cout << "����";
				break;
			case 6:
				cout << "½��";
				break;
			case 7:
				cout << "����";
				break;
			case 8:
				cout << "����";
				break;
			case 9:
				cout << "����";
				break;
			case 0:
				cout << "��";
				break;
		}

		}

	

	
		
	
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0&& int(a / 10000000) % 10==0)) {
		if (!(int(a / 1000000) % 10 == 0 && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0)) {
			switch (int(a / 10000000) % 10) {
				case 1:
					cout << "Ҽǧ";
					break;
				case 2:
					cout << "��ǧ";
					break;
				case 3:
					cout << "��ǧ";
					break;
				case 4:
					cout << "��ǧ";
					break;
				case 5:
					cout << "��ǧ";
					break;
				case 6:
					cout << "½ǧ";
					break;
				case 7:
					cout << "��ǧ";
					break;
				case 8:
					cout << "��ǧ";
					break;
				case 9:
					cout << "��ǧ";
					break;
				case 0:
					cout << "��";
					break;
			}
		}
		else {
			switch (int(a / 10000000) % 10) {
				case 1:
					cout << "Ҽǧ";
					break;
				case 2:
					cout << "��ǧ";
					break;
				case 3:
					cout << "��ǧ";
					break;
				case 4:
					cout << "��ǧ";
					break;
				case 5:
					cout << "��ǧ";
					break;
				case 6:
					cout << "½ǧ";
					break;
				case 7:
					cout << "��ǧ";
					break;
				case 8:
					cout << "��ǧ";
					break;
				case 9:
					cout << "��ǧ";
					break;
			}

		}
		
	}
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0&& int(a / 1000000) % 10==0)) {
		if (int(a / 10000000) % 10 == 0) {
			switch (int(a / 1000000) % 10) {
				case 1:
					cout << "Ҽ��";
					break;
				case 2:
					cout << "����";
					break;
				case 3:
					cout << "����";
					break;
				case 4:
					cout << "����";
					break;
				case 5:
					cout << "���";
					break;
				case 6:
					cout << "½��";
					break;
				case 7:
					cout << "���";
					break;
				case 8:
					cout << "�ư�";
					break;
				case 9:
					cout << "����";
					break;
			}
		}
		else {
			if (!(int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0)) {
				switch (int(a / 1000000) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ư�";
						break;
					case 9:
						cout << "����";
						break;
					case 0:
						cout << "��";
						break;
				}
			}
			else {
				switch (int(a / 1000000) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ư�";
						break;
					case 9:
						cout << "����";
						break;
				}

			}
			
		}
	}
	
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0 && int(a / 100000) % 10 == 0)) {
		if (int(a / 1000000) % 10 == 0) {
			
				switch (int(a / 100000) % 10) {
					case 1:
						cout << "Ҽʰ";
						break;
					case 2:
						cout << "��ʰ";
						break;
					case 3:
						cout << "��ʰ";
						break;
					case 4:
						cout << "��ʰ";
						break;
					case 5:
						cout << "��ʰ";
						break;
					case 6:
						cout << "½ʰ";
						break;
					case 7:
						cout << "��ʰ";
						break;
					case 8:
						cout << "��ʰ";
						break;
					case 9:
						cout << "��ʰ";
						break;
				}
			
			

		}
		else {
			if (!(int(a / 10000) % 10 == 0)) {
				switch (int(a / 100000) % 10) {
					case 1:
						cout << "Ҽʰ";
						break;
					case 2:
						cout << "��ʰ";
						break;
					case 3:
						cout << "��ʰ";
						break;
					case 4:
						cout << "��ʰ";
						break;
					case 5:
						cout << "��ʰ";
						break;
					case 6:
						cout << "½ʰ";
						break;
					case 7:
						cout << "��ʰ";
						break;
					case 8:
						cout << "��ʰ";
						break;
					case 9:
						cout << "��ʰ";
						break;
					case 0:
						cout << "��";
						break;
				}
			}
			else {
				switch (int(a / 100000) % 10) {
					case 1:
						cout << "Ҽʰ";
						break;
					case 2:
						cout << "��ʰ";
						break;
					case 3:
						cout << "��ʰ";
						break;
					case 4:
						cout << "��ʰ";
						break;
					case 5:
						cout << "��ʰ";
						break;
					case 6:
						cout << "½ʰ";
						break;
					case 7:
						cout << "��ʰ";
						break;
					case 8:
						cout << "��ʰ";
						break;
					case 9:
						cout << "��ʰ";
						break;
				}

			}
			
		}
	}
	
	if (!(int(a / 1000000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0 && int(a / 10000) % 10 == 0&& int(a / 100000) % 10==0)) {
		switch (int(a / 10000) % 10) {
			case 1:
				cout << "Ҽ��";
				break;
			case 2:
				cout << "����";
				break;
			case 3:
				cout << "����";
				break;
			case 4:
				cout << "����";
				break;
			case 5:
				cout << "����";
				break;
			case 6:
				cout << "½��";
				break;
			case 7:
				cout << "����";
				break;
			case 8:
				cout << "����";
				break;
			case 9:
				cout << "����";
				break;
			case 0:
				cout << "��";
				break;
		}


	}
		
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0&& int(a / 10000) % 10==0&& int(a / 1000) % 10==0)) {
		switch (int(a / 1000) % 10) {
			case 1:
				cout << "Ҽǧ";
				break;
			case 2:
				cout << "��ǧ";
				break;
			case 3:
				cout << "��ǧ";
				break;
			case 4:
				cout << "��ǧ";
				break;
			case 5:
				cout << "��ǧ";
				break;
			case 6:
				cout << "½ǧ";
				break;
			case 7:
				cout << "��ǧ";
				break;
			case 8:
				cout << "��ǧ";
				break;
			case 9:
				cout << "��ǧ";
				break;
			case 0:
				cout << "��";
				break;
		}
	}
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0&& int(a / 100) % 10==0)) {
		if (int(a / 1000) % 10 == 0) {
			switch (int(a / 100) % 10) {
			    case 1:
					cout << "Ҽ��";
					break;
				case 2:
					cout << "����";
					break;
				case 3:
					cout << "����";
					break;
				case 4:
					cout << "����";
					break;
				case 5:
					cout << "���";
					break;
				case 6:
					cout << "½��";
					break;
				case 7:
					cout << "���";
					break;
				case 8:
					cout << "�ư�";
					break;
				case 9:
					cout << "����";
					break;
			}
		}
		else {
			if (!(int(a / 100) % 10 && int(a - int(a / 1000000000) * 1e9) % 10)) {
				switch (int(a / 100) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ư�";
						break;
					case 9:
						cout << "����";
						break;
					case 0:
						cout << "��";
						break;
				}
			}
			else {
				switch (int(a / 100) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ư�";
						break;
					case 9:
						cout << "����";
						break;
				}
			}
			
		}
	}
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0 && int(a / 100) % 10 == 0&& int(a / 10) % 10==0)) {
		if (int(a / 100) % 10==0) {
			switch (int(a / 10) % 10) {
				case 1:
					cout << "Ҽʰ";
					break;
				case 2:
					cout << "��ʰ";
					break;
				case 3:
					cout << "��ʰ";
					break;
				case 4:
					cout << "��ʰ";
					break;
				case 5:
					cout << "��ʰ";
					break;
				case 6:
					cout << "½ʰ";
					break;
				case 7:
					cout << "��ʰ";
					break;
				case 8:
					cout << "��ʰ";
					break;
				case 9:
					cout << "��ʰ";
					break;
			}
		}
		else {
			if (!(int(a - int(a / 1000000000) * 1e9) % 10)) {
				switch (int(a / 10) % 10) {

					case 1:
						cout << "Ҽʰ";
						break;
					case 2:
						cout << "��ʰ";
						break;
					case 3:
						cout << "��ʰ";
						break;
					case 4:
						cout << "��ʰ";
						break;
					case 5:
						cout << "��ʰ";
						break;
					case 6:
						cout << "½ʰ";
						break;
					case 7:
						cout << "��ʰ";
						break;
					case 8:
						cout << "��ʰ";
						break;
					case 9:
						cout << "��ʰ";
						break;
					case 0:
						cout << "��";
						break;
				}
			}
			else {
				switch (int(a / 10) % 10) {

					case 1:
						cout << "Ҽʰ";
						break;
					case 2:
						cout << "��ʰ";
						break;
					case 3:
						cout << "��ʰ";
						break;
					case 4:
						cout << "��ʰ";
						break;
					case 5:
						cout << "��ʰ";
						break;
					case 6:
						cout << "½ʰ";
						break;
					case 7:
						cout << "��ʰ";
						break;
					case 8:
						cout << "��ʰ";
						break;
					case 9:
						cout << "��ʰ";
						break;
				}
			}
			
		}
	}
	if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0 && int(a / 100) % 10 == 0 && int(a / 10) % 10 == 0 && int(a - int(a / 1000000000) * 1e9) % 10 == 0)) {
		switch (int(a - int(a / 1000000000) * 1e9) % 10) {
			case 1:
				cout << "ҼԲ";
				break;
			case 2:
				cout << "��Բ";
				break;
			case 3:
				cout << "��Բ";
				break;
			case 4:
				cout << "��Բ";
				break;
			case 5:
				cout << "��Բ";
				break;
			case 6:
				cout << "½Բ";
				break;
			case 7:
				cout << "��Բ";
				break;
			case 8:
				cout << "��Բ";
				break;
			case 9:
				cout << "��Բ";
				break;
			case 0:
				cout << "Բ";
		}
	}
	
	if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0 && int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
		cout << "��";
	}
	else {
		if (!((int(a / 100000000) % 10 == 0 && int(a / 100000000) == 0 && int(a / 10000000) % 10 == 0 && int(a / 1000000) % 10 == 0) && int(a / 100000) % 10 == 0 && int(a / 10000) % 10 == 0 && int(a / 1000) % 10 == 0 && int(a / 100) % 10 == 0 && int(a / 10) % 10 == 0 && int(a - int(a / 1000000000) * 1e9) % 10 == 0)) {
			if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ƽ�";
						break;
					case 9:
						cout << "����";
						break;
					case 0:
						cout << "��";
				}
				cout << "��";
			}
			else if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				cout << "��";
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�Ʒ�";
						break;
					case 9:
						cout << "����";
						break;

				}

			}
			else {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ƽ�";
						break;
					case 9:
						cout << "����";
						break;

				}
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�Ʒ�";
						break;
					case 9:
						cout << "����";
						break;

				}
			}
		}
		else {
			if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10 == 0) {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ƽ�";
						break;
					case 9:
						cout << "����";
						break;

				}
				cout << "��";
			}
			else if (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10 == 0) {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�Ʒ�";
						break;
					case 9:
						cout << "����";
						break;

				}

			}
			else {
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8) / 0.1) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�ƽ�";
						break;
					case 9:
						cout << "����";
						break;

				}
				switch (int((a + 0.0001 - int(a / 1000000000) * 1e9 - int(a / 100000000) % 10 * 1e8 - int(a / 10000000) % 10 * 1e7) / 0.01) % 10) {
					case 1:
						cout << "Ҽ��";
						break;
					case 2:
						cout << "����";
						break;
					case 3:
						cout << "����";
						break;
					case 4:
						cout << "����";
						break;
					case 5:
						cout << "���";
						break;
					case 6:
						cout << "½��";
						break;
					case 7:
						cout << "���";
						break;
					case 8:
						cout << "�Ʒ�";
						break;
					case 9:
						cout << "����";
						break;

				}

			}

		}
	}
	
	return 0;


}